CC=gcc
CFLAGS=-W -Wall
TARGET=todo
all: $(TARGET)

OBJS = my_memo.o my_cal.o main.o

todo: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o todo

