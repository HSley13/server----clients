# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/test/Documents/server---clients/src/app

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/test/Documents/server---clients/src/app/build

# Include any dependencies generated for this target.
include clients/CMakeFiles/client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include clients/CMakeFiles/client.dir/compiler_depend.make

# Include the progress variables for this target.
include clients/CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include clients/CMakeFiles/client.dir/flags.make

clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o: clients/CMakeFiles/client.dir/flags.make
clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o: clients/client_autogen/mocs_compilation.cpp
clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o: clients/CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/test/Documents/server---clients/src/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o -MF CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o -c /Users/test/Documents/server---clients/src/app/build/clients/client_autogen/mocs_compilation.cpp

clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.i"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/test/Documents/server---clients/src/app/build/clients/client_autogen/mocs_compilation.cpp > CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.i

clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.s"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/test/Documents/server---clients/src/app/build/clients/client_autogen/mocs_compilation.cpp -o CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.s

clients/CMakeFiles/client.dir/client.cpp.o: clients/CMakeFiles/client.dir/flags.make
clients/CMakeFiles/client.dir/client.cpp.o: /Users/test/Documents/server---clients/src/app/clients/client.cpp
clients/CMakeFiles/client.dir/client.cpp.o: clients/CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/test/Documents/server---clients/src/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object clients/CMakeFiles/client.dir/client.cpp.o"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT clients/CMakeFiles/client.dir/client.cpp.o -MF CMakeFiles/client.dir/client.cpp.o.d -o CMakeFiles/client.dir/client.cpp.o -c /Users/test/Documents/server---clients/src/app/clients/client.cpp

clients/CMakeFiles/client.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/client.dir/client.cpp.i"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/test/Documents/server---clients/src/app/clients/client.cpp > CMakeFiles/client.dir/client.cpp.i

clients/CMakeFiles/client.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/client.dir/client.cpp.s"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/test/Documents/server---clients/src/app/clients/client.cpp -o CMakeFiles/client.dir/client.cpp.s

clients/CMakeFiles/client.dir/client_window.cpp.o: clients/CMakeFiles/client.dir/flags.make
clients/CMakeFiles/client.dir/client_window.cpp.o: /Users/test/Documents/server---clients/src/app/clients/client_window.cpp
clients/CMakeFiles/client.dir/client_window.cpp.o: clients/CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/test/Documents/server---clients/src/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object clients/CMakeFiles/client.dir/client_window.cpp.o"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT clients/CMakeFiles/client.dir/client_window.cpp.o -MF CMakeFiles/client.dir/client_window.cpp.o.d -o CMakeFiles/client.dir/client_window.cpp.o -c /Users/test/Documents/server---clients/src/app/clients/client_window.cpp

clients/CMakeFiles/client.dir/client_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/client.dir/client_window.cpp.i"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/test/Documents/server---clients/src/app/clients/client_window.cpp > CMakeFiles/client.dir/client_window.cpp.i

clients/CMakeFiles/client.dir/client_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/client.dir/client_window.cpp.s"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/test/Documents/server---clients/src/app/clients/client_window.cpp -o CMakeFiles/client.dir/client_window.cpp.s

clients/CMakeFiles/client.dir/client_manager.cpp.o: clients/CMakeFiles/client.dir/flags.make
clients/CMakeFiles/client.dir/client_manager.cpp.o: /Users/test/Documents/server---clients/src/app/clients/client_manager.cpp
clients/CMakeFiles/client.dir/client_manager.cpp.o: clients/CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/test/Documents/server---clients/src/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object clients/CMakeFiles/client.dir/client_manager.cpp.o"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT clients/CMakeFiles/client.dir/client_manager.cpp.o -MF CMakeFiles/client.dir/client_manager.cpp.o.d -o CMakeFiles/client.dir/client_manager.cpp.o -c /Users/test/Documents/server---clients/src/app/clients/client_manager.cpp

clients/CMakeFiles/client.dir/client_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/client.dir/client_manager.cpp.i"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/test/Documents/server---clients/src/app/clients/client_manager.cpp > CMakeFiles/client.dir/client_manager.cpp.i

clients/CMakeFiles/client.dir/client_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/client.dir/client_manager.cpp.s"
	cd /Users/test/Documents/server---clients/src/app/build/clients && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/test/Documents/server---clients/src/app/clients/client_manager.cpp -o CMakeFiles/client.dir/client_manager.cpp.s

# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/client.dir/client.cpp.o" \
"CMakeFiles/client.dir/client_window.cpp.o" \
"CMakeFiles/client.dir/client_manager.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/client_autogen/mocs_compilation.cpp.o
clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/client.cpp.o
clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/client_window.cpp.o
clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/client_manager.cpp.o
clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/build.make
clients/client.app/Contents/MacOS/client: /opt/homebrew/lib/QtWidgets.framework/Versions/A/QtWidgets
clients/client.app/Contents/MacOS/client: /opt/homebrew/lib/QtNetwork.framework/Versions/A/QtNetwork
clients/client.app/Contents/MacOS/client: /opt/homebrew/lib/QtGui.framework/Versions/A/QtGui
clients/client.app/Contents/MacOS/client: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
clients/client.app/Contents/MacOS/client: clients/CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/test/Documents/server---clients/src/app/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable client.app/Contents/MacOS/client"
	cd /Users/test/Documents/server---clients/src/app/build/clients && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
clients/CMakeFiles/client.dir/build: clients/client.app/Contents/MacOS/client
.PHONY : clients/CMakeFiles/client.dir/build

clients/CMakeFiles/client.dir/clean:
	cd /Users/test/Documents/server---clients/src/app/build/clients && $(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : clients/CMakeFiles/client.dir/clean

clients/CMakeFiles/client.dir/depend:
	cd /Users/test/Documents/server---clients/src/app/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/test/Documents/server---clients/src/app /Users/test/Documents/server---clients/src/app/clients /Users/test/Documents/server---clients/src/app/build /Users/test/Documents/server---clients/src/app/build/clients /Users/test/Documents/server---clients/src/app/build/clients/CMakeFiles/client.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : clients/CMakeFiles/client.dir/depend

