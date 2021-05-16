#ifndef __MAP__H__
#define __MAP__H__

#include "SFML/Graphics.hpp"

const int HEIGHT_MAP = 21;
const int WIDTH_MAP = 38;

int PATHS_1 = 51;
int PATHS_2 = 106;
int PATHS_3 = 146;

sf::String TileMap[HEIGHT_MAP] = {
  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
  "x                                   x",
  "xl     bbbbbbbbbbbbbbbbbbbbbbb     lx",
  "xd     b  aaaaaaaaaaaaaaaaa  b     dx",
  "xd     b ebbbbbbbbbbbbbbbbbe b     dx",
  "xd     b ebldldldldldldldlbe b     dx",
  "xd     b eb  bbbbbbbbbbb  be b     dx",
  "xd     b ebbbb  l   l  bbbbe b     dx",
  "xd     b  aaaaaaaaaaaaaaaaa  b     dx",
  "xl     bb   bbl       lbb   bb     lx",
  "xlll    b   bbbbb   bbbbb   b    lllx",
  "xlll    b   h   h e h   h   b    lllx",
  "xlll    b   h   h e h   h   b    lllx",
  "xlll    b   bbbbb e bbbbb   b    lllx",
  "xd      b         e  d      b      dx",
  "x       b  l      e         b    d  x",
  "x     l b     d   e    l    b       x",
  "x       b         e         b       x",
  "x       bbbbbbbbb e bbbbbbbbb   l   x",
  "x  d            b e b               x",
  "xxxxxxxxxxxxxxxxxyyyxxxxxxxxxxxxxxxxx",
};


#endif //!__MAP__H__
