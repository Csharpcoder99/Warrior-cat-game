#include <iostream>
#include <unistd.h>
#include <fstream>
#include "catClass.hpp"

void Train()
{

    std::cout << "Please select which training item you want to use \n";
    std::cout << std::endl;

    std::cout << "########Training Items######### \n";
    std::cout << "# 1.Xp Gainer(This gains more xp for the warrior without battling)\n";
    std::cout << "# 2.Health replenish \n";
    std::cout << "#########Traing Items########## \n";
}
void Option()
{
    std::string answer;

    std::cout << "Options: \n";
    std::cout << std::endl;
    std::cout << "1.find new warriors \n";
    std::cout << "2.train \n";
    std::cout << "3.Inventory \n";
    std::cout << "4.Quit \n";
    std::cout << std::endl;

    std::cout << "Type>> ";
    std::cin.ignore();
    std::getline(std::cin, answer, '*');
}
void Menu()
{

    for (int i = 0; i < 1; i++)
    {

        for (int j = 0; j < 1; j++)
        {
            std::cout << "###############\n";
            std::cout << "#1.Start Game \n";
            std::cout << "#2.Quit Game  \n";
            std::cout << "###############\n\n";
            std::cout << "Type: ";
        }
    }
}

int main()
{

    std::string region[5] = {
        "Nothing",
        "Desert",
        "Jungle",
        "Arctic",
        "Sea"};

    int option;
    int movement;
    int cats = 2;
    int trainingItems;
    int picktrainingItem;

    srand((unsigned)time(0));
    int spawnWarrior = 1 + (rand() % 7);

    srand((unsigned)time(0));
    int random_number = 1 + (rand() % 4);

    std::string uncatchCats[9] = {
        // this array goes from top to bottom the top cats are the rare ones
        "Nothing",
        "Tigerstar",
        "Sandstorm",
        "Brambleclaw",
        "Bluestar",
        "Leafpool",
        "Feathertail",
        "Spottedleaf",
    };

    std::string userCharacters[9] = {
        "Nothing",
        "Pinestar",
        "Yellowfang",
    };

    _Pinestar _Pinestar;
    _Pinestar.damage = 20;
    _Pinestar.specialmoveName = "Star Scraping Attack";
    _Pinestar.specialmoveDamage = 40;

    _Pinestar.health = 45;
    _Pinestar.name = userCharacters[1];
    _Pinestar.level = 1;

    Yellofang Yellofang;
    Yellofang.damage = 55;
    Yellofang.health = 23;
    Yellofang.specialmoveName = "Healer";

    Yellofang.specialmovehealingPoint = 35;
    Yellofang.name = userCharacters[2];
    Yellofang.level = 1;

    Spawning_1 _spawningOne;
    // _spawningOne.print(_Pinestar);

    Menu();
    std::cin >> option;

    if (option == 1)
    {
        for (int i = 0; i < 1; i++)
        {
            system("clear");
            std::cout << "These are your characters " << _Pinestar.name << ", and " << Yellofang.name << std::endl;

            sleep(2);
            system("clear");

            switch (random_number)
            {

            case 1:
                std::cout << "You are in the region of " << region[1] << std::endl;
                break;

            case 2:
                std::cout << "You are in the region of " << region[2] << std::endl;
                break;
            case 3:
                std::cout << "You are in the region of " << region[3] << std::endl;
                break;
            case 4:
                std::cout << "You are in the region of " << region[4] << std::endl;
                break;
            default:
                std::cout << "You are in the region of " << region[1] << std::endl;
                break;
            }

            sleep(2);
            system("clear");
            Option();

            std::cin >> movement;

            switch (movement)
            {
            case 1:
                std::cout << "Looking for a warrior to catch \n";
                sleep(1);

                switch (spawnWarrior)
                {
                case 1:
                    std::cout << "You caught " << uncatchCats[8] << std::endl;
                    break;
                case 2:
                    std::cout << "You caught " << uncatchCats[7] << std::endl;
                    break;
                case 3:
                    std::cout << "You caught " << uncatchCats[6] << std::endl;
                    break;
                case 4:
                    std::cout << "You caught " << uncatchCats[5] << std::endl;
                    break;
                case 5:
                    std::cout << "You caught " << uncatchCats[4] << std::endl;
                    break;
                case 6:
                    std::cout << "You caught " << uncatchCats[3] << std::endl;
                    break;
                case 7:
                    std::cout << "You caught " << uncatchCats[2] << std::endl;
                    break;
                case 8:
                    std::cout << "You caught " << uncatchCats[1] << std::endl;
                    break;
                }
            case 2:

            Train();
            
            if (movement == 2){

                if (trainingItems > 1)
                {

                    

                    std::cout << "Type: ";
                    std::cin >> picktrainingItem;

                    if (picktrainingItem == 1)
                    {
                        std::cout << "Which warrior: " << _Pinestar.name << " " << Yellofang.name << std::endl;
                    }
                }
                else if (trainingItems < 1)
                {
                    std::cout << "You do not have any training items \n";
                    continue;
                }
            }
            }
        }
    }
    else if (option == 2)
    {
        exit(EXIT_SUCCESS);
    }
};