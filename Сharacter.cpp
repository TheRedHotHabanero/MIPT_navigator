#include "Character.h"

Character::Character(String F, float X, float Y, float A, float B, float W, float H)
{  
    File = F;
	w = W; h = H;
	x = X; y = Y;
	a = A; b = B;
	dx = 0;
	dy = 0;
	speed = 0;
	direction = 0;


	image.loadFromFile("images/" + File);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	//sprite.setTextureRect(IntRect(0, 0, w, h)
	sprite.setTextureRect(IntRect(a, b, w, h));
}

Character::~Character() {}


void Character::update(float time)
{
    {
        switch (direction)
        {
        case DOWN: dx = 0;
            dy = speed;
            break;

        case UP:   dx = 0;
            dy = -speed;
            break;

        case RIGHT:dx = speed;
            dy = 0;
            break;

        case LEFT: dx = -speed;
            dy = 0;
            break;
        }

        x += dx * time;
        y += dy * time;

        speed = 0;
        sprite.setPosition(x, y);
    }

}


