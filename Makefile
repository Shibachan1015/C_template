CC = clang
CFLAGS=-std=c11 -g -static -Wall -v

# link THIS for the cs50 functions (add others as needed):
LFLAGS=-lcs50

# the build target executable:
TARGET = $(EXE)

all: $(TARGET)

$(TARGET): $(TARGET).c ; $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(LFLAGS)

clean:
	rm -f $(TARGET) *.o *~

.PHONY: all clean
