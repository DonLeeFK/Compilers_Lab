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
include lab2_syntax_analyzer/CMakeFiles/syntax.dir/depend.make

# Include the progress variables for this target.
include lab2_syntax_analyzer/CMakeFiles/syntax.dir/progress.make

# Include the compile flags for this target's objects.
include lab2_syntax_analyzer/CMakeFiles/syntax.dir/flags.make

lab2_syntax_analyzer/syntax_analyzer.c: ../lab2_syntax_analyzer/syntax_analyzer.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][syntax] Building parser with bison 2.3"
	cd /studying/Compilers_Lab/bison+flex/lab2_syntax_analyzer && /usr/bin/bison -d -o /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/syntax_analyzer.c syntax_analyzer.y

lab2_syntax_analyzer/syntax_analyzer.h: lab2_syntax_analyzer/syntax_analyzer.c
	@$(CMAKE_COMMAND) -E touch_nocreate lab2_syntax_analyzer/syntax_analyzer.h

lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.o: lab2_syntax_analyzer/CMakeFiles/syntax.dir/flags.make
lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.o: lab2_syntax_analyzer/syntax_analyzer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.o"
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syntax.dir/syntax_analyzer.c.o   -c /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/syntax_analyzer.c

lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syntax.dir/syntax_analyzer.c.i"
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/syntax_analyzer.c > CMakeFiles/syntax.dir/syntax_analyzer.c.i

lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syntax.dir/syntax_analyzer.c.s"
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/syntax_analyzer.c -o CMakeFiles/syntax.dir/syntax_analyzer.c.s

# Object files for target syntax
syntax_OBJECTS = \
"CMakeFiles/syntax.dir/syntax_analyzer.c.o"

# External object files for target syntax
syntax_EXTERNAL_OBJECTS =

lib/libsyntax.a: lab2_syntax_analyzer/CMakeFiles/syntax.dir/syntax_analyzer.c.o
lib/libsyntax.a: lab2_syntax_analyzer/CMakeFiles/syntax.dir/build.make
lib/libsyntax.a: lab2_syntax_analyzer/CMakeFiles/syntax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/studying/Compilers_Lab/bison+flex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library ../lib/libsyntax.a"
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && $(CMAKE_COMMAND) -P CMakeFiles/syntax.dir/cmake_clean_target.cmake
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/syntax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab2_syntax_analyzer/CMakeFiles/syntax.dir/build: lib/libsyntax.a

.PHONY : lab2_syntax_analyzer/CMakeFiles/syntax.dir/build

lab2_syntax_analyzer/CMakeFiles/syntax.dir/clean:
	cd /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer && $(CMAKE_COMMAND) -P CMakeFiles/syntax.dir/cmake_clean.cmake
.PHONY : lab2_syntax_analyzer/CMakeFiles/syntax.dir/clean

lab2_syntax_analyzer/CMakeFiles/syntax.dir/depend: lab2_syntax_analyzer/syntax_analyzer.c
lab2_syntax_analyzer/CMakeFiles/syntax.dir/depend: lab2_syntax_analyzer/syntax_analyzer.h
	cd /studying/Compilers_Lab/bison+flex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /studying/Compilers_Lab/bison+flex /studying/Compilers_Lab/bison+flex/lab2_syntax_analyzer /studying/Compilers_Lab/bison+flex/build /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer /studying/Compilers_Lab/bison+flex/build/lab2_syntax_analyzer/CMakeFiles/syntax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lab2_syntax_analyzer/CMakeFiles/syntax.dir/depend

