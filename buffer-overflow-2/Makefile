CC = gcc
CFLAGS = -fno-stack-protector -z execstack
TARGET = vulnerable

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	rm -f $(TARGET) 