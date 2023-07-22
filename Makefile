CC = gcc
CFLAGS=-std=c11 -g -static -Wall
#CFLAGS=-std=c11 -g -Wall
# link THIS for the cs50 functions (add others as needed):
#LFLAGS=cs50.c
LFLAGS=-lm
# the build target executable:
TARGET = atcoder-tessoku/a05

all: $(TARGET)

$(TARGET): $(TARGET).c ;
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(LFLAGS) && ./$(TARGET)
#$(LFLAGS)

clean:
	rm -f $(TARGET) *.o *~

.PHONY: all clean
