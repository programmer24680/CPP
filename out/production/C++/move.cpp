#include <iostream>
#include <vector>
using std::vector;

class Move
{
    private:
        int* data;
    public:
        void set_data_value(int d);
        int get_data_value();
        Move(int d);
        Move(const Move &obj);
        Move(Move &&obj);
        ~Move();

};

void Move::set_data_value(int d)
{
    *data = d;
}

int Move::get_data_value()
{
    return *data;
}

Move::Move(int d)
{
    std::cout << "Initialization constructor called." << std::endl;
    this->data = new int;
    *data = d;
}

Move::~Move()
{
    std::cout << "Destructor called." << std::endl;
    delete data;
}

Move::Move(const Move &obj)
    : Move(*obj.data)
{
    std::cout << "Copy constructor called." << std::endl;
}

Move::Move(Move &&obj)
    : data {obj.data}
{
    std::cout << "Move constructor called.\n";
    obj.data = nullptr;
}

int main()
{
    Move* m1 = new Move(5);
    Move m2 = *m1;
    Move m3(6);
    std::cout << m1->get_data_value() << " " << m2.get_data_value() << " " << m3.get_data_value() << "\n";
    vector<Move> vec;
    vec.push_back(Move {15});
    vec.push_back(Move {20});
    return 0;
}


