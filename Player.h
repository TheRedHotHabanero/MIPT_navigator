#ifndef __PLAYER__H__
#define __PLAYER__H__

#include "Character.h"
#include "Fucker.h"
#include "map.h"


enum Player_conds
{
	DEAD = 1,
	SUCCESS = 2
};


class Player : public Character
{
private:

	int score;
	bool alive;


public:

	Player(String F, float X, float Y, float A, float B, float W, float H);
	~Player();


	void update(Map& map, float time, std::vector<Fucker>& fuckers);
	bool interactionWithMap(Map& map, float time);
	void interactionWithEnemy(std::vector<Fucker>& fuckers);
	Player_conds control(float time, Map& map, float& CurrentFrame, std::vector<Fucker>& fuckers, RenderWindow& window);
	int getScore();
	void setSpeed(float Speed);

};


#endif //!__PLAYER__H__

