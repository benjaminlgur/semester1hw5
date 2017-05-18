#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main()
{
    int iSecret, iGuess;
    const int MAX_VALUE = 100;
    srand (time(NULL));
    iSecret = rand() % MAX_VALUE + 1;
    while (iSecret != iGuess)
    {
        cout << "Guess a number 1-100: ";
        cin >> iGuess;
        if (iSecret < iGuess)
        {
        cout << "The number is lower" << endl;
        }
        else if (iSecret>iGuess)
        {
        cout << "The number is higher" << endl;
        }
        else if (iSecret == iGuess)
        {
        cout << "congats" << endl;
        return 0;
        }
    }
}
