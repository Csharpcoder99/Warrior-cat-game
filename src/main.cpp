#include <iostream>

void Menu()
{

    for (int i = 0; i < 1; i++)
    {

        for (int j = 0; j < 1; j++){

            
        }
    }
}

int main()
{
    Menu();

    std::string userCharacters[7] = {
        "Pinestar",
        "Yellowfang",

    };

    class Pinestar
    {
    public:
        int damage;
        int health;
        int specialmoveDamage;
        int level;

        std::string specialmoveName;
        std::string name;

        friend class Spawning_1;
    };

    class Spawning_1
    {
    public:
        void print(Pinestar)
        {
            std::cout << "I summon you Pinestar\n";
        }
    };

    class Yellofang
    {
    public:
        int damage;
        int health;
        int specialmovehealingPoint;
        int level;

        std::string specialmoveName;
        std::string name;

        friend class Spawning_2;
    };

    class Spawning_2
    {
    public:
        void print(Yellofang)
        {
            std::cout << "I summon you Yellofang\n";
        }
    };

    Pinestar Pinestar;
    Pinestar.damage = 20;
    Pinestar.specialmoveName = "Star Scraping Attack";
    Pinestar.specialmoveDamage = 40;

    Pinestar.health = 45;
    Pinestar.name = userCharacters[1];
    Pinestar.level = 1;

    Yellofang Yellofang;
    Yellofang.damage = 55;
    Yellofang.health = 23; 
    Yellofang.specialmoveName = "Healer";

    Yellofang.specialmovehealingPoint = 35;
    Yellofang.name = userCharacters[2];
    Yellofang.level = 1;

};