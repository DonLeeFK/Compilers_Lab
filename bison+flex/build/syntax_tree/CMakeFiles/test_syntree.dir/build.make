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
include syntax_tree/CMakeFiles/test_syntree.dir/depend.make

# Include the progress variables for this target.
include syntax_tree/CMakeFiles/test_syntree.dir/progress.make

# Include the compile flags for this target's objects.
include syntax_tree/CMakeFiles/test_syntree.dir/flags.make

syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.o: syntax_tree/CMakeFiles/test_syntree.dir/flags.make
syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.o: ../syntax_tree/test_tree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.o"
	cd /studying/Compilers_Lab/bison+flex/build/syntax_tree && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_syntree.dir/test_tree.c.o   -c /studying/Compilers_Lab/bison+flex/syntax_tree/test_tree.c

syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_syntree.dir/test_tree.c.i"
	cd /studying/Compilers_Lab/bison+flex/build/syntax_tree && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /studying/Compilers_Lab/bison+flex/syntax_tree/test_tree.c > CMakeFiles/test_syntree.dir/test_tree.c.i

syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_syntree.dir/test_tree.c.s"
	cd /studying/Compilers_Lab/bison+flex/build/syntax_tree && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /studying/Compilers_Lab/bison+flex/syntax_tree/test_tree.c -o CMakeFiles/test_syntree.dir/test_tree.c.s

# Object files for target test_syntree
test_syntree_OBJECTS = \
"CMakeFiles/test_syntree.dir/test_tree.c.o"

# External object files for target test_syntree
test_syntree_EXTERNAL_OBJECTS =

test_syntree: syntax_tree/CMakeFiles/test_syntree.dir/test_tree.c.o
test_syntree: syntax_tree/CMakeFiles/test_syntree.dir/build.make
test_syntree: lib/libsyntax_tree.a
test_syntree: syntax_tree/CMakeFiles/test_syntree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../test_syntree"
	cd /studying/Compilers_Lab/bison+flex/build/syntax_tree && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_syntree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
syntax_tree/CMakeFiles/test_syntree.dir/build: test_syntree

.PHONY : syntax_tree/CMakeFiles/test_syntree.dir/build

syntax_tree/CMakeFiles/test_syntree.dir/clean:
	cd /studying/Compilers_Lab/bison+flex/build/syntax_tree && $(CMAKE_COMMAND) -P CMakeFiles/test_syntree.dir/cmake_clean.cmake
.PHONY : syntax_tree/CMakeFiles/test_syntree.dir/clean

syntax_tree/CMakeFiles/test_syntree.dir/depend:
	cd /studying/Compilers_Lab/bison+flex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /studying/Compilers_Lab/bison+flex /studying/Compilers_Lab/bison+flex/syntax_tree /studying/Compilers_Lab/bison+flex/build /studying/Compilers_Lab/bison+flex/build/syntax_tree /studying/Compilers_Lab/bison+flex/build/syntax_tree/CMakeFiles/test_syntree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : syntax_tree/CMakeFiles/test_syntree.dir/depend

