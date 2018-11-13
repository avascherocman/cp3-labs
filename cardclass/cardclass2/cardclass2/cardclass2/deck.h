#pragma once
#ifndef deck_h
#define deck_h
#include "card.h"
#include <string>

class deck {
public:
  //constructors
  deck(); //default - fill 52 cards
  deck(int n); //fill - fill that number of cards randomly
          
  void shuffle();
  void print(int n);


private:
  //data
  card d[52];

};

deck::deck() {           //52 card fill
  int f = 0;
  while (f <52) {
     for (int j = 3; j < 7; j++) {
      for (int k = 1; k < 13; k++) {
        d[f].setSuit(j);
        d[f].setValue(k);
        f++;
      }
    }


}

deck::deck(int n) {    //random fill that number of cards
  RandGen r;
  int i = 0;
  while (i <n){
    int j = r.RandInt(3, 6);
    int k = r.RandInt(1, 12);
        d[i].setSuit(j);
        d[i].setValue(k);
        i++;
  }
}


void deck::shuffle() {
  
}

void deck::print(int n) {
  for (int p = 0; p < n; p++) {
    std::cout << d[p].toStr() << std::endl;
  }
}

#endif