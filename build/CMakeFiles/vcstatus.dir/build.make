# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Codigo/.conf/vcstatus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Codigo/.conf/vcstatus/build

# Include any dependencies generated for this target.
include CMakeFiles/vcstatus.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vcstatus.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vcstatus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vcstatus.dir/flags.make

CMakeFiles/vcstatus.dir/util.cpp.o: CMakeFiles/vcstatus.dir/flags.make
CMakeFiles/vcstatus.dir/util.cpp.o: /home/jose/Codigo/.conf/vcstatus/util.cpp
CMakeFiles/vcstatus.dir/util.cpp.o: CMakeFiles/vcstatus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Codigo/.conf/vcstatus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vcstatus.dir/util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vcstatus.dir/util.cpp.o -MF CMakeFiles/vcstatus.dir/util.cpp.o.d -o CMakeFiles/vcstatus.dir/util.cpp.o -c /home/jose/Codigo/.conf/vcstatus/util.cpp

CMakeFiles/vcstatus.dir/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcstatus.dir/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Codigo/.conf/vcstatus/util.cpp > CMakeFiles/vcstatus.dir/util.cpp.i

CMakeFiles/vcstatus.dir/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcstatus.dir/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Codigo/.conf/vcstatus/util.cpp -o CMakeFiles/vcstatus.dir/util.cpp.s

CMakeFiles/vcstatus.dir/vcstatus.cpp.o: CMakeFiles/vcstatus.dir/flags.make
CMakeFiles/vcstatus.dir/vcstatus.cpp.o: /home/jose/Codigo/.conf/vcstatus/vcstatus.cpp
CMakeFiles/vcstatus.dir/vcstatus.cpp.o: CMakeFiles/vcstatus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Codigo/.conf/vcstatus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vcstatus.dir/vcstatus.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vcstatus.dir/vcstatus.cpp.o -MF CMakeFiles/vcstatus.dir/vcstatus.cpp.o.d -o CMakeFiles/vcstatus.dir/vcstatus.cpp.o -c /home/jose/Codigo/.conf/vcstatus/vcstatus.cpp

CMakeFiles/vcstatus.dir/vcstatus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vcstatus.dir/vcstatus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Codigo/.conf/vcstatus/vcstatus.cpp > CMakeFiles/vcstatus.dir/vcstatus.cpp.i

CMakeFiles/vcstatus.dir/vcstatus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vcstatus.dir/vcstatus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Codigo/.conf/vcstatus/vcstatus.cpp -o CMakeFiles/vcstatus.dir/vcstatus.cpp.s

# Object files for target vcstatus
vcstatus_OBJECTS = \
"CMakeFiles/vcstatus.dir/util.cpp.o" \
"CMakeFiles/vcstatus.dir/vcstatus.cpp.o"

# External object files for target vcstatus
vcstatus_EXTERNAL_OBJECTS =

vcstatus: CMakeFiles/vcstatus.dir/util.cpp.o
vcstatus: CMakeFiles/vcstatus.dir/vcstatus.cpp.o
vcstatus: CMakeFiles/vcstatus.dir/build.make
vcstatus: CMakeFiles/vcstatus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Codigo/.conf/vcstatus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vcstatus"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vcstatus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vcstatus.dir/build: vcstatus
.PHONY : CMakeFiles/vcstatus.dir/build

CMakeFiles/vcstatus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vcstatus.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vcstatus.dir/clean

CMakeFiles/vcstatus.dir/depend:
	cd /home/jose/Codigo/.conf/vcstatus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Codigo/.conf/vcstatus /home/jose/Codigo/.conf/vcstatus /home/jose/Codigo/.conf/vcstatus/build /home/jose/Codigo/.conf/vcstatus/build /home/jose/Codigo/.conf/vcstatus/build/CMakeFiles/vcstatus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vcstatus.dir/depend

