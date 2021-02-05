#include "functions.h"
#include "pch.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <list>
using namespace std;

//Klasa Problem
class Problem
{
private:
    int id;
    string description;
    int result;
public:
    int calculate_result(int idx);
    string add_description(int idx);
};
class Description
{
private:
    list<string> descr_list;
public:
    void create_list(); /*--> do konstruktora*/
    string give_description(int id);
};

///////
class Solution {
    float solution;
public:
    float calculate_solution(int idx);
};

string Description::give_description(int idx)
{
    string desc;
    switch (idx)
    {
    case 1 :
        desc = "problem 1.";
    default:
        break;
    }
    return desc;
}

////////////////////////




/*
int Choose_Solution(int Solution_number)
{
    int sum = 0;
    int i = 999;

    for (; i >= 3; i--) {
        if (i % 5 == 0 || i % 3 == 0) {
            sum = sum + i;
        }

    }
    cout << "The sum of all the multiples of 3 or 5 below 1000 is " << sum << "\n";
    return sum; 
void Description(int Description_number)
{
    cout << "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.\n";
    cout << "Find the sum of all the multiples of 3 or 5 below 1000.\n";
}
int divided_by_five_and_two(int i) {
    int sum = 0;
    string s;
    for (; i <= 1; i--) {
        s = to_string(i);
        if (s.back() == 0 || s.back() == 5 || s.back() == 3)
        {
            sum = sum + i;
            cout << sum;
        }
        return i;
    };
}
float rectangle_surface_area(float a, float b) {
    float surface_area=a*b;
    cout <<fixed<<setprecision(2)<< "Pole prostok¹ta wynosi "<< surface_area << endl;
        return surface_area;
    }
void show_pi() {
    cout << "warotœæ PI: ";
    cout << fixed << setprecision(5) << M_PI << endl;
}
double sqrt_pi() {
    double result = 0;
    result = sqrt(M_PI);
    cout << fixed << setprecision(2) << result << endl;
    return result;
}*/