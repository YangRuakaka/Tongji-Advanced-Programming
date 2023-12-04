#include<iostream>
using namespace std;

extern int j, k ;
void display()
{
    j++, k++;
     cout << j << "     " << k << endl;
}