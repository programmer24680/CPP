#include <iostream>
#include "file1.hpp"

void Player::get_health()
{
    std::cout << health << std::endl;
}

void Player::get_stamina()
{
    std::cout << stamina << std::endl;
}

void Player::get_name()
{
    std::cout << name << std::endl;
}

void Player::set_name()
{
    std::getline(std::cin >> std::ws, name);
    std::cout << "Name set to " << name << std::endl;
}

