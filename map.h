#ifndef __MAP__H__
#define __MAP__H__

#include "SFML/Graphics.hpp"
using namespace sf;

class Map
{
private:
	static const int HEIGHT_MAP = 25;
	static const int WIDTH_MAP = 40;
	Image image;
	Texture texture;
	Sprite sprite;
	String File;

	String TileMap[HEIGHT_MAP] = {
    "0000000000000000000000000000000000000000",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0000000000000000000000000000000000000000",
    };

public:

	Map(String F);
	~Map();

    Sprite& get_sprite();
	void draw_map(Sprite& s_map, RenderWindow& window);

};





#endif //!__MAP__H__
