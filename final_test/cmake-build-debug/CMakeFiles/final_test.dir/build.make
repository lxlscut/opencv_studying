# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\clion\CLion 2019.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\clion\CLion 2019.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\c++_studying\final_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\final_test\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/final_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/final_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/final_test.dir/flags.make

CMakeFiles/final_test.dir/main.cpp.obj: CMakeFiles/final_test.dir/flags.make
CMakeFiles/final_test.dir/main.cpp.obj: CMakeFiles/final_test.dir/includes_CXX.rsp
CMakeFiles/final_test.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\final_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/final_test.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\final_test.dir\main.cpp.obj -c E:\c++_studying\final_test\main.cpp

CMakeFiles/final_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_test.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\final_test\main.cpp > CMakeFiles\final_test.dir\main.cpp.i

CMakeFiles/final_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_test.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\final_test\main.cpp -o CMakeFiles\final_test.dir\main.cpp.s

# Object files for target final_test
final_test_OBJECTS = \
"CMakeFiles/final_test.dir/main.cpp.obj"

# External object files for target final_test
final_test_EXTERNAL_OBJECTS =

final_test.exe: CMakeFiles/final_test.dir/main.cpp.obj
final_test.exe: CMakeFiles/final_test.dir/build.make
final_test.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
final_test.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
final_test.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
final_test.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
final_test.exe: CMakeFiles/final_test.dir/linklibs.rsp
final_test.exe: CMakeFiles/final_test.dir/objects1.rsp
final_test.exe: CMakeFiles/final_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\final_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable final_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\final_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/final_test.dir/build: final_test.exe

.PHONY : CMakeFiles/final_test.dir/build

CMakeFiles/final_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\final_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/final_test.dir/clean

CMakeFiles/final_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\final_test E:\c++_studying\final_test E:\c++_studying\final_test\cmake-build-debug E:\c++_studying\final_test\cmake-build-debug E:\c++_studying\final_test\cmake-build-debug\CMakeFiles\final_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/final_test.dir/depend
