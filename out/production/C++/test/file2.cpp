#include <iostream>

class Player
{
    private:
        std::string name;
        int health;
        int stamina;
    public:
        Player(std::string, int, int);
        std::string get_name();
        int get_age();
        int get_stamina();
        ~Player();
        Player(const Player &source);
};

Player::Player(std::string s = "Mr.A", int a = 100, int b = 100)
    : name {s}, health {a}, stamina {b}
{
    std::cout << "Constructor with std::string, int and int is called for " << name<< std::endl;
}

Player::Player(const Player &source)
    : name {source.name}, health {source.health}, stamina {source.stamina}
{
    std::cout << "Copy constructor has been called\n";
}

Player::~Player()
{
    std::cout << "Destructor called for " << name << std::endl;
}

int main()
{
    Player p;
    Player q("soms");
    Player r("bobs", 9);
    Player s("lols", 9, 18);
    Player m = s;
    return 0;
}

