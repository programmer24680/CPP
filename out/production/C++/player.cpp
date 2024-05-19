#include <iostream>
#include <string>
int get_active_players();

using str = std::string;
class Player
{
private:
    str name;
    int health;
    int stamina;
    static int count;
public:
    void set_name(str);
    str get_name();
    void set_health(int);
    int get_health();
    void set_stamina(int);
    int get_stamina();
    static int get_active_players();
    Player(str, int, int);
    Player(const Player &obj);
    ~Player();
};
int Player::count = 0;
void Player::set_name(str name)
{
    this->name = name;
    return ;
}

void Player::set_health(int health)
{
    this->health = health;
}

void Player::set_stamina(int stamina)
{
    this->stamina = stamina;
}

str Player::get_name()
{
    return name;
}

int Player::get_health()
{
    return health;
}

int Player::get_stamina()
{
    return stamina;
}

Player::Player(str name = "A", int health = 100, int stamina = 100)
{
    this->name = name;
    this->health = health;
    this->stamina  = stamina;
    count++;
}

Player::Player(const Player &obj)
    : Player(obj.name, obj.health, obj.stamina)
{}

Player::~Player()
{
    count--;
}

int Player::get_active_players()
{
    return count;
}

int main()
{
    std::cout << Player::get_active_players() << std::endl;
    Player p("a");
    std::cout << Player::get_active_players() << std::endl;
    p.~Player();
    std::cout << Player::get_active_players() << std::endl;

    return 0;
}
