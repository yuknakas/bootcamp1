CC = gcc
CFLAGS  = -Wall -O1 -g -fno-pie -no-pie -m64 -fcf-protection=none -mno-shstk -fno-stack-protector
LDFLAGS = -no-pie -fcf-protection=none -mno-shstk
TARGET = prime
SRC = prime.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)