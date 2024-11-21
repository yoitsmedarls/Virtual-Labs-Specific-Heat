all: compile link clean move copy run

compile:
	g++ -c src/main.cpp

link:
	g++ main.o -o main -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm *.o

move:
	mv main bin/main

copy:
	cp -r assets/ bin/

run:
	./bin/main