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
include taller3/CMakeFiles/taller3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include taller3/CMakeFiles/taller3.dir/compiler_depend.make

# Include the progress variables for this target.
include taller3/CMakeFiles/taller3.dir/progress.make

# Include the compile flags for this target's objects.
include taller3/CMakeFiles/taller3.dir/flags.make

taller3/CMakeFiles/taller3.dir/codegen:
.PHONY : taller3/CMakeFiles/taller3.dir/codegen

taller3/CMakeFiles/taller3.dir/main.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/main.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/main.cpp
taller3/CMakeFiles/taller3.dir/main.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object taller3/CMakeFiles/taller3.dir/main.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/main.cpp.o -MF CMakeFiles/taller3.dir/main.cpp.o.d -o CMakeFiles/taller3.dir/main.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/main.cpp

taller3/CMakeFiles/taller3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/main.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/main.cpp > CMakeFiles/taller3.dir/main.cpp.i

taller3/CMakeFiles/taller3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/main.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/main.cpp -o CMakeFiles/taller3.dir/main.cpp.s

taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Asistente.cpp
taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o -MF CMakeFiles/taller3.dir/src/Asistente.cpp.o.d -o CMakeFiles/taller3.dir/src/Asistente.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Asistente.cpp

taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Asistente.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Asistente.cpp > CMakeFiles/taller3.dir/src/Asistente.cpp.i

taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Asistente.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Asistente.cpp -o CMakeFiles/taller3.dir/src/Asistente.cpp.s

taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/CargarMaterial.cpp
taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o -MF CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o.d -o CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/CargarMaterial.cpp

taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/CargarMaterial.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/CargarMaterial.cpp > CMakeFiles/taller3.dir/src/CargarMaterial.cpp.i

taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/CargarMaterial.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/CargarMaterial.cpp -o CMakeFiles/taller3.dir/src/CargarMaterial.cpp.s

taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Dvd.cpp
taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o -MF CMakeFiles/taller3.dir/src/Dvd.cpp.o.d -o CMakeFiles/taller3.dir/src/Dvd.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Dvd.cpp

taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Dvd.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Dvd.cpp > CMakeFiles/taller3.dir/src/Dvd.cpp.i

taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Dvd.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Dvd.cpp -o CMakeFiles/taller3.dir/src/Dvd.cpp.s

taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Libro.cpp
taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o -MF CMakeFiles/taller3.dir/src/Libro.cpp.o.d -o CMakeFiles/taller3.dir/src/Libro.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Libro.cpp

taller3/CMakeFiles/taller3.dir/src/Libro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Libro.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Libro.cpp > CMakeFiles/taller3.dir/src/Libro.cpp.i

taller3/CMakeFiles/taller3.dir/src/Libro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Libro.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Libro.cpp -o CMakeFiles/taller3.dir/src/Libro.cpp.s

taller3/CMakeFiles/taller3.dir/src/Material.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Material.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Material.cpp
taller3/CMakeFiles/taller3.dir/src/Material.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Material.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Material.cpp.o -MF CMakeFiles/taller3.dir/src/Material.cpp.o.d -o CMakeFiles/taller3.dir/src/Material.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Material.cpp

taller3/CMakeFiles/taller3.dir/src/Material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Material.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Material.cpp > CMakeFiles/taller3.dir/src/Material.cpp.i

taller3/CMakeFiles/taller3.dir/src/Material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Material.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Material.cpp -o CMakeFiles/taller3.dir/src/Material.cpp.s

taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Persona.cpp
taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o -MF CMakeFiles/taller3.dir/src/Persona.cpp.o.d -o CMakeFiles/taller3.dir/src/Persona.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Persona.cpp

taller3/CMakeFiles/taller3.dir/src/Persona.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Persona.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Persona.cpp > CMakeFiles/taller3.dir/src/Persona.cpp.i

taller3/CMakeFiles/taller3.dir/src/Persona.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Persona.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Persona.cpp -o CMakeFiles/taller3.dir/src/Persona.cpp.s

taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Registro.cpp
taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o -MF CMakeFiles/taller3.dir/src/Registro.cpp.o.d -o CMakeFiles/taller3.dir/src/Registro.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Registro.cpp

taller3/CMakeFiles/taller3.dir/src/Registro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Registro.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Registro.cpp > CMakeFiles/taller3.dir/src/Registro.cpp.i

taller3/CMakeFiles/taller3.dir/src/Registro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Registro.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Registro.cpp -o CMakeFiles/taller3.dir/src/Registro.cpp.s

taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o: taller3/CMakeFiles/taller3.dir/flags.make
taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o: /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Revista.cpp
taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o -MF CMakeFiles/taller3.dir/src/Revista.cpp.o.d -o CMakeFiles/taller3.dir/src/Revista.cpp.o -c /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Revista.cpp

taller3/CMakeFiles/taller3.dir/src/Revista.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/taller3.dir/src/Revista.cpp.i"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Revista.cpp > CMakeFiles/taller3.dir/src/Revista.cpp.i

taller3/CMakeFiles/taller3.dir/src/Revista.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/taller3.dir/src/Revista.cpp.s"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeffer/Documentos/gitHub/CodespaceClases/taller3/src/Revista.cpp -o CMakeFiles/taller3.dir/src/Revista.cpp.s

# Object files for target taller3
taller3_OBJECTS = \
"CMakeFiles/taller3.dir/main.cpp.o" \
"CMakeFiles/taller3.dir/src/Asistente.cpp.o" \
"CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o" \
"CMakeFiles/taller3.dir/src/Dvd.cpp.o" \
"CMakeFiles/taller3.dir/src/Libro.cpp.o" \
"CMakeFiles/taller3.dir/src/Material.cpp.o" \
"CMakeFiles/taller3.dir/src/Persona.cpp.o" \
"CMakeFiles/taller3.dir/src/Registro.cpp.o" \
"CMakeFiles/taller3.dir/src/Revista.cpp.o"

# External object files for target taller3
taller3_EXTERNAL_OBJECTS =

bin/taller3: taller3/CMakeFiles/taller3.dir/main.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Asistente.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/CargarMaterial.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Dvd.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Libro.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Material.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Persona.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Registro.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/src/Revista.cpp.o
bin/taller3: taller3/CMakeFiles/taller3.dir/build.make
bin/taller3: taller3/CMakeFiles/taller3.dir/compiler_depend.ts
bin/taller3: taller3/CMakeFiles/taller3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jeffer/Documentos/gitHub/CodespaceClases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ../bin/taller3"
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/taller3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
taller3/CMakeFiles/taller3.dir/build: bin/taller3
.PHONY : taller3/CMakeFiles/taller3.dir/build

taller3/CMakeFiles/taller3.dir/clean:
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 && $(CMAKE_COMMAND) -P CMakeFiles/taller3.dir/cmake_clean.cmake
.PHONY : taller3/CMakeFiles/taller3.dir/clean

taller3/CMakeFiles/taller3.dir/depend:
	cd /home/jeffer/Documentos/gitHub/CodespaceClases/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeffer/Documentos/gitHub/CodespaceClases /home/jeffer/Documentos/gitHub/CodespaceClases/taller3 /home/jeffer/Documentos/gitHub/CodespaceClases/build /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3 /home/jeffer/Documentos/gitHub/CodespaceClases/build/taller3/CMakeFiles/taller3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : taller3/CMakeFiles/taller3.dir/depend

