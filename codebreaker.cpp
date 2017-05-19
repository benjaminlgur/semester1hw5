#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int iGuess, iSecret;
int code_breaker(int iGuess)
{
    if (iSecret < iGuess)
    {
        iGuess = iGuess * .5;
    }
    else if (iSecret > iGuess) 
    {
        iGuess = iGuess * 1.5;
    }
    return iGuess;
}
int main()
{
    const int MAX_VALUE = 100;
    iGuess = 50;
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

