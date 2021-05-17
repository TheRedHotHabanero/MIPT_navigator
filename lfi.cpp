//
// Created by karina on 16.05.2021.
//
#include "lfi.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Lfi::trick_button_pressed(RenderWindow &window)
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "--------------------------YOU ARE READY TO KILL---------------------------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    SoundBuffer buffer;
    Sound sound;
    buffer.loadFromFile("../Sound/lfi.mp3");
    sound.setBuffer(buffer);
    sound.play();
}
