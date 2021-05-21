#include "Character.h"
#include "map.h"
#include "Player.h"


Character::Character(String F, float X, float Y, float A, float B, float W, float H)
{  //����������� � �����������(�����������) ��� ������ Player. ��� �������� ������� ������ �� ����� �������� ��� �����, ���������� � � �, ������ � ������
    File = F;//��� �����+����������
    w = W; h = H;//������ � ������
    x = X; y = Y;//���������� ��������� �������
    a = A; b = B;
    dx = 0;
    dy = 0;
    speed = 0;
    direction = 0;


    image.loadFromFile("../game_images/" + File);
    texture.loadFromImage(image);
    sprite.setTexture(texture);
    sprite.setTextureRect(IntRect(a, b, w, h));
}

Character::~Character() {}

Sprite Character::get_sprite()
{
    return sprite;

}

IntRect Character:: getRect()
{
    return IntRect(x, y, w, h);
}




