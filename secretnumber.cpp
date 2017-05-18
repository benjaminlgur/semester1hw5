/* rand example: guess the number */
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main ()
{
  int iSecret, iGuess;
  const int MAX_VALUE = 100;
  /* initialize random seed: */
  srand (time(NULL));
  /* generate secret number */
  iSecret = rand() % MAX_VALUE + 1;
  do {
    cout << "Guess the number (1 to " << MAX_VALUE << "): ";
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) puts ("The secret number is lower");
    else if (iSecret>iGuess) puts ("The secret number is higher");
  } while (iSecret!=iGuess);
  puts ("Congratulations!");
  return 0;
}
