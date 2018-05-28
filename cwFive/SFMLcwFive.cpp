// SFML.test
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

// globals
int num_vertBox = 30, num_horzBox = 20;
int size = 16; // number of pixels
int w = size * num_horzBox; // background number of pixels in w
int h = size * num_vertBox; // backbround number o fpixels in h

int direction, snake_length = 4;

// Maximum size of snake
struct Snake{
  int x, y;
}s[100];

struct Fruit{
  int x, y;
}food;

void Tick(){
  // move remaining pieces of snake s[1] - s[99]
  for(int i = snake_length; i > 0; i--){
  s[i].x = s[i - 1].x;
  s[i].y = s[i - 1].y;
  }

  // head of snake depends on direction of user s[0]
  // user up
  if (direction == 3){
    s[0].y -= 1;
  }

  // user down
  if (direction == 0){
    s[0].y += 1;
  }

  // user left
  if (direction == 1){
    s[0].x -= 1;
  }

  // user right
  if (direction == 2){
    s[0].x += 1;
  }

  // if snake eats food it should grow
  if((s[0].x) == food.x && (s[0].y) == food.y){
  // snake grows
  snake_length++;

  // randomly place food somewhere else
  food.x = rand() % num_horzBox;
  food.y = rand() % num_vertBox;

  }

  // boundary checking screen loop back on other side
  // LEFT and RIGHT
  if (s[0].x > num_horzBox){
    s[0].x = 0;
  }

  // boundary checking screen loop back on other side
  if (s[0].x < 0){
    s[0].x = num_horzBox;
  }

  // TOP and BOTTOM
  if (s[0].y > num_vertBox){
    s[0].y = 0;
  }

  // boundary checking screen loop back on other side
  if (s[0].y < 0){
    s[0].x = num_vertBox;
  }

  // check if go over snake
  for(int i = 0; i < snake_length; i++){
    // cut snake in half from place eaten
    if(s[0].x == s[i].x && s[0].y == s[i].y){
      snake_length = i;
    }
  }

}

int main(){
  srand(time(0));
  RenderWindow window(VideoMode(w, h), "Snake Game!");

  // textures
  // load an image
  Texture t1, t2, t3;
  t1.loadFromFile("image/white.png");
  t2.loadFromFile("image/red.png");
  t2.loadFromFile("image/green.png");

  // sprite
  // has physical dimensions
  Sprite sprite1(t1);
  Sprite sprite2(t2);
  Sprite sprite3(t3);

  food.x = 10;
  food.y = 10;

  Clock clock;
  float timer = 0, delay = .1;

  while(window.isOpen()){
    float time = clock.getElapsedTime().asSeconds();
    clock.restart();
    timer += time;
  }

  while (window.isOpen()){
    // allow us to check when a user does something
    Event e;

    // check when window is closed
    while (window.pollEvent(e)){
      if (e.type == Event::Closed){
        window.close();
      }
    }

    // controls for snake movement by user
    if(Keyboard::isKeyPressed(Keyboard::Up)) direction = 3;
    if(Keyboard::isKeyPressed(Keyboard::Down)) direction = 0;
    if(Keyboard::isKeyPressed(Keyboard::Left)) direction = 1;
    if(Keyboard::isKeyPressed(Keyboard::Right)) direction = 2;

    if (timer > delay)
    {
      timer = 0; // reset timer
      Tick(); // move snake one sprite forward
    }

    // Draw
    window.clear();

    // draw Background
    for(int i = 0;i < num_horzBox; i++){
      for(int j = 0; j < num_vertBox; j++){
        sprite1.setPosition(i * size, j * size);
        window.draw(sprite1);
      }
    }

    // draw snake
    for (int i = 0; i < snake_length; i++){
      sprite2.setPosition(s[i].x * size, s[i].y * size);
      window.draw(sprite2);
    }
    // Draw fruit
    sprite3.setPosition(food.x * size, food.y * size);
    window.draw(sprite3);

    window.display();
  }

  return 0;
}
