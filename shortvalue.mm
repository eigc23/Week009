//
//  shortvalue.mm
//  shortvalue
//
//  Created by Eira Isabel Cuartero on 10/27/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Laboratory Exercise 008 Week 009

#include <iostream>
#include <string>

using namespace std;

string separateDigit(int digit) {
  return to_string(digit / 10 % 10) + " " + to_string(digit % 10);
}

int main() {
    int digit = 0;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (digit < 10 || digit > 99) {
      std::cout << "Please enter a short value from 10 to 99: ";
      std::cin >> digit;
    } else {
      break;
    }
  }

  std::cout << separateDigit(digit) << endl;
  return EXIT_SUCCESS;
}
