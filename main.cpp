#include <iostream>
#include <vector>

using namespace std;

class Job {
private:
    int numbermachine = 0;
    int numberproces = 0;
    int valueofproces = 0;
public:

    void setvalue(int i, int j, int k) {
        numbermachine = i;
        numberproces = j;
        valueofproces = k;
    }
    void setnumberproces(int number)
    {
        numberproces=number;

    }
    void valueproces(int number){
        valueofproces=number;
    }
    int getnumbermachine() {
        return numbermachine;
    }

    int getnumberproces() {
        return numberproces;
    }

    int getvalue() {
        return valueofproces;
    }

    friend ostream &operator<<(ostream &out, const Job object);

    bool operator<(const Job &first) const {
        return (numberproces < first.numberproces);
    }

};

ostream &operator<<(ostream &out, Job object) {
    out << "Numer maszyny to: " << object.getnumbermachine() << "Numer procesu to: " << object.getnumberproces()
        << "Wartosc: " << object.getvalue();
    return out;

}

void NehQue(vector<Job> tab, vector<Job> tab1, vector<Job> tab2, int numberofproces,int *tabque) {
    sort(tab.begin(), tab.end());
    vector<Job> tmp;
    Job example;
    static int tmpneh=0;
    while(tmpneh != numberofproces) {

        int tmp1 = 0, tmp2 = 0;
        while (tab[tmpneh].getnumberproces() != tab1[tmp1].getnumberproces()) {
            tmp1++;
        }
        while (tab[tmpneh].getnumberproces() != tab2[tmp2].getnumberproces()) {
            tmp2++;
        }

            int help = 0;
            int help2=0;
            help2=tab[tmpneh].getnumberproces();
            help = tab[tmpneh].getvalue() + tab1[tmp1].getvalue() + tab2[tmp2].getvalue();
            example.setnumberproces(help2);
            example.valueproces(help);
            tmp.push_back(example);
        tmpneh++;
    }
    sort(tmp.begin(),tmp.end());
    for(int i=0 ;i<numberofproces;i++)
    {
        cout<<tmp[i]<<endl;
    }
    for(int i=0;i<numberofproces;i++)
    {
        tabque[i]=tmp[i].getnumberproces();
    }

}


int main() {
    Job object;
    vector<Job> tab, tab1, tab2;
    int decision = 0;
    int tabnehque[decision];
    cout << "Podaj liczbe procesow na maszynie: " << endl;
    cin >> decision;
    for (int i = 1; i < decision + 1; i++) {
        int i1 = 1, j, k;
        cout << "Podaj wartosc procesu: " << endl;
        cin >> k;
        object.setvalue(i1, i, k);
        tab.push_back(object);
    }
    for (int i = 1; i < decision + 1; i++) {
        int i1 = 2, j, k;
        cout << "Podaj wartosc procesu: " << endl;
        cin >> k;
        object.setvalue(i1, i, k);
        tab1.push_back(object);
    }
    for (int i = 1; i < decision + 1; i++) {
        int i1 = 3, j, k;
        cout << "Podaj wartosc procesu: " << endl;
        cin >> k;
        object.setvalue(i1, i, k);
        tab2.push_back(object);
    }

    NehQue(tab,tab1,tab2,decision,tabnehque);
    for(int i=0;i<decision;i++)
    {
        cout<<"Kolejka NEH to: "<<tabnehque[i]<<endl;
    }
    return 0;
}