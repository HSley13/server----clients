# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/test/Documents/server---clients

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/test/Documents/server---clients/build

# Utility rule file for database_library_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/progress.make

database_library_autogen_timestamp_deps: src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/build.make
.PHONY : database_library_autogen_timestamp_deps

# Rule to build all files generated by this target.
src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/build: database_library_autogen_timestamp_deps
.PHONY : src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/build

src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/clean:
	cd /Users/test/Documents/server---clients/build/src/database && $(CMAKE_COMMAND) -P CMakeFiles/database_library_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/clean

src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/depend:
	cd /Users/test/Documents/server---clients/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/test/Documents/server---clients /Users/test/Documents/server---clients/src/database /Users/test/Documents/server---clients/build /Users/test/Documents/server---clients/build/src/database /Users/test/Documents/server---clients/build/src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/database/CMakeFiles/database_library_autogen_timestamp_deps.dir/depend

