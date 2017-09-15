OBJS = main.o graph.o
CC = g++
VER = -std=c++14
DEBUG = -g
CFLAGS = -Wall -Werror -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

graphlib : $(OBJS)
	$(CC) $(VER) $(LFLAGS) $(OBJS) -o graphlib

main.o : main.h graph.h main.cc
	$(CC) $(VER) $(CFLAGS) main.cc

graph.o : graph.h graph.cc
	$(CC) $(VER) $(CFLAGS) graph.cc

clean:
	rm -f *.o *~ graphlib
