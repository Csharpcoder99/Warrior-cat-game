#ifndef catClass_hpp
#define catClass_hpp

#include <stdio.h>
#include <iostream>


class _Pinestar
{
public:
    int damage;
    int health;
    int specialmoveDamage;
    int level;
    int Xp;

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

class _Yellofang
{
public:
    int damage;
    int health;
    int specialmovehealingPoint;
    int level;
    int Xp;

    std::string specialmoveName;
    std::string name;

    friend class Spawning_2;
};

class Spawning_2
{
public:
    void print(_Yellofang)
    {
        std::cout << "I summon you Yellofang\n";
    }
};



#endif