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
CMAKE_SOURCE_DIR = E:\c++_studying\remap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\remap\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/remap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/remap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/remap.dir/flags.make

CMakeFiles/remap.dir/main.cpp.obj: CMakeFiles/remap.dir/flags.make
CMakeFiles/remap.dir/main.cpp.obj: CMakeFiles/remap.dir/includes_CXX.rsp
CMakeFiles/remap.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\remap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/remap.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\remap.dir\main.cpp.obj -c E:\c++_studying\remap\main.cpp

CMakeFiles/remap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/remap.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\remap\main.cpp > CMakeFiles\remap.dir\main.cpp.i

CMakeFiles/remap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/remap.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\remap\main.cpp -o CMakeFiles\remap.dir\main.cpp.s

# Object files for target remap
remap_OBJECTS = \
"CMakeFiles/remap.dir/main.cpp.obj"

# External object files for target remap
remap_EXTERNAL_OBJECTS =

remap.exe: CMakeFiles/remap.dir/main.cpp.obj
remap.exe: CMakeFiles/remap.dir/build.make
remap.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
remap.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
remap.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
remap.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
remap.exe: CMakeFiles/remap.dir/linklibs.rsp
remap.exe: CMakeFiles/remap.dir/objects1.rsp
remap.exe: CMakeFiles/remap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\remap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable remap.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\remap.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/remap.dir/build: remap.exe

.PHONY : CMakeFiles/remap.dir/build

CMakeFiles/remap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\remap.dir\cmake_clean.cmake
.PHONY : CMakeFiles/remap.dir/clean

CMakeFiles/remap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\remap E:\c++_studying\remap E:\c++_studying\remap\cmake-build-debug E:\c++_studying\remap\cmake-build-debug E:\c++_studying\remap\cmake-build-debug\CMakeFiles\remap.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/remap.dir/depend

