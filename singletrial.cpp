	/* rand example: guess the number */
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main (){
  int i, coin_flip, num_tails, num_heads, max_tails, max_heads;
  const int TAILS = 0;
  const int HEADS = 1;
  /* initialize random seed: */
  srand (time(NULL));
  /* generate 100 coin flips */
  num_tails = num_heads = max_tails = max_heads = 0;
  for(i=0; i<100; i++){
    coin_flip = rand() % 2;
    if(coin_flip==0){//TAILS
      num_heads = 0;
      num_tails++;
      if(num_tails>max_tails){
        max_tails = num_tails;
      }
      cout << "T ";
    } else {//HEADS
      num_tails = 0;
      num_heads++;
      if(num_heads>max_heads){
        max_heads = num_heads;
      }
      cout << "H ";
    }
  }
  cout << "\nThe longest unbroken streak of heads is: " << max_heads << endl;
  cout << "\nThe longest unbroken streak of tails is: " << max_tails << endl;
  return 0;
}
