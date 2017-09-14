OBJS = main.o graph.o
CC = g++
VER = -std=c++14
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

graphlib : $(OBJS)
	$(CC) $(VER) $(LFLAGS) $(OBJS) -o graphlib

main.o : graph.h main.cc
	$(CC) $(VER) $(CFLAGS) main.cc

graph.o : graph.h graph.cc
	$(CC) $(VER) $(CFLAGS) graph.cc

clean:
	rm -f *.o *~ graph
