//
// Created by karina on 16.05.2021.
//
#include "frkt.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Frkt::trick_button_pressed(RenderWindow &window)
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "--------------------------MEOWWWWWWWWWWWWWWWWWW---------------------------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    SoundBuffer buffer;
    Sound sound;
    buffer.loadFromFile("../Sound/frkt.mp3");
    sound.setBuffer(buffer);
    sound.play();
}
