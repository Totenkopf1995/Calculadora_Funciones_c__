//
// Created by pepe on 6/27/23.
//
#include <iostream>
#include <iomanip>

using namespace std;


void suma(int a, int b) {
    int resultado = a + b;
    cout << setw(14) << right << "|[ " << a << " + " << b << " = " << resultado << " ]|" << endl;
}