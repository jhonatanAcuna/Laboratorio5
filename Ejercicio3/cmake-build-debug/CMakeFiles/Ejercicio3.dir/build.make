# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio3.dir/flags.make

CMakeFiles/Ejercicio3.dir/main.cpp.obj: CMakeFiles/Ejercicio3.dir/flags.make
CMakeFiles/Ejercicio3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio3.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio3.dir\main.cpp.obj -c C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\main.cpp

CMakeFiles/Ejercicio3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio3.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\main.cpp > CMakeFiles\Ejercicio3.dir\main.cpp.i

CMakeFiles/Ejercicio3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio3.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\main.cpp -o CMakeFiles\Ejercicio3.dir\main.cpp.s

CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.obj: CMakeFiles/Ejercicio3.dir/flags.make
CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.obj: ../Ejercicio3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio3.dir\Ejercicio3.cpp.obj -c C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\Ejercicio3.cpp

CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\Ejercicio3.cpp > CMakeFiles\Ejercicio3.dir\Ejercicio3.cpp.i

CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\Ejercicio3.cpp -o CMakeFiles\Ejercicio3.dir\Ejercicio3.cpp.s

# Object files for target Ejercicio3
Ejercicio3_OBJECTS = \
"CMakeFiles/Ejercicio3.dir/main.cpp.obj" \
"CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.obj"

# External object files for target Ejercicio3
Ejercicio3_EXTERNAL_OBJECTS =

Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/main.cpp.obj
Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/Ejercicio3.cpp.obj
Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/build.make
Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/linklibs.rsp
Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/objects1.rsp
Ejercicio3.exe: CMakeFiles/Ejercicio3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Ejercicio3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio3.dir/build: Ejercicio3.exe

.PHONY : CMakeFiles/Ejercicio3.dir/build

CMakeFiles/Ejercicio3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio3.dir/clean

CMakeFiles/Ejercicio3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3 C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3 C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug C:\Users\jacun\OneDrive\Escritorio\2020-A\PS-L\Lab05\Ejercicio3\cmake-build-debug\CMakeFiles\Ejercicio3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio3.dir/depend

