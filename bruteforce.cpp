#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int iGuess, start;
int code_breaker(int iGuess)
{
    iGuess= iGuess +1;
    return iGuess;
}
int main()
{
    int iSecret;
    const int MAX_VALUE = 100;
    srand (time(NULL));
    iSecret = rand() % MAX_VALUE + 1;
    while (iSecret != iGuess)
    {
        cout << "Guess a number 1-100: ";
        iGuess = code_breaker (iGuess);
        cout << iGuess << endl;
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

