# Variable names
CC = gcc
CFLAGS = -Wall -Wextra -g # Enables compiler warnings

# Source files (.c files) variables
SRC = name.c name_length.c name_reverse.c struct_functions.c

# Object files variable
OBJ = name.o name_length.o name_reverse.o struct_functions.o

TARGET = name # Executable name

all: $(TARGET) # Allows the user to compile name using "make"

# The target : its dependencies
# The executable depends on obj files and links them
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# The obj files depends on its source file and header files
name.o: name.c name_length.h name_reverse.h struct_functions.h state_struct.h constants.h
	$(CC) $(CFLAGS) -c name.c -o name.o

name_length.o: name_length.c name_length.h
	$(CC) $(CFLAGS) -c name_length.c -o name_length.o

name_reverse.o: name_reverse.c name_reverse.h
	$(CC) $(CFLAGS) -c name_reverse.c -o name_reverse.o

struct_functions.o: struct_functions.c struct_functions.h state_struct.h name_length.h constants.h
    $(CC) $(CFLAGS) -c struct_functions.c -o struct_functions.o

clean: # Removes obj files without prompting
	rm -f $(OBJ) $(TARGET)
