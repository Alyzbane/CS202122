base: database.o interact.o compare.o readline.o
	gcc -o base database.o interact.o compare.o readline.o

database.o: database.c
	gcc -W -c database.c
interact.o: interact.c
	gcc -W -c interact.c interact.h
compare.o: compare.c
	gcc -W -c compare.c compare.h
readline.o: readline.c
	gcc -W -c readline.c readline.h
