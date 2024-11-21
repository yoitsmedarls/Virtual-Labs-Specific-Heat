all: compile link clean move copy run

compile:
	g++ -c src/main.cpp

link:
	g++ main.o -o main -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm *.o

move:
	rm -r bin/ && mkdir -p bin/ && mv main bin/

copy:
	mkdir -p assets/ && cp -r assets/ bin/

run:
	./bin/main