#pragma once
#include <iostream>
#include <cstring>

class MyStr
{
private:
    char* str;
public:
    MyStr();
    MyStr(const char *s);
    MyStr(const MyStr &src);
    ~MyStr();
    void display() const;
    int get_length() const;
    const char* get_str() const;
    MyStr &operator=(const MyStr &rhs);
    MyStr &operator=(MyStr &&src);
};
