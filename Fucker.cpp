#include "Fucker.h"

Fucker::Fucker(String F, float X, float Y, float A, float B, float W, float H) : Character(F, X, Y, A, B, W, H) {}
Fucker::~Fucker() {}





void Fucker::update(Map& map, float time)
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

}


int Fucker::get_direction()
{
    return direction;
}

void Fucker::set_direction(int dir)
{
    direction = dir;
}

void Fucker::control(float time, Map& map)
{
    speed = 0.2;

    switch (direction)
    {
    case UP:
    case RIGHT:
    case DOWN:
    case LEFT:
        sprite.setTextureRect(IntRect(0, 0, 55, 55));
        break;
    default:
        break;
    }

    update(map, time);
}



bool Fucker::interactionWithMap(Map& map, float time)
{
    for (int i = y / 50; i < (y + h) / 50; ++i)
    {
        for (int j = x / 50; j < (x + w) / 51; ++j)
        {
            if (map.TileMap[i][j] == '0')//���� ��� ��������� ������������� ������� 0 (�����), �� ��������� "����������� ��������" ���������:
            {
                if (dy > 0)//���� �� ��� ����,
                {
                    y = i * 50 - h;//�� �������� ���������� ����� ���������. ������� �������� ���������� ������ ���������� �� �����(�����) � ����� �������� �� ������ ������� ���������.
                }
                else if (dy < 0)
                {
                    y = i * 50 + 50;//���������� � ������� �����. dy<0, ������ �� ���� ����� (���������� ���������� ������)
                }
                else if (dx > 0)
                {
                    x = j * 50 - w;//���� ���� ������, �� ���������� � ����� ����� (������ 0) ����� ������ ���������
                }
                else if (dx < 0)
                {
                    x = j * 50 + 50;//���������� ���� �����
                }
            }
 
        }


    }

    return false;
}

