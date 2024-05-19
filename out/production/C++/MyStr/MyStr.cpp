#include "MyStr.hpp"
#include <iostream>

MyStr::MyStr()
    :str {nullptr}
{
    str = new char[1];
    *str = '\0';
}

MyStr::MyStr(const char* s)
    :str {nullptr}
{
    if (s==nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

MyStr::MyStr(const MyStr &src)
{
    str = new char[src.get_length() + 1];
    *str = *(src.get_str());
}

const char* MyStr::get_str() const
{
    return str;
}

int MyStr::get_length() const
{
    return strlen(str);
}

MyStr::~MyStr()
{
    delete [] str;
}

void MyStr::display() const
{
    std::cout << get_str() << std::endl;
}

MyStr &MyStr::operator=(const MyStr &rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = new char[rhs.get_length()+1];
    strcpy(str, rhs.get_str());
}

MyStr &MyStr::operator=(MyStr &&src)
{
    if(this == &src)
    {
        delete [] src.str;
        return *this;
    }

    delete [] str;
    str = new char[src.get_length()+1];
    strcpy(str, src.str);
    delete [] src.str;
}
