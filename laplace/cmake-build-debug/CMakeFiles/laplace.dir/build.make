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
CMAKE_SOURCE_DIR = E:\c++_studying\laplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\laplace\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/laplace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/laplace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laplace.dir/flags.make

CMakeFiles/laplace.dir/main.cpp.obj: CMakeFiles/laplace.dir/flags.make
CMakeFiles/laplace.dir/main.cpp.obj: CMakeFiles/laplace.dir/includes_CXX.rsp
CMakeFiles/laplace.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\laplace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laplace.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\laplace.dir\main.cpp.obj -c E:\c++_studying\laplace\main.cpp

CMakeFiles/laplace.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laplace.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\laplace\main.cpp > CMakeFiles\laplace.dir\main.cpp.i

CMakeFiles/laplace.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laplace.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\laplace\main.cpp -o CMakeFiles\laplace.dir\main.cpp.s

# Object files for target laplace
laplace_OBJECTS = \
"CMakeFiles/laplace.dir/main.cpp.obj"

# External object files for target laplace
laplace_EXTERNAL_OBJECTS =

laplace.exe: CMakeFiles/laplace.dir/main.cpp.obj
laplace.exe: CMakeFiles/laplace.dir/build.make
laplace.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
laplace.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
laplace.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
laplace.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
laplace.exe: CMakeFiles/laplace.dir/linklibs.rsp
laplace.exe: CMakeFiles/laplace.dir/objects1.rsp
laplace.exe: CMakeFiles/laplace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\laplace\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable laplace.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\laplace.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laplace.dir/build: laplace.exe

.PHONY : CMakeFiles/laplace.dir/build

CMakeFiles/laplace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laplace.dir\cmake_clean.cmake
.PHONY : CMakeFiles/laplace.dir/clean

CMakeFiles/laplace.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\laplace E:\c++_studying\laplace E:\c++_studying\laplace\cmake-build-debug E:\c++_studying\laplace\cmake-build-debug E:\c++_studying\laplace\cmake-build-debug\CMakeFiles\laplace.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laplace.dir/depend

