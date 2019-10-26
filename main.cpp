//
//  main.cpp
//  fibonacci
//
//  Created by Isabelle on 10/27/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//

#include <iostream>

using namespace std;

int fib(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
  int n;
  std::cout << "Enter an integer: ";
  std::cin >> n;
  std::cout << fib(n) << endl;
  return EXIT_SUCCESS;
}
