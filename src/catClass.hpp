#ifndef catClass_hpp
#define catClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class _Pinestar
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
    void print(_Pinestar)
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



#endif