#pragma once
#include "euler.h"
#include "pch.h"
using namespace std;

void Choose_Solution(int Solution_number)
{
    int sum = 0;
    int i = 999;
    
    for (; i >= 3; i--) {
        if (i % 5 == 0 || i % 3 == 0) {
            sum = sum + i;
        }

    }
    cout << "The sum of all the multiples of 3 or 5 below 1000 is " << sum << "\n";
}
void Description(int Description_number)
{
    cout << "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.\n";
    cout << "Find the sum of all the multiples of 3 or 5 below 1000.\n";
}