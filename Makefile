# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Source files
SRCS = $(wildcard *.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
EXEC = program

# Default target
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean