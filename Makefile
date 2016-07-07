CC=g++
CFLAGS=-c
SOURCES=main.cpp $(wildcard Introduction-VI-BigO/*.cpp) $(wildcard AdditionalProblems/*.cpp) $(wildcard Chapter1ArraysAndStrings/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=run

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@echo "Generating Executable: "$(EXECUTABLE)
	@$(CC) $(OBJECTS) -o $@

.cpp.o:
	@echo "Compiling Source Code File: "$<
	@$(CC) $(CFLAGS) $< -o $@

cl:
	@echo "Removed All Object Files & Executables!"
	@rm -f $(OBJECTS) $(EXECUTABLE)