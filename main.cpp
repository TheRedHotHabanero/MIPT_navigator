#include <iostream>
#include "menu.h"

using std::cin;
using std::cout;
using std::endl;

int main() {

    Menu MIPT_navigator;
    RenderWindow window;
    MIPT_navigator.welcome_page("../images/menu_background.jpg",
                                "../images/start_info.jpg",
                                "../images/exit_button.png",
                                "../images/about_button.png",
                                "../images/checking_odds_button.png");

    return 0;
}