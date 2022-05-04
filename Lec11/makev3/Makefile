CC=gcc
CFLAGS=-W -Wall
TARGET=todo
all: $(TARGET)

todo: my_memo.o my_cal.o main.o
	$(CC) $(CFLAGS) -o $@ $^ 

my_memo.o: my_memo.c
	$(CC) $(CFLAGS) -c -o $@ $^

my_cal.o: my_cal.c
	$(CC) $(CFLAGS) -c -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf *.o todo

