#include "Player.h"
#include <iostream>




Player::Player(String F, float X, float Y, float A, float B, float W, float H) : Character(F, X, Y, A, B, W, H)
{
    score = 0;
    alive = true;
}
Player::~Player() {}




void Player::update(Map& map, float time, std::vector<Fucker>& fuckers)
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

    interactionWithMap(map, time);
    interactionWithEnemy(fuckers);

}


bool Player::interactionWithMap(Map& map, float time)
{
    for (int i = y / 50; i < (y + h) / 50; ++i)
    {
        for (int j = x / 50; j < (x + w) / 50; ++j)
        {
            if ((map.TileMap[i][j] == '0') || (map.TileMap[i][j] == ' '))
            {
                if (dy > 0)
                {
                    y = i * 50 - h;
                }
                else if (dy < 0)
                {
                    y = i * 50 + 50;
                }
                else if (dx > 0)
                {
                    x = j * 50 - w;
                }
                else if (dx < 0)
                {
                    x = j * 50 + 50;
                }
            }
           
            else if (((map.TileMap[i][j] == '3') || (map.TileMap[i][j] == '2')) && score < 1)
            {
                ++score;
            }
            else if (((map.TileMap[i][j] == 'X') || (map.TileMap[i][j] == '%')) && score < 2)
            {
                ++score;
            }
        }
    }

    return false;
}



Player_conds Player::control(float time, Map& map, float& CurrentFrame, std::vector<Fucker>& fuckers)
{
  
    speed = 0.2;
    CurrentFrame += 0.005f * time;

    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        direction = RIGHT;
        CurrentFrame = CurrentFrame > 3 ? 0 : CurrentFrame;
        sprite.setTextureRect(IntRect(100 + 41 * int(CurrentFrame), 0, 41, 57));
    }
    else if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        direction = LEFT;
        CurrentFrame = CurrentFrame > 3 ? 0 : CurrentFrame;
        sprite.setTextureRect(IntRect(100 + 41 * int(CurrentFrame + 1), 0, -41, 57));
    }
    else if (Keyboard::isKeyPressed(Keyboard::Up))
    {
        direction = UP;
        CurrentFrame = CurrentFrame > 1 ? 0 : CurrentFrame;
        sprite.setTextureRect(IntRect(45 + 41 * int(CurrentFrame), 0, 41, 57));
    }
    else if (Keyboard::isKeyPressed(Keyboard::Down))
    {
        direction = DOWN;
        CurrentFrame = CurrentFrame > 1 ? 0 : CurrentFrame;
        sprite.setTextureRect(IntRect(41 * int(CurrentFrame), 0, 41, 57));
    }
    else
        speed = 0;


    update(map, time, fuckers);



    if (!alive)
        return DEAD;

    if (score == SUCCESS)
        return SUCCESS;
}

void Player::interactionWithEnemy(std::vector<Fucker>& fuckers)
{
    for (int i = 0; i < fuckers.size(); i++)
    {
        if (getRect().intersects(fuckers[i].getRect()))
            alive = false;
    }

}


int Player::getScore()
{
    return score;
}

void Player::setSpeed(float Speed)
{
    speed = Speed;
}