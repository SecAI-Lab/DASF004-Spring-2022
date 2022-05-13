CC=gcc
CFLAGS=-W -Wall

PWD=$(shell pwd)
TARGET=$(shell basename $(PWD))

all: $(TARGET)

SRCS=$(wildcard *.c)	# all src files
OBJS=$(SRCS:.c=.o)	# all obj files

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET) 

