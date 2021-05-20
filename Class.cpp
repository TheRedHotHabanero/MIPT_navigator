//
// Created by user on 17.05.2021.
//
#include "Class.h"
#include <fstream>
#include <map>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::pair;
using std::setw;

void Check::entering_points1() {
    int a;
    cin >> a;
    Yours_Points = a;
}

void Check::entering_points() {
    Yours_Points = atoi(physics.returnText().c_str()) + atoi(math.returnText().c_str()) +
                   atoi(russian.returnText().c_str()) + atoi(biology.returnText().c_str()) +
                   atoi(chemistry.returnText().c_str());
    if (Yours_Points == 0)
        cout << "------ ОШИБКА: Введите баллы. ------" << endl;
    if (math.returnText().empty())
        cout << "------ ОШИБКА: Введите баллы по математике. ------" << endl;
    if (russian.returnText().empty())
        cout << "------ ОШИБКА: Введите баллы по руссоку языку. ------" << endl;
    if (atoi(physics.returnText().c_str()) < 0 || atoi(math.returnText().c_str()) < 0 ||
        atoi(russian.returnText().c_str()) < 0 || atoi(biology.returnText().c_str()) < 0 ||
        atoi(chemistry.returnText().c_str()) < 0)
        cout << "------ ОШИБКА: Введите положительные баллы. ------" << endl;

}

void Check::create_textbox() {
    math.set_pos_y(TEXT_BAR_POS_Y + TEXT_BAR_DELTA_Y);
    russian.set_pos_y(TEXT_BAR_POS_Y + 2 * TEXT_BAR_DELTA_Y);
    informatics.set_pos_y(TEXT_BAR_POS_Y + 3 * TEXT_BAR_DELTA_Y);
    biology.set_pos_y(TEXT_BAR_POS_Y + 4 * TEXT_BAR_DELTA_Y);
    chemistry.set_pos_y(TEXT_BAR_POS_Y + 5 * TEXT_BAR_DELTA_Y);
}

void Check::reading_from_file(const string &points_, multimap<int, string> &storage) {
    string name;
    string points;
    int point;
    ifstream reception;

    reception.open(points_);
    while (getline(reception, name, '-')) {
        getline(reception, points, '\n');
        point = atoi(points.c_str());
        storage.insert(pair<int, string>(point, name));
    }
    reception.close();

}


void Check::filling_storage(const string &phys_budget_, const string &chem_budget_,
                            const string &inf_budget_, const string &bio_budget_,
                            const string &phys_contract_, const string &chem_contract_,
                            const string &inf_contract_, const string &bio_contract_) {
    reading_from_file(phys_budget_, physics_budget);
    reading_from_file(inf_budget_, informatics_budget);
    reading_from_file(chem_budget_, chemistry_budget);
    reading_from_file(bio_budget_, biology_budget);

    reading_from_file(phys_contract_, physics_contract);
    reading_from_file(inf_contract_, informatics_contract);
    reading_from_file(chem_contract_, chemistry_contract);
    reading_from_file(bio_contract_, biology_contrat);
}

void Check::snap() {
    ofstream Table("table.csv");
    if (!physics.returnText().empty())
        output(Table, physics_budget, physics_contract);
    if (!informatics.returnText().empty())
        output(Table, informatics_budget, informatics_contract);
    if (!chemistry.returnText().empty())
        output(Table, chemistry_budget, chemistry_contract);
    if (!biology.returnText().empty())
        output(Table, biology_budget, biology_contrat);

}

void Check::output(ofstream &Table_, multimap<int, string> &budget_, multimap<int, string> &contract_) {
    Table_ << setw(2 * CELL_WIDTH) << "Бюджет:" << "," << " " << endl;
    for (auto &it:budget_) {
        if (it.first <= Yours_Points)
            Table_ << setw(CELL_WIDTH) << it.second << ","
                   << setw(CELL_WIDTH) << it.first << endl;
    }

    Table_ << setw(2 * CELL_WIDTH) << "Контракт:" << "," << " " << endl;
    for (auto &it:contract_) {
        if (it.first <= Yours_Points)
            Table_ << setw(CELL_WIDTH) << it.second << ","
                   << setw(CELL_WIDTH) << it.first << endl;
    }

}

void Check::create_exit_button(const string &exit_button_) {
    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}


void Check::create_check_button(const string &check_button_) {
    check_button.loadFromFile(check_button_);
    check_button_texture.loadFromImage(check_button);
    check_button_sprite.setTexture(check_button_texture);
    check_button_sprite.setPosition(CHECK_BUTTON_POS_X, CHECK_BUTTON_POS_Y);

}

void Check::create_text(const string &text_, const string &font_) {
    font.loadFromFile(font_);
    int i = 0;
    text.emplace_back(L"Физика", font, 30);
    text.emplace_back(L"Математика", font, 30);
    text.emplace_back(L"Русский язык", font, 30);
    text.emplace_back(L"Химия", font, 30);
    text.emplace_back(L"Биология", font, 30);
    for (auto &it:text) {
        it.setFillColor(Color::Black);
        it.setPosition(TEXT_POS_X, TEXT_POS_Y + i * TEXT_DELTA_Y);
        i++;
    }
}

void Check::exit_button_pressed(RenderWindow &window) { window.close(); }

void Check::check_button_pressed(RenderWindow &window) {
    check_num = 0;
    entering_points();
    snap();
    //exit_button_pressed(window);
}

void
Check::main_window(const string &exit_button_, const string &check_button_, const string &text_,
                   const string &font_,
                   const string &phys_budget_, const string &chem_budget_,
                   const string &inf_budget_, const string &bio_budget_,
                   const string &phys_contract_, const string &chem_contract_,
                   const string &inf_contract_, const string &bio_contract_) {
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Checking points");
    create_exit_button(exit_button_);
    create_check_button(check_button_);
    create_textbox();
    create_text(text_, font_);
    filling_storage(phys_budget_, chem_budget_,
                    inf_budget_, bio_budget_,
                    phys_contract_, chem_contract_,
                    inf_contract_, bio_contract_);

    processing_keys(window);

}


void Check::processing_keys(RenderWindow &window) {
    while (window.isOpen()) {
        Event event;

        while (window.pollEvent(event)) {

            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                exit_button_pressed(window);

            physics.event_holder(event);
            math.event_holder(event);
            russian.event_holder(event);
            informatics.event_holder(event);
            biology.event_holder(event);
            chemistry.event_holder(event);

        }

        if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                    EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            check_num = EXIT;

        if (IntRect(CHECK_BUTTON_POS_X, CHECK_BUTTON_POS_Y,
                    CHECK_BUTTON_WIDTH, CHECK_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            check_num = CHECK;

        if (Mouse::isButtonPressed(Mouse::Left)) {
            if (check_num == CHECK)
                check_button_pressed(window);
            else if (check_num == EXIT)
                exit_button_pressed(window);
        }
        window.clear(Color::White);

        //window.draw(phystech_school_background_sprite);
        window.draw(exit_button_sprite);
        window.draw(check_button_sprite);
        for (auto &it:text)
            window.draw(it);
        physics.displayBox(window);
        math.displayBox(window);
        russian.displayBox(window);
        informatics.displayBox(window);
        biology.displayBox(window);
        chemistry.displayBox(window);

        window.display();
    }
}




