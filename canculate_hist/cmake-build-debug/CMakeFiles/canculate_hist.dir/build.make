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
CMAKE_SOURCE_DIR = E:\c++_studying\canculate_hist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++_studying\canculate_hist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/canculate_hist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/canculate_hist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/canculate_hist.dir/flags.make

CMakeFiles/canculate_hist.dir/main.cpp.obj: CMakeFiles/canculate_hist.dir/flags.make
CMakeFiles/canculate_hist.dir/main.cpp.obj: CMakeFiles/canculate_hist.dir/includes_CXX.rsp
CMakeFiles/canculate_hist.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++_studying\canculate_hist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/canculate_hist.dir/main.cpp.obj"
	D:\clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\canculate_hist.dir\main.cpp.obj -c E:\c++_studying\canculate_hist\main.cpp

CMakeFiles/canculate_hist.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/canculate_hist.dir/main.cpp.i"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++_studying\canculate_hist\main.cpp > CMakeFiles\canculate_hist.dir\main.cpp.i

CMakeFiles/canculate_hist.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/canculate_hist.dir/main.cpp.s"
	D:\clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++_studying\canculate_hist\main.cpp -o CMakeFiles\canculate_hist.dir\main.cpp.s

# Object files for target canculate_hist
canculate_hist_OBJECTS = \
"CMakeFiles/canculate_hist.dir/main.cpp.obj"

# External object files for target canculate_hist
canculate_hist_EXTERNAL_OBJECTS =

canculate_hist.exe: CMakeFiles/canculate_hist.dir/main.cpp.obj
canculate_hist.exe: CMakeFiles/canculate_hist.dir/build.make
canculate_hist.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
canculate_hist.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
canculate_hist.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
canculate_hist.exe: D:/opencv/opencv/mingw64/install/x64/mingw/lib/libopencv_world349.dll.a
canculate_hist.exe: CMakeFiles/canculate_hist.dir/linklibs.rsp
canculate_hist.exe: CMakeFiles/canculate_hist.dir/objects1.rsp
canculate_hist.exe: CMakeFiles/canculate_hist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++_studying\canculate_hist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable canculate_hist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\canculate_hist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/canculate_hist.dir/build: canculate_hist.exe

.PHONY : CMakeFiles/canculate_hist.dir/build

CMakeFiles/canculate_hist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\canculate_hist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/canculate_hist.dir/clean

CMakeFiles/canculate_hist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++_studying\canculate_hist E:\c++_studying\canculate_hist E:\c++_studying\canculate_hist\cmake-build-debug E:\c++_studying\canculate_hist\cmake-build-debug E:\c++_studying\canculate_hist\cmake-build-debug\CMakeFiles\canculate_hist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/canculate_hist.dir/depend

