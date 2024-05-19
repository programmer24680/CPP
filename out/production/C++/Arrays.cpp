#include <vector>
#include <iostream>

int main()
{   
    double x = 2.2;
    double y = 3.7;
    void* ptr = &y;
    using std::vector;
    vector <int> vec1;
    vector <int> vec2;
    vec1.push_back(10);
    vec1.push_back(20);
    std::cout << "The elements in vec1 are: \n" << vec1.at(0) << std::endl << vec1.at(1) << std::endl << "The number of elements in vec1 are: "<< vec1.size() << std::endl;
    vec2.push_back(100);
    vec2.push_back(200);
    std::cout << "The elements in vec2 are: \n" << vec2.at(0) << std::endl << vec2.at(1) << std::endl << "The number of elements in vec2 are: "<< vec2.size();
    vector <vector<int>> vec_2d;
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);
    std::cout << "The elements in vec2d are: \n" << vec_2d.at(0).at(0) << std::endl << vec_2d.at(0).at(1) << std::endl << vec_2d.at(1).at(0) << std::endl << vec_2d.at(1).at(1) << std::endl <<"The number of elements in vec2d are: "<< vec_2d.size();
    vec1.at(0) = 1000;
    std::cout << "The elements in vec1 are: \n" << vec1.at(0) << std::endl << vec1.at(1) << std::endl << "The number of elements in vec1 are: "<< vec1.size() << std::endl;
    std::cout << "The elements in vec2d are: \n" << vec_2d.at(0).at(0) << std::endl << vec_2d.at(0).at(1) << std::endl << vec_2d.at(1).at(0) << std::endl << vec_2d.at(1).at(1) << std::endl <<"The number of elements in vec2d are: "<< vec_2d.size() << std::endl;
    std::cout << (x + y == 5.9);
    return 0;
}
