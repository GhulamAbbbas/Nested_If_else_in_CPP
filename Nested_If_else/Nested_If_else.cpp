// Nested_If_else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "a,b,c";
    cin >> a >> b >> c;



    if (a == b && b == c) 
        cout << " EQUILITRAL Triangel:";
    else 
    { 
        if (a != b && a != c && b != c)
            cout << " Scalence Triangel:";
        else
            cout << " Isosceles Triangel:";
    }

    system("pause >0");


}

