# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/zhukov/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/zhukov/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhukov/CLionProjects/rcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhukov/CLionProjects/rcs/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/test_rcs.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_rcs.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_rcs.dir/flags.make

test/CMakeFiles/test_rcs.dir/main.cpp.o: test/CMakeFiles/test_rcs.dir/flags.make
test/CMakeFiles/test_rcs.dir/main.cpp.o: ../test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhukov/CLionProjects/rcs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_rcs.dir/main.cpp.o"
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_rcs.dir/main.cpp.o -c /home/zhukov/CLionProjects/rcs/test/main.cpp

test/CMakeFiles/test_rcs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_rcs.dir/main.cpp.i"
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhukov/CLionProjects/rcs/test/main.cpp > CMakeFiles/test_rcs.dir/main.cpp.i

test/CMakeFiles/test_rcs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_rcs.dir/main.cpp.s"
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhukov/CLionProjects/rcs/test/main.cpp -o CMakeFiles/test_rcs.dir/main.cpp.s

test/CMakeFiles/test_rcs.dir/main.cpp.o.requires:

.PHONY : test/CMakeFiles/test_rcs.dir/main.cpp.o.requires

test/CMakeFiles/test_rcs.dir/main.cpp.o.provides: test/CMakeFiles/test_rcs.dir/main.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/test_rcs.dir/build.make test/CMakeFiles/test_rcs.dir/main.cpp.o.provides.build
.PHONY : test/CMakeFiles/test_rcs.dir/main.cpp.o.provides

test/CMakeFiles/test_rcs.dir/main.cpp.o.provides.build: test/CMakeFiles/test_rcs.dir/main.cpp.o


# Object files for target test_rcs
test_rcs_OBJECTS = \
"CMakeFiles/test_rcs.dir/main.cpp.o"

# External object files for target test_rcs
test_rcs_EXTERNAL_OBJECTS =

test/test_rcs: test/CMakeFiles/test_rcs.dir/main.cpp.o
test/test_rcs: test/CMakeFiles/test_rcs.dir/build.make
test/test_rcs: src/librcslib.a
test/test_rcs: test/CMakeFiles/test_rcs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhukov/CLionProjects/rcs/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_rcs"
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_rcs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_rcs.dir/build: test/test_rcs

.PHONY : test/CMakeFiles/test_rcs.dir/build

test/CMakeFiles/test_rcs.dir/requires: test/CMakeFiles/test_rcs.dir/main.cpp.o.requires

.PHONY : test/CMakeFiles/test_rcs.dir/requires

test/CMakeFiles/test_rcs.dir/clean:
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/test_rcs.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_rcs.dir/clean

test/CMakeFiles/test_rcs.dir/depend:
	cd /home/zhukov/CLionProjects/rcs/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhukov/CLionProjects/rcs /home/zhukov/CLionProjects/rcs/test /home/zhukov/CLionProjects/rcs/cmake-build-debug /home/zhukov/CLionProjects/rcs/cmake-build-debug/test /home/zhukov/CLionProjects/rcs/cmake-build-debug/test/CMakeFiles/test_rcs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_rcs.dir/depend
