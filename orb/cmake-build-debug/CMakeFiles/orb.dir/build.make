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
CMAKE_SOURCE_DIR = E:\c++_studying\orb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\orb\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/orb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/orb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/orb.dir/flags.make

CMakeFiles/orb.dir/main.cpp.obj: CMakeFiles/orb.dir/flags.make
CMakeFiles/orb.dir/main.cpp.obj: CMakeFiles/orb.dir/includes_CXX.rsp
CMakeFiles/orb.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\orb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/orb.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\orb.dir\main.cpp.obj -c E:\c++_studying\orb\main.cpp

CMakeFiles/orb.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/orb.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\orb\main.cpp > CMakeFiles\orb.dir\main.cpp.i

CMakeFiles/orb.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/orb.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\orb\main.cpp -o CMakeFiles\orb.dir\main.cpp.s

# Object files for target orb
orb_OBJECTS = \
"CMakeFiles/orb.dir/main.cpp.obj"

# External object files for target orb
orb_EXTERNAL_OBJECTS =

orb.exe: CMakeFiles/orb.dir/main.cpp.obj
orb.exe: CMakeFiles/orb.dir/build.make
orb.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
orb.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
orb.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
orb.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
orb.exe: CMakeFiles/orb.dir/linklibs.rsp
orb.exe: CMakeFiles/orb.dir/objects1.rsp
orb.exe: CMakeFiles/orb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\orb\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable orb.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\orb.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/orb.dir/build: orb.exe

.PHONY : CMakeFiles/orb.dir/build

CMakeFiles/orb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\orb.dir\cmake_clean.cmake
.PHONY : CMakeFiles/orb.dir/clean

CMakeFiles/orb.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\orb E:\c++_studying\orb E:\c++_studying\orb\cmake-build-debug E:\c++_studying\orb\cmake-build-debug E:\c++_studying\orb\cmake-build-debug\CMakeFiles\orb.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/orb.dir/depend
