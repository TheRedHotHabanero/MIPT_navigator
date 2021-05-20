//
// Created by user on 19.05.2021.
//

#ifndef NEW_TEXTBAR_H
#define NEW_TEXTBAR_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using std::string;

struct ShapeOfBbox {

    int length;
    int width;
    int x;
    int y;
    int left_corner_x;
    int left_corner_y;
    int mouse_x_min;
    int mouse_x_max;
    int mouse_y_min;
    int mouse_y_max;

    ShapeOfBbox(int x = 0, int y = 0, int length = 0, int width = 0);

    bool is_in(int x_, int y_) const;

};

class TextBar {
private:
    Font font;
    Texture texture;
    ShapeOfBbox Shape;
    String s;
    Text txt;
    Sprite box;
    int b_size;
    bool active;
    int max_size_of_text;

    const static int TEXT_BAR_WIDTH = 242;
    const static int TEXT_BAR_HEIGHT = 68;
    const static int TEXT_BAR_POS_X = 500;
    const static int TEXT_BAR_POS_Y = 50;
    const static int TEXT_BAR_MAX_SIZE = 3;
    string TEXT_BAR_INIT = "";
    string TEXTBAR_TEXTURE = "../images/text_field.png";
    string TEXTBAR_FONT = "../texts/Font.ttf";

public:

    TextBar(int x, int y, int length, int width, const string &texture_, const string &font_,
            const string &initial_data, int max_size_of_text);

    TextBar() : TextBar(TEXT_BAR_POS_X, TEXT_BAR_POS_Y, TEXT_BAR_WIDTH,
                        TEXT_BAR_HEIGHT, TEXTBAR_TEXTURE, TEXTBAR_FONT,
                        TEXT_BAR_INIT, TEXT_BAR_MAX_SIZE) {};

    void setActive();

    void set_pos_y(int y_);

    void setPassive();

    int getTextLength() const;

    void displayBox(RenderWindow &window) const;

    void setText(string &str);

    void event_holder(Event &event);

    string returnText();
};


#endif //NEW_TEXTBAR_H
