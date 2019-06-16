CC=gcc
CXX=g++
RM=rm -f
SDLFLAGS=`sdl2-config --cflags --libs`
SRCS="src/*"

all:
	$(CXX) -o test $(SRCS) $(SDLFLAGS)
