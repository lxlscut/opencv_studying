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
CMAKE_SOURCE_DIR = E:\c++_studying\mymoment

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\mymoment\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mymoment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mymoment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mymoment.dir/flags.make

CMakeFiles/mymoment.dir/main.cpp.obj: CMakeFiles/mymoment.dir/flags.make
CMakeFiles/mymoment.dir/main.cpp.obj: CMakeFiles/mymoment.dir/includes_CXX.rsp
CMakeFiles/mymoment.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\mymoment\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mymoment.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mymoment.dir\main.cpp.obj -c E:\c++_studying\mymoment\main.cpp

CMakeFiles/mymoment.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mymoment.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\mymoment\main.cpp > CMakeFiles\mymoment.dir\main.cpp.i

CMakeFiles/mymoment.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mymoment.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\mymoment\main.cpp -o CMakeFiles\mymoment.dir\main.cpp.s

# Object files for target mymoment
mymoment_OBJECTS = \
"CMakeFiles/mymoment.dir/main.cpp.obj"

# External object files for target mymoment
mymoment_EXTERNAL_OBJECTS =

mymoment.exe: CMakeFiles/mymoment.dir/main.cpp.obj
mymoment.exe: CMakeFiles/mymoment.dir/build.make
mymoment.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mymoment.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mymoment.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mymoment.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mymoment.exe: CMakeFiles/mymoment.dir/linklibs.rsp
mymoment.exe: CMakeFiles/mymoment.dir/objects1.rsp
mymoment.exe: CMakeFiles/mymoment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\mymoment\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mymoment.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mymoment.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mymoment.dir/build: mymoment.exe

.PHONY : CMakeFiles/mymoment.dir/build

CMakeFiles/mymoment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mymoment.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mymoment.dir/clean

CMakeFiles/mymoment.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\mymoment E:\c++_studying\mymoment E:\c++_studying\mymoment\cmake-build-debug E:\c++_studying\mymoment\cmake-build-debug E:\c++_studying\mymoment\cmake-build-debug\CMakeFiles\mymoment.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mymoment.dir/depend
