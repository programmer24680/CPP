#include "MyStr.cpp"

int main()
{
    MyStr obj("Hello guys");
    obj.display();
    MyStr obj1;
    obj1 = obj;
    obj1.display();
    return 0;
}
