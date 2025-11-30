# Makefile for Student Management System

# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Source and object files
SRC = main.c grade.c menu.c student.c utils.c
OBJ = main.o grade.o menu.o student.o utils.o

# Header files (included automatically in the source files)
INCLUDE = menu.h student.h utils.h

# Output executable
TARGET = student_management_system

# Default target to build the program
all: $(TARGET)

# Link the object files to create the final executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Rule to compile each .c file to a .o object file
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(TARGET)

# Rebuild everything
rebuild: clean all

# Run the program (after building)
run: $(TARGET)
	./$(TARGET)

# Print the compilation details
print:
	@echo "Source files: $(SRC)"
	@echo "Object files: $(OBJ)"
	@echo "Executable: $(TARGET)"

