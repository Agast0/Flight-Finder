# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Zahaab/CLionProjects/HW4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW4.dir/flags.make

CMakeFiles/HW4.dir/main.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW4.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/main.cpp.o -c /mnt/c/Users/Zahaab/CLionProjects/HW4/main.cpp

CMakeFiles/HW4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Zahaab/CLionProjects/HW4/main.cpp > CMakeFiles/HW4.dir/main.cpp.i

CMakeFiles/HW4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Zahaab/CLionProjects/HW4/main.cpp -o CMakeFiles/HW4.dir/main.cpp.s

CMakeFiles/HW4.dir/FlightMap.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/FlightMap.cpp.o: ../FlightMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW4.dir/FlightMap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/FlightMap.cpp.o -c /mnt/c/Users/Zahaab/CLionProjects/HW4/FlightMap.cpp

CMakeFiles/HW4.dir/FlightMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/FlightMap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Zahaab/CLionProjects/HW4/FlightMap.cpp > CMakeFiles/HW4.dir/FlightMap.cpp.i

CMakeFiles/HW4.dir/FlightMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/FlightMap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Zahaab/CLionProjects/HW4/FlightMap.cpp -o CMakeFiles/HW4.dir/FlightMap.cpp.s

CMakeFiles/HW4.dir/Flight.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/Flight.cpp.o: ../Flight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW4.dir/Flight.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/Flight.cpp.o -c /mnt/c/Users/Zahaab/CLionProjects/HW4/Flight.cpp

CMakeFiles/HW4.dir/Flight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/Flight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Zahaab/CLionProjects/HW4/Flight.cpp > CMakeFiles/HW4.dir/Flight.cpp.i

CMakeFiles/HW4.dir/Flight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/Flight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Zahaab/CLionProjects/HW4/Flight.cpp -o CMakeFiles/HW4.dir/Flight.cpp.s

# Object files for target HW4
HW4_OBJECTS = \
"CMakeFiles/HW4.dir/main.cpp.o" \
"CMakeFiles/HW4.dir/FlightMap.cpp.o" \
"CMakeFiles/HW4.dir/Flight.cpp.o"

# External object files for target HW4
HW4_EXTERNAL_OBJECTS =

HW4: CMakeFiles/HW4.dir/main.cpp.o
HW4: CMakeFiles/HW4.dir/FlightMap.cpp.o
HW4: CMakeFiles/HW4.dir/Flight.cpp.o
HW4: CMakeFiles/HW4.dir/build.make
HW4: CMakeFiles/HW4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable HW4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW4.dir/build: HW4

.PHONY : CMakeFiles/HW4.dir/build

CMakeFiles/HW4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW4.dir/clean

CMakeFiles/HW4.dir/depend:
	cd /mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Zahaab/CLionProjects/HW4 /mnt/c/Users/Zahaab/CLionProjects/HW4 /mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug /mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug /mnt/c/Users/Zahaab/CLionProjects/HW4/cmake-build-debug/CMakeFiles/HW4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW4.dir/depend

