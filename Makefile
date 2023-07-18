CC = gcc
CFLAGS=-std=c11 -g -static -Wall -v

# link THIS for the cs50 functions (add others as needed):
LFLAGS=cs50.c


# the build target executable:
TARGET = hello

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(LFLAGS)

clean:
	rm -f $(TARGET) $(TARGET:=.o) *~

.PHONY: all clean
