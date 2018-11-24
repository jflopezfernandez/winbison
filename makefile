
vpath %.h include
vpath %.cpp src

CC := g++

CFLAGS := -I include -Wall -Wextra -pedantic-errors
LFLAGS :=

all: wbison.exe

wbison.exe: main.o 
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c -o $@ $^


clean:
	rm -rf *.o *.exe
