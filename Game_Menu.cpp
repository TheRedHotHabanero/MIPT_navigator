#include "Game_Menu.h"


//------------------buttons creating functions ------//OK

void Game_Menu::create_game_menu_background(const string& game_menu_background_)
{
    game_menu_background.loadFromFile(game_menu_background_);
    game_menu_background_texture.loadFromImage(game_menu_background);
    game_menu_background_sprite.setTexture(game_menu_background_texture);
    game_menu_background_sprite.setPosition(MENU_POS_X, MENU_POS_Y);
}

void Game_Menu::create_math_department_button(const string& math_department_button_)
{
    math_department_button.loadFromFile(math_department_button_);
    math_department_button_texture.loadFromImage(math_department_button);
    math_department_button_sprite.setTexture(math_department_button_texture);
    math_department_button_sprite.setPosition(MATH_BUTTON_POS_X, MATH_BUTTON_POS_Y);
}

void Game_Menu::create_physics_department_button(const string& physics_department_button_)
{
    physics_department_button.loadFromFile(physics_department_button_);
    physics_department_button_texture.loadFromImage(physics_department_button);
    physics_department_button_sprite.setTexture(physics_department_button_texture);
    physics_department_button_sprite.setPosition(PHYS_BUTTON_POS_X, PHYS_BUTTON_POS_Y);
}

void Game_Menu::create_game_exit_button(const string& game_exit_button_)
{
    game_exit_button.loadFromFile(game_exit_button_);
    game_exit_button_texture.loadFromImage(game_exit_button);
    game_exit_button_sprite.setTexture(game_exit_button_texture);
    game_exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

//----------running levels 
void Game_Menu:: run_math()
{

}
void Game_Menu:: run_phys()
{

}

//---------processing bottons (����� ������: ��� ������ ������ ������ ��� �������)


//OK
void Game_Menu::game_welcome_page(const string& game_menu_background_,
    const string& game_exit_button_,
    const string& math_department_button_,
    const string& physics_department_button_)//�������� �����, ��������� �����
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "THE ARK");
    create_game_menu_background(game_menu_background_);
    create_math_department_button(math_department_button_);
    create_physics_department_button(physics_department_button_);
    create_game_exit_button(game_exit_button_);

    window.clear();

    window.draw(game_menu_background_sprite);
    window.draw(math_department_button_sprite);
    window.draw(physics_department_button_sprite);
    window.draw(game_exit_button_sprite);

    window.display();
    processing_menu(window);
}


void Game_Menu::math_department_button_pressed(RenderWindow& window)
{
    run_math();
}
void Game_Menu::physics_department_button_pressed(RenderWindow& window)
{
    run_phys();
}


//OK
void Game_Menu::game_exit_button_pressed(RenderWindow& window)//������ ������
{
    window.close();
}


//OK
void Game_Menu::processing_menu(RenderWindow& window) //���� ���� �� ����� ������������� ����������
{
    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                game_exit_button_pressed(window);


            if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
                menuNum = EXIT;

            if (IntRect(MATH_BUTTON_POS_X, MATH_BUTTON_POS_Y,
                MATH_BUTTON_WIDTH, MATH_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
                menuNum = MATH;

            if (IntRect(PHYS_BUTTON_POS_X, PHYS_BUTTON_POS_Y,
                PHYS_BUTTON_WIDTH, PHYS_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
                menuNum = PHYS;

            if (Mouse::isButtonPressed(Mouse::Left))
            {
                if (menuNum == EXIT)
                    game_exit_button_pressed(window);
                else if (menuNum == MATH)
                    math_department_button_pressed(window);
                else if (menuNum == PHYS)
                    physics_department_button_pressed(window);
            }
        }
    }
}

