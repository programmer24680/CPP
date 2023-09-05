#include <iostream>
#include "file1.hpp"
#include "file1.cpp"

int main()
{
    Player p;
    p.get_name();
    p.get_health();
    p.get_stamina();    
    p.set_name();
    return 0;
}