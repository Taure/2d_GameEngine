#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y)
{
  renderer = ren;
  objTexture = TextureManager::LoadTexture(texturesheet, ren);

  xpos = x;
  ypos = y;

}

void GameObject::update()
{
  xpos++;
  ypos++;
  
  srcRect.h = 32;
  srcRect.w = 32;
  srcRect.x = 0;
  srcRect.y = 0;

  destRect.h = srcRect.h * 2;
  destRect.w = srcRect.w * 2;
  destRect.x = xpos;
  destRect.y = ypos;
}

void GameObject::render()
{
  SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}
