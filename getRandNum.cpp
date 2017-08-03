#include "getRandNum.h"

void getRandSeed(){
  srand(time(0)); //generate a random seed for rand()
}

int getRandNum(){
  return rand();
}
