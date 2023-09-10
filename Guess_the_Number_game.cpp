#include <bits/stdc++.h>
using namespace std;
int main()
{
    int random_no, user_no, n_guess = 1;
    srand(time(0));
    random_no = rand() % 100 + 1;
    cout << "Guess a number between 1 to 100 " << endl;
    cout << "Let's see how many attempts required you to guess a number " << endl;
    cout << "Let's start the game : \n"
         << "Guess a number" << endl;
    while (true)
    {
        cin>>user_no;
        if (!cin)
        {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            if (user_no > random_no)
                cout << "Lower number please" << endl;
            else if (user_no < random_no)
                cout << "Higher number please" << endl;
            else
            {
                cout << "You used " << n_guess << " attempts to win the game!" << endl;
                break;
            }
            n_guess++;
        }
    }
    if (n_guess <= 3)
        cout << "Gold Medal: You are a mind reader! Excellent job!" << endl;
    else if (n_guess <= 5)
        cout << "Silver Medal: Great job! You're doing really well." << endl;
    else if (n_guess <= 10)
        cout << "Bronze Medal: Well done! You're doing pretty well." << endl;
    else
        cout << "Better luck next time! Keep practicing to improve." << endl;
    return 0;
}
