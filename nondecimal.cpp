//
//  nondecimal.cpp
//  nondecimal
//
//  Created by Eira Isabel Cuarter on 10/27/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Laboratory Exercise 008 Week 009
//

#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  int x[3][3], i;

  for(i = 0; i < 3; i++)
  {
    std::cout << "\n" << "Set " << i + 1 << "\n" << endl;
    while (x[i][0] == 0) {
      std::cout << "\n" << "Enter the dividend for set " << i + 1 << ": " << "\t";
      std::cin >> x[i][0];
    }

    while (x[i][1] == 0) {
      std::cout << "\n" << "Enter the divisor for set  " << i + 1 << ": " << "\t";
      std::cin >> x[i][1];
    }
       std::cout << "\n";
  }

    std::cout << "--------------------------------------------------------------";

  for(i = 0; i < 3; i++)
  {
      std::cout << "\n" "\n" "\n" << "Answer for set " << i + 1 << " (" << x[i][0] << "/" << x[i][1] << ") is  : " << "\t" << divide(x[i][0], x[i][1]) << endl;
  }
  return EXIT_SUCCESS;
}
