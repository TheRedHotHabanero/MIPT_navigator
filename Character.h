#ifndef __CHARACTER__H__
#define __CHARACTER__H__


#include <SFML/Graphics.hpp>
using namespace sf;

enum directions
{
	RIGHT = 1,
	LEFT,
	UP,
	DOWN
};



class Character
{
private:
	float x, y, a, b, w, h, dx, dy, speed; 
	int direction; 
	String File; 
	Image image;
	Texture texture;
	Sprite sprite;

public:

	Character(String F, float X, float Y, float A, float B, float W, float H); 
	~Character();


	void update(float time); 
	virtual bool interactionWithMap() = 0;

	int get_direction();


};

#endif //!__CHARACTER__H__