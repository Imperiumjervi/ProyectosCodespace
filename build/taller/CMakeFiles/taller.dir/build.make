# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_SOURCE_DIR = /home/jeffer/Documentos/gitHub/CodespaceClases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeffer/Documentos/gitHub/CodespaceClases/build

# Include any dependencies generated for this target.
include taller/CMakeFiles/taller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include taller/CMakeFiles/taller.dir/compiler_depend.make

# Include the progress variables for this target.
include taller/CMakeFiles/taller.dir/progress.make

# Include the compile flags for this target's objects.
include taller/CMakeFiles/taller.dir/flags.make

taller/CMakeFiles/taller.dir/codegen:
.PHONY : taller/CMakeFiles/taller.dir/codegen

taller/CMakeFiles/taller.dir/main.cpp.o: taller/CMakeFiles/taller.dir/flags.make
taller/CMakeFiles/taller.dir/main.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller/main.cpp
taller/CMakeFiles/taller.dir/main.cpp.o: taller/CMakeFiles/taller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object taller/CMakeFiles/taller.dir/main.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller/CMakeFiles/taller.dir/main.cpp.o -MF CMakeFiles/taller.dir/main.cpp.o.d -o CMakeFiles/taller.dir/main.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller/main.cpp

taller/CMakeFiles/taller.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller.dir/main.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller/main.cpp > CMakeFiles/taller.dir/main.cpp.i

taller/CMakeFiles/taller.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller.dir/main.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller/main.cpp -o CMakeFiles/taller.dir/main.cpp.s

taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o: taller/CMakeFiles/taller.dir/flags.make
taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Cuenta.cpp
taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o: taller/CMakeFiles/taller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o -MF CMakeFiles/taller.dir/src/Cuenta.cpp.o.d -o CMakeFiles/taller.dir/src/Cuenta.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Cuenta.cpp

taller/CMakeFiles/taller.dir/src/Cuenta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller.dir/src/Cuenta.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Cuenta.cpp > CMakeFiles/taller.dir/src/Cuenta.cpp.i

taller/CMakeFiles/taller.dir/src/Cuenta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller.dir/src/Cuenta.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Cuenta.cpp -o CMakeFiles/taller.dir/src/Cuenta.cpp.s

taller/CMakeFiles/taller.dir/src/Usuario.cpp.o: taller/CMakeFiles/taller.dir/flags.make
taller/CMakeFiles/taller.dir/src/Usuario.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Usuario.cpp
taller/CMakeFiles/taller.dir/src/Usuario.cpp.o: taller/CMakeFiles/taller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object taller/CMakeFiles/taller.dir/src/Usuario.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller/CMakeFiles/taller.dir/src/Usuario.cpp.o -MF CMakeFiles/taller.dir/src/Usuario.cpp.o.d -o CMakeFiles/taller.dir/src/Usuario.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Usuario.cpp

taller/CMakeFiles/taller.dir/src/Usuario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller.dir/src/Usuario.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Usuario.cpp > CMakeFiles/taller.dir/src/Usuario.cpp.i

taller/CMakeFiles/taller.dir/src/Usuario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller.dir/src/Usuario.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller/src/Usuario.cpp -o CMakeFiles/taller.dir/src/Usuario.cpp.s

# Object files for target taller
taller_OBJECTS = \
"CMakeFiles/taller.dir/main.cpp.o" \
"CMakeFiles/taller.dir/src/Cuenta.cpp.o" \
"CMakeFiles/taller.dir/src/Usuario.cpp.o"

# External object files for target taller
taller_EXTERNAL_OBJECTS =

bin/taller: taller/CMakeFiles/taller.dir/main.cpp.o
bin/taller: taller/CMakeFiles/taller.dir/src/Cuenta.cpp.o
bin/taller: taller/CMakeFiles/taller.dir/src/Usuario.cpp.o
bin/taller: taller/CMakeFiles/taller.dir/build.make
bin/taller: taller/CMakeFiles/taller.dir/compiler_depend.ts
bin/taller: taller/CMakeFiles/taller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/taller"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/taller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
taller/CMakeFiles/taller.dir/build: bin/taller
.PHONY : taller/CMakeFiles/taller.dir/build

taller/CMakeFiles/taller.dir/clean:
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller && $(CMAKE_COMMAND) -P CMakeFiles/taller.dir/cmake_clean.cmake
.PHONY : taller/CMakeFiles/taller.dir/clean

taller/CMakeFiles/taller.dir/depend:
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeffer/Documentos/gitHub/CodespaceClases /home/jeffer/Documentos/gitHub/CodespaceClases/taller /home/jeffer/Documentos/gitHub/CodespaceClases/build /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller/CMakeFiles/taller.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : taller/CMakeFiles/taller.dir/depend

