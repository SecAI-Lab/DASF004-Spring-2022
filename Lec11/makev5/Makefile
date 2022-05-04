CC=gcc
CFLAGS=-W -Wall
TARGET=todo
all: $(TARGET)

SRCS=$(wildcard *.c)   # my_memo.c my_cal.c main.c
OBJS=$(SRCS:.c=.o)     # my_memo.o my_cal.o main.o

todo: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o todo

