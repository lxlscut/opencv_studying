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
CMAKE_SOURCE_DIR = E:\c++_studying\back_projection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\back_projection\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/back_projection.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/back_projection.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/back_projection.dir/flags.make

CMakeFiles/back_projection.dir/main.cpp.obj: CMakeFiles/back_projection.dir/flags.make
CMakeFiles/back_projection.dir/main.cpp.obj: CMakeFiles/back_projection.dir/includes_CXX.rsp
CMakeFiles/back_projection.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\back_projection\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/back_projection.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\back_projection.dir\main.cpp.obj -c E:\c++_studying\back_projection\main.cpp

CMakeFiles/back_projection.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/back_projection.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\back_projection\main.cpp > CMakeFiles\back_projection.dir\main.cpp.i

CMakeFiles/back_projection.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/back_projection.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\back_projection\main.cpp -o CMakeFiles\back_projection.dir\main.cpp.s

# Object files for target back_projection
back_projection_OBJECTS = \
"CMakeFiles/back_projection.dir/main.cpp.obj"

# External object files for target back_projection
back_projection_EXTERNAL_OBJECTS =

back_projection.exe: CMakeFiles/back_projection.dir/main.cpp.obj
back_projection.exe: CMakeFiles/back_projection.dir/build.make
back_projection.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
back_projection.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
back_projection.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
back_projection.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
back_projection.exe: CMakeFiles/back_projection.dir/linklibs.rsp
back_projection.exe: CMakeFiles/back_projection.dir/objects1.rsp
back_projection.exe: CMakeFiles/back_projection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\back_projection\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable back_projection.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\back_projection.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/back_projection.dir/build: back_projection.exe

.PHONY : CMakeFiles/back_projection.dir/build

CMakeFiles/back_projection.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\back_projection.dir\cmake_clean.cmake
.PHONY : CMakeFiles/back_projection.dir/clean

CMakeFiles/back_projection.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\back_projection E:\c++_studying\back_projection E:\c++_studying\back_projection\cmake-build-debug E:\c++_studying\back_projection\cmake-build-debug E:\c++_studying\back_projection\cmake-build-debug\CMakeFiles\back_projection.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/back_projection.dir/depend

