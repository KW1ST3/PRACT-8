#include <iostream>
#include "game_logic.hpp"
#include <limits>

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    createFile("params.txt");
    createFile("stats.txt");

    while (true) {
        std::cout << "Привет это крестики нолики от Марченко и Назаренко. Приятной игры <3" << std::endl;
        std::cout << "1. Начать игру" << std::endl;
        std::cout << "2. Настройки" << std::endl;
        std::cout << "3. История игр" << std::endl;
        std::cout << "4. Выход" << std::endl;
        std::cout << "Ваши действия: ";

        int choice;
        while (!(std::cin >> choice) || (choice < 1 || choice > 4)) {
            std::cout << "Ошибка выбора. Введите число от 1 до 4: ";
            std::cout << "Error ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                startGame();
                break;
            case 2:
                configParams();
                break;
            case 3:
                showStats();
                break;
            case 4:
                std::cout << "Выход из игры." << std::endl;
                return 0;
            default:
                std::cout << "Ошибка выбора." << std::endl;
        }
    }

    return 0;
}
