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
CMAKE_SOURCE_DIR = E:\c++_studying\mat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\mat\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mat.dir/flags.make

CMakeFiles/mat.dir/main.cpp.obj: CMakeFiles/mat.dir/flags.make
CMakeFiles/mat.dir/main.cpp.obj: CMakeFiles/mat.dir/includes_CXX.rsp
CMakeFiles/mat.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\mat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mat.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mat.dir\main.cpp.obj -c E:\c++_studying\mat\main.cpp

CMakeFiles/mat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mat.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\mat\main.cpp > CMakeFiles\mat.dir\main.cpp.i

CMakeFiles/mat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mat.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\mat\main.cpp -o CMakeFiles\mat.dir\main.cpp.s

# Object files for target mat
mat_OBJECTS = \
"CMakeFiles/mat.dir/main.cpp.obj"

# External object files for target mat
mat_EXTERNAL_OBJECTS =

mat.exe: CMakeFiles/mat.dir/main.cpp.obj
mat.exe: CMakeFiles/mat.dir/build.make
mat.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mat.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mat.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mat.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
mat.exe: CMakeFiles/mat.dir/linklibs.rsp
mat.exe: CMakeFiles/mat.dir/objects1.rsp
mat.exe: CMakeFiles/mat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\mat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mat.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mat.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mat.dir/build: mat.exe

.PHONY : CMakeFiles/mat.dir/build

CMakeFiles/mat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mat.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mat.dir/clean

CMakeFiles/mat.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\mat E:\c++_studying\mat E:\c++_studying\mat\cmake-build-debug E:\c++_studying\mat\cmake-build-debug E:\c++_studying\mat\cmake-build-debug\CMakeFiles\mat.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mat.dir/depend

