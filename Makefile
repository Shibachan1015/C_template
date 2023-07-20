CC = gcc
#CFLAGS=-std=c11 -g -static -Wall -v
CFLAGS=-std=c11 -g -Wall
# link THIS for the cs50 functions (add others as needed):
#LFLAGS=cs50.c
# the build target executable:
TARGET = 1-2

all: $(TARGET)

$(TARGET): $(TARGET).c ;
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c && ./$(TARGET)

# $(LFLAGS)

clean:
	rm -f $(TARGET) *.o *~

.PHONY: all clean
