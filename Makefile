CC=gcc
CXX=g++
RM=rm -f
SDLFLAGS=`sdl2-config --cflags --libs` -lSDL2_image
SRCS=$(wildcard src/*.cpp) \
     $(wildcard src/*.h)

all:
	$(CXX) -o test $(SRCS) $(SDLFLAGS)
