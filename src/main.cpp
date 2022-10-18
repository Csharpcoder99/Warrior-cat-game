#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include "catClass.hpp"

void Train()
{

    std::cout << "Please select which training item you want to use \n";
    std::cout << std::endl;

    // std::cout << "########Training Items######### \n";
    // std::cout << "Total Items: " << inventoryItems << '\n';
    // std::cout << "# 1." << PlayerItems[1] << "\n";
    // std::cout << "# 2." << PlayerItems[2] << "\n";
    // std::cout << "# 3." << PlayerItems[3] << "\n";
    // std::cout << "# 4." << PlayerItems[4] << "\n";
    // std::cout << "# 5." << PlayerItems[5] << "\n";
    // std::cout << "# 6." << PlayerItems[6] << "\n";
    // std::cout << "# 7." << PlayerItems[7] << "\n";
    // std::cout << "# 8." << PlayerItems[8] << "\n";
    // std::cout << "# 9." << PlayerItems[9] << "\n";
    // std::cout << "#########Traing Items########## \n";
}
void Option()
{

    std::cout << "Options: \n";
    std::cout << std::endl;
    std::cout << "1.find new warriors \n";
    std::cout << "2.Equipment for characters \n";
    std::cout << "3.Inventory \n";
    std::cout << "4.Restart \n";
    std::cout << "4.Quit \n";
    std::cout << std::endl;

    std::cout << "Type: ";
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
    std::string defaultCat = "Nightheart";
    std::string command;
    int option;
    int movement;
    int cats = 2;
    int trainingItems = 10;
    int picktrainingItem;
    std::string upgradeWarrior;

    int xpGainer = 300;
    int healthReplenshisherOption;
    int healthReplenshisherPoints;
    int inventoryItems = 2;

    int level1YellowfangHealthPoint = 23;
    int level1PinestarHealthPoint = 45;

    srand((unsigned)time(0));
    int spawnWarrior = 1 + (rand() % 7);

    srand((unsigned)time(0));
    int random_number = 1 + (rand() % 4);

    srand((unsigned)time(0));
    int randomItem = 1 + (rand() % 9);

    std::string desertCats[2] = { //These cats are in these specific regions to find them
        "Sandstorm",
        "Spottedleaf"};

    std::string jungleCats[2] = {
        "Brambleclaw",
        "Feathertail",
    };

    std::string articCats[2] = {
        "Graystripe",
        "Leafpool",
    };

    std::string seaCats[2] = {
        "Nightheart",
        "Leafpool",
    };

    std::string rareCats[2] = {
        "Tigerstar",
        "Bluestar",

    };

    std::string PlayerItems[10] = {
        "Nothing",
        "Xp Gainer",
        "Health replenish",
        "",
        "",
        "",
        "",
        "",
    };

    std::string Items[10] = {
        "Nothing",
        "Xp Gainer(This gains more xp for the warrior without battling)",
        "Health replenish",
        "Level 1 Armor",
        "Level 2 Armor",
        "Level 3 Armor",
        "Level 1 speed",
        "Level 2 speed",
        "Level 3 speed",
        "Level 2 Xp Gainer",

    };

    std::string uncatchCats[10] = {
        // this array goes from top to bottom the top cats are the rare ones
        "Nothing",
        "Tigerstar",
        "Sandstorm",
        "Brambleclaw",
        "Bluestar",
        "Leafpool",
        "Feathertail",
        "Spottedleaf",
        "Graystripe",
    };

    std::string userCharacters[9] = {
        "Nothing",
        "Pinestar",
        "Yellowfang",
    };

    std::string region[5] = {
        "Nothing",
        "Desert",
        "Jungle",
        "Arctic",
        "Sea"};

    _Pinestar _Pinestar;
    _Pinestar.damage = 20;
    _Pinestar.specialmoveName = "Star Scraping Attack";
    _Pinestar.specialmoveDamage = 40;

    _Pinestar.health = 45;
    _Pinestar.name = userCharacters[1];
    _Pinestar.level = 1;
    _Pinestar.Xp = 0;

    _Yellofang _Yellofang;
    _Yellofang.damage = 55;
    _Yellofang.health = 23;
    _Yellofang.specialmoveName = "Fangs of healing";

    _Yellofang.specialmovehealingPoint = 35;
    _Yellofang.name = userCharacters[2];
    _Yellofang.level = 1;
    _Yellofang.Xp = 0;

    Spawning_1 _spawningOne;
    // _spawningOne.print(_Pinestar);

    Menu();
    std::cin >> option;

    while (true)
    {

        if (option == 1)
        {

            for (int i = 0; i < 1; i++)
            {
                // system("clear");
                std::cout << "These are your characters " << _Pinestar.name << ", and " << _Yellofang.name << std::endl;

                sleep(3);
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

                if (movement == 1)
                {

                    std::cout << "Looking for a warrior to catch \n";
                    sleep(1);

                    switch (spawnWarrior)
                    {

                    case 1:
                        std::cout << "You caught " << uncatchCats[1] << std::endl;
                        break;
                    case 2:
                        std::cout << "You caught " << uncatchCats[2] << std::endl;
                        break;
                    case 3:
                        std::cout << "You caught " << uncatchCats[3] << std::endl;
                        break;
                    case 4:
                        std::cout << "You caught " << uncatchCats[4] << std::endl;
                        break;
                    case 5:
                        std::cout << "You caught " << uncatchCats[5] << std::endl;
                        break;
                    case 6:
                        std::cout << "You caught " << uncatchCats[6] << std::endl;
                        break;
                    case 7:
                        std::cout << "You caught " << uncatchCats[7] << std::endl;
                        break;
                    case 8:
                        std::cout << "You caught " << uncatchCats[8] << std::endl;
                        break;
                    case 9:
                        std::cout << "You caught " << uncatchCats[9] << std::endl;
                        break;
                    default:
                        std::cout << "You caught " << defaultCat << std::endl;
                        break;
                    }
                }
                else if (movement == 2)
                {

                    if (trainingItems >= 1)
                    {

                        Train();

                        std::cout << "########Training Items######### \n";
                        std::cout << "Total Items: " << inventoryItems << '\n';

                        std::cout << "# 1." << PlayerItems[1] << "\n";
                        std::cout << "# 2." << PlayerItems[2] << "\n";
                        std::cout << "# 3." << PlayerItems[3] << "\n";
                        std::cout << "# 4." << PlayerItems[4] << "\n";
                        std::cout << "# 5." << PlayerItems[5] << "\n";
                        std::cout << "# 6." << PlayerItems[6] << "\n";
                        std::cout << "# 7." << PlayerItems[7] << "\n";
                        std::cout << "# 8." << PlayerItems[8] << "\n";
                        std::cout << "# 9." << PlayerItems[9] << "\n";
                        std::cout << "#########Traing Items########## \n";

                        std::cout << "Type: ";
                        std::cin >> picktrainingItem;

                        if (picktrainingItem == 1)
                        {
                            std::cout << "Which warrior: " << _Pinestar.name << " " << _Yellofang.name << std::endl;
                            std::cout << "Type: ";
                            std::cin >> upgradeWarrior;

                            // checking if the user input equals one of the names in the array

                            if (upgradeWarrior == userCharacters[1])
                            {

                                std::cout << "Adding Xp \n";
                                _Pinestar.Xp = _Pinestar.Xp += xpGainer;

                                if (_Pinestar.Xp > 100)
                                {
                                    _Pinestar.level = _Pinestar.level += 1;
                                    std::cout << userCharacters[1] << " Is successfuly upgraded his current level is now " << _Pinestar.level << std::endl;
                                }
                                else if (_Pinestar.Xp < 100)
                                {
                                    std::cout << userCharacters[1] << "Xp is now " << _Pinestar.Xp << std::endl;
                                }
                            }
                            else if (upgradeWarrior == userCharacters[2])
                            {

                                if (_Yellofang.Xp > 100)
                                {
                                    _Yellofang.level = _Pinestar.level += 1;
                                    std::cout << userCharacters[1] << " Is successfuly upgraded is current level is now " << _Yellofang.level << std::endl;
                                }
                                else if (_Yellofang.Xp < 100)
                                {
                                    std::cout << userCharacters[1] << "Xp is now " << _Yellofang.Xp << std::endl;
                                }

                                std::cout << userCharacters[2] << std::endl;
                            }
                        }
                        else if (picktrainingItem == 2)
                        {
                            std::cout << "Which warrior: 1.Pinestar(" << _Pinestar.health << "), 2.Yellowfang(" << _Yellofang.health << ")" << std::endl;

                            std::cout << "Type: ";
                            std::cin >> healthReplenshisherOption;

                            if (healthReplenshisherOption == 1)
                            {

                                if (_Pinestar.health >= level1PinestarHealthPoint)
                                {
                                    std::cout << _Pinestar.name << " health is already to the max \n";
                                }
                                else
                                {
                                    _Pinestar.health = _Pinestar.health + healthReplenshisherPoints;
                                    std::cout << _Pinestar.name << " health is now replenshed\n";

                                    continue;
                                }
                            }
                            else if (healthReplenshisherOption == 2)
                            {
                                if (_Yellofang.health >= level1YellowfangHealthPoint)
                                {
                                    std::cout << _Yellofang.name << " health is already to the max \n";
                                }
                                else
                                {
                                    _Yellofang.health = _Yellofang.health + healthReplenshisherPoints;
                                    std::cout << _Yellofang.name << " health is now replenshed\n";

                                    sleep(2);
                                    continue;
                                }
                            }
                        }
                    }
                    else if (trainingItems != 1)
                    {
                        std::cout << "You do not have any training items \n";
                        continue;
                    }
                }
                else if (movement == 3)
                {

                    std::cout << "Number of Items: " << inventoryItems << std::endl;
                    std::cout << "Items: " << PlayerItems[1] << ", " << PlayerItems[2] << ", " << PlayerItems[3] << ", " << PlayerItems[4] << ", " << PlayerItems[5] << ", " << PlayerItems[6] << ", " << PlayerItems[7] << ", " << PlayerItems[8] << ", " << PlayerItems[9] << '\n';

                    std::cout << "Commands: Exit \n";
                    std::cout << "Type: ";
                    std::cin >> command;

                    if (command == "Exit")
                    {
                        continue;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if (movement == 4)
                {
                    std::cout << "Loading\n";

                    sleep(2);
                    system("clear");

                    try
                    {
                        std::cout << "Restarting don't type anything \n";
                        sleep(2);
                        system("clear");

                        system("g++ main.cpp -o main");
                        system("./main");
                    }
                    catch (int retrying)
                    {

                        std::cout << "Could not fix shuting down \n";
                        exit(1);
                    }
                }
            }
        }
        else if (option == 2)
        {
            exit(EXIT_SUCCESS);
        }
    }
};