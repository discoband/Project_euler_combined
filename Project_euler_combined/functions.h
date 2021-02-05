#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <list>
using namespace std;
/*#########################################################
Functions which calculate solutions for dedicated problems
#########################################################*/

int Choose_Solution(int Solution_number);


/*#########################################################
Functions which calculate solutions for dedicated problems
#########################################################*/
float rectangle_surface_area(float a, float b);
class Description
{
private:
    list<string> descr_list;
public:
    void create_list(); /*--> do konstruktora*/
    string give_description();
    Description();
};
// w tym miejscu dodaj nag��wki, kt�re maj� by� wst�pnie kompilowane

#endif
