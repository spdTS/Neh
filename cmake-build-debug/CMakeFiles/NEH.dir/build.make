# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /private/var/folders/4y/86x768r923dcnlk353mp6wt40000gp/T/AppTranslocation/AA9B35D7-596B-4FEA-A498-AB8B5F6B9BB4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/4y/86x768r923dcnlk353mp6wt40000gp/T/AppTranslocation/AA9B35D7-596B-4FEA-A498-AB8B5F6B9BB4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/seba/Desktop/Programowanie/SPD/NEH

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NEH.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NEH.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NEH.dir/flags.make

CMakeFiles/NEH.dir/main.cpp.o: CMakeFiles/NEH.dir/flags.make
CMakeFiles/NEH.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NEH.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NEH.dir/main.cpp.o -c /Users/seba/Desktop/Programowanie/SPD/NEH/main.cpp

CMakeFiles/NEH.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NEH.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/seba/Desktop/Programowanie/SPD/NEH/main.cpp > CMakeFiles/NEH.dir/main.cpp.i

CMakeFiles/NEH.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NEH.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/seba/Desktop/Programowanie/SPD/NEH/main.cpp -o CMakeFiles/NEH.dir/main.cpp.s

# Object files for target NEH
NEH_OBJECTS = \
"CMakeFiles/NEH.dir/main.cpp.o"

# External object files for target NEH
NEH_EXTERNAL_OBJECTS =

NEH: CMakeFiles/NEH.dir/main.cpp.o
NEH: CMakeFiles/NEH.dir/build.make
NEH: CMakeFiles/NEH.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NEH"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NEH.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NEH.dir/build: NEH

.PHONY : CMakeFiles/NEH.dir/build

CMakeFiles/NEH.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NEH.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NEH.dir/clean

CMakeFiles/NEH.dir/depend:
	cd /Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/seba/Desktop/Programowanie/SPD/NEH /Users/seba/Desktop/Programowanie/SPD/NEH /Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug /Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug /Users/seba/Desktop/Programowanie/SPD/NEH/cmake-build-debug/CMakeFiles/NEH.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NEH.dir/depend

