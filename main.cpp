//Kaylen Bolden          JNUMBER:J00965280          DATE:11/15/2022
//                       PG.284 Example 5-6
//                      DUE DATE: 11/16/2022
#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;

    while (!isGuessed)
    {
        cin >> guess;

        if (guess == num)
        {
            cout << "You guessed the correct number." << endl;
            isGuessed = true;
        }
        else if (guess < num)
            cout << "Your guess is lower than the number." << endl
                 << " Guess again!" << endl;
        else
            cout << "Your guess is higher than the number." << endl
                 << " Guess again!" << endl;
    }
    return 0;
}
