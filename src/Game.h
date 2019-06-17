#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#ifndef __GAME_H__
#define __GAME_H__
class Game {
 public:
  Game();
  ~Game();

  void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
  void handleEvents();
  bool running() { return isRunning; }
  void update();
  void render();
  void clean();

  static SDL_Renderer *renderer;

 private:
  int cnt = 0;
  bool isRunning = false;
  SDL_Window *window;
};
#endif
