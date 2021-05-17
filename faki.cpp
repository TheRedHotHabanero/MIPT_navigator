//
// Created by karina on 16.05.2021.
//
#include "faki.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Faki::trick_button_pressed(RenderWindow &window)
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "--------------------------ZZZZZZZZZZZZZZZZZZZZZ---------------------------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    SoundBuffer buffer;
    Sound sound;
    buffer.loadFromFile("../Sound/fakt.mp3");
    sound.setBuffer(buffer);
    sound.play();
}

