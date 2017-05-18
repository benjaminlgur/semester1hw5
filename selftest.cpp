#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main()
{
    int a, i;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        a = rand() % 2;
        cout << a << endl;
    }
}
