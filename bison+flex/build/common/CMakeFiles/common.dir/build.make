# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /studying/Compilers_Lab/bison+flex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /studying/Compilers_Lab/bison+flex/build

# Include any dependencies generated for this target.
include common/CMakeFiles/common.dir/depend.make

# Include the progress variables for this target.
include common/CMakeFiles/common.dir/progress.make

# Include the compile flags for this target's objects.
include common/CMakeFiles/common.dir/flags.make

common/CMakeFiles/common.dir/common.c.o: common/CMakeFiles/common.dir/flags.make
common/CMakeFiles/common.dir/common.c.o: ../common/common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object common/CMakeFiles/common.dir/common.c.o"
	cd /studying/Compilers_Lab/bison+flex/build/common && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/common.dir/common.c.o   -c /studying/Compilers_Lab/bison+flex/common/common.c

common/CMakeFiles/common.dir/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/common.dir/common.c.i"
	cd /studying/Compilers_Lab/bison+flex/build/common && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /studying/Compilers_Lab/bison+flex/common/common.c > CMakeFiles/common.dir/common.c.i

common/CMakeFiles/common.dir/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/common.dir/common.c.s"
	cd /studying/Compilers_Lab/bison+flex/build/common && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /studying/Compilers_Lab/bison+flex/common/common.c -o CMakeFiles/common.dir/common.c.s

# Object files for target common
common_OBJECTS = \
"CMakeFiles/common.dir/common.c.o"

# External object files for target common
common_EXTERNAL_OBJECTS =

lib/libcommon.a: common/CMakeFiles/common.dir/common.c.o
lib/libcommon.a: common/CMakeFiles/common.dir/build.make
lib/libcommon.a: common/CMakeFiles/common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../lib/libcommon.a"
	cd /studying/Compilers_Lab/bison+flex/build/common && $(CMAKE_COMMAND) -P CMakeFiles/common.dir/cmake_clean_target.cmake
	cd /studying/Compilers_Lab/bison+flex/build/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/CMakeFiles/common.dir/build: lib/libcommon.a

.PHONY : common/CMakeFiles/common.dir/build

common/CMakeFiles/common.dir/clean:
	cd /studying/Compilers_Lab/bison+flex/build/common && $(CMAKE_COMMAND) -P CMakeFiles/common.dir/cmake_clean.cmake
.PHONY : common/CMakeFiles/common.dir/clean

common/CMakeFiles/common.dir/depend:
	cd /studying/Compilers_Lab/bison+flex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /studying/Compilers_Lab/bison+flex /studying/Compilers_Lab/bison+flex/common /studying/Compilers_Lab/bison+flex/build /studying/Compilers_Lab/bison+flex/build/common /studying/Compilers_Lab/bison+flex/build/common/CMakeFiles/common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/CMakeFiles/common.dir/depend

