#include <bits/stdc++.h>

int main()
{
    int random_num;
    int user_guess;
    int counter;

    using std::cin;
    using std::cout;

    random_num = (rand() % 10) + 1;
    cout << "You have five chances to play this game.\n";
    counter = 0;
    do
    {
        cout << "Enter your guess between 1 and 10: ";
        cin >> user_guess;
        if (user_guess == random_num)
        {
            cout << "You win!\n";
        }
        else
        {
            cout << "You lose\n";
            counter++;
        }
    }while(user_guess != random_num and counter < 5);

    return 0;
}
