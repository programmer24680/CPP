#include <iostream>
#include <test.h>
#include <vector>

int main()
{
    using std::vector;
    auto a {5};
    auto b {6};
    std::cout << std::min(a, b);
    vector <int> vec (5, 0);
    return 0;
}