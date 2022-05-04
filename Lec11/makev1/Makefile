all: todo

todo: my_memo.o my_cal.o main.o
	gcc -W -Wall -o todo my_memo.o my_cal.o main.o

my_memo.o: my_memo.c
	gcc -W -Wall -c -o my_memo.o my_memo.c

my_cal.o: my_cal.c
	gcc -W -Wall -c -o my_cal.o my_cal.c

main.o: main.c
	gcc -W -Wall -c -o main.o main.c

clean:
	rm -rf *.o todo

