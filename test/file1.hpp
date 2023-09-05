#include <iostream>
#ifndef _FILE2_H_
#define _FILE2_H_
class Player
{
private:
    std::string name = "Mr.A";
    int health = 100;
    int stamina = 100;

public:
    void get_health();
    void get_stamina();
    void get_name();
    void set_name();
};
#endif