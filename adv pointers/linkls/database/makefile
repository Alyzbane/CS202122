dbase: dbase.o	node.o
	gcc -W -o dbase dbase.o node.o readline.o

node.o: node.c node.h
	gcc -W -c node.c node.h

dbase.o: dbase.c
	gcc -W -c dbase.c

readline.o: readline.c
	gcc -W -c readline.c readline.h


