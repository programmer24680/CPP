#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;


std::string encrypt(std::string);
std::string decrypt(std::string);


int main()
{
    string message;
    int selection;
    cout << "Enter the secret message: ";
    std::getline(cin >> std::ws, message);
    cout << "What do you want to do? \n";
    cout << "1. Encrypt\n";
    cout << "2. Decrypt\n";
    cout << "Enter your selection: ";
    cin >> selection;
    if(selection==1)
    {
        cout << encrypt(message);
    }
    else if(selection==2)
    {
        //decrypt(message);
    }
    else
    {
        cout << "Please select either 1 or 2 only.";
    }
    return 0;
}


std::string encrypt(std::string msg)
{
    std::string encrypted_msg {""};
    int old_char_num;
    int new_char_num;
    int char_num;
    char new_char;
    for (int i = 0; i<msg.length(); i++)
    {
        char_num = ((int)msg.at(i)) + 5;
        old_char_num = char_num - 5;
        if(65<=old_char_num<=90 && 65<=char_num<=90)
        {
            new_char = (char) char_num;
        }
        else if (65<=old_char_num<=90 && char_num>90)
        {
            new_char_num = 90 - char_num + 64;
            new_char = (char) new_char_num;
        }
        encrypted_msg += new_char;
    }
    return encrypted_msg;
}