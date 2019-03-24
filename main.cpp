#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Job {
private:
    int numbermachine = 0;
    int numberproces = 0;
    int valueofproces = 0;
public:


    void setnumbermachine(int number) {
        numbermachine = number;
    }

    void setnumberproces(int number) {
        numberproces = number;

    }

    void setvalueproces(int number) {
        valueofproces = number;
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
        return (valueofproces > first.valueofproces);
    }

};

ostream &operator<<(ostream &out, Job object) {
    out << "Numer maszyny to: " << object.getnumbermachine() << "Numer procesu to: " << object.getnumberproces()
        << "Wartosc: " << object.getvalue();
    return out;

}

void NehQue(vector<Job> tab, int np, int *tabhelp) {
    Job example;
    vector<Job> nehque;
    int nmhelp = 1;

    while (nmhelp != np + 1) {
        int tmp = 0;
        int valueproces = 0;
        while (tmp != tab.size()) {
            if (tab[tmp].getnumberproces() == nmhelp) {
                valueproces = valueproces + tab[tmp].getvalue();
            }
            tmp++;
        }
        example.setvalueproces(valueproces);
        example.setnumberproces(nmhelp);
        nehque.push_back(example);
        nmhelp++;

    }
    sort(nehque.begin(), nehque.end());
    for (int i = 0; i < np; i++) {
        tabhelp[i] = nehque[i].getnumberproces();
    }

}

void NehAlgorithm(vector<Job> tab, int *tabhelp, int np, int nm) {
    int timmachine[nm];
    int prioritique[nm];
    int Cmax1=0,Cmax2=0;
    for (int i = 1; i < nm + 1; i++) {
        timmachine[i] = 0;
    }


    for (int j = 0; j < np; j++) {

        for (int i = 1; i < nm + 1; i++) {
            int tmp = 0;
            while ((tabhelp[j] != tab[tmp].getnumberproces()) || (i != tab[tmp].getnumbermachine())) {
                tmp++;
            }

            if (i == 1) {
                timmachine[i] = timmachine[i] + tab[tmp].getvalue();

            } else {
                if (timmachine[i - 1] >= timmachine[i]) {
                    timmachine[i] = timmachine[i - 1] - timmachine[i];
                    timmachine[i] = timmachine[i] + tab[tmp].getvalue();
                  //  cout << "Tutaj jestem! " << timmachine[i] << endl;
                } else {
                    timmachine[i] = timmachine[i] + tab[tmp].getvalue();
                 //   cout << "Tutaj jestem! " << timmachine[i] << endl;

                }
                if (i == nm && j == 0) {
                    timmachine[i - 1] = timmachine[i - 1] + timmachine[i - 2];
                    timmachine[i] = timmachine[i] + timmachine[i - 1];
                }
            }
            if( i == nm )
            {
                Cmax1=timmachine[i];
            }


        }
    }
    for (int i = 1; i < nm + 1; i++) {
        cout << "Całkowity czas realizacji to: " << timmachine[i] << endl;
    }
    for(int j=0;j<np;j++) {
        cout << "Kolejnosc wykonania procesow to: " << tabhelp[j] << endl;
    }


}

int main() {
    Job object;
    vector<Job> tab;
    int nm, np, p1[100][100];
    ifstream data("data.txt");
    data >> np >> nm;
    int tabhelp[np];

    for (int i = 1; i < np + 1; i++) {
        for (int j = 1; j < nm + 1; j++) {
            data >> p1[j][i];
        }
    }
    data.close();
    for (int i = 1; i < np + 1; i++) {
        for (int j = 1; j < nm + 1; j++) {
            object.setnumberproces(i);
            object.setnumbermachine(j);
            object.setvalueproces(p1[j][i]);
            tab.push_back(object);
        }
    }
    NehQue(tab, np, tabhelp);
    int tabpom[np];
    int tmp3=1,tmp2=3;
    for(int i=0;i<np;i++)
    {
        tabpom[i]=tabhelp[i];

        do{

            NehAlgorithm(tab, tabpom, tmp3, tmp2);
            cout<<"Wypisane: "<<tabpom[i]<<endl;
        }while( next_permutation(tabpom,tabpom+tmp3)) ;


        tmp3++;
    }

    cout << "Kolejka to: " << endl;
    for (int i = 0; i < np; i++) {
        cout << tabhelp[i] << ";";
    }


}