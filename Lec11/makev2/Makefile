CC=gcc
CFLAGS=-W -Wall
TARGET=todo
all: $(TARGET)

todo: my_memo.o my_cal.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) my_memo.o my_cal.o main.o

my_memo.o: my_memo.c
	$(CC) $(CFLAGS) -c -o my_memo.o my_memo.c

my_cal.o: my_cal.c
	$(CC) $(CFLAGS) -c -o my_cal.o my_cal.c

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

clean:
	rm -rf *.o todo

