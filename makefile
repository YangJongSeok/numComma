# Makefile
CC = gcc
CFLAGS = -c -g
LDFLAGS =  
OBJECTS = comma.o
TARGET = comma

$(TARGET) : $(OBJECTS)
	$(CC)  $(LDFLAGS) -o $(TARGET) $(OBJECTS)

$(TARGET.o) : comma.c
	$(CC) $(CFLAGS) comma.c

clean:
	rm -f *.o
	rm -f $(TARGET)
