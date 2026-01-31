/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=8,b=9;
    cout << "Before swapping  a = " << a <<" , b =" << b <<endl;
    int temp;
    temp =a;
    a=b;
    b= temp;
    cout <<"After swaping a =" << a << ", b ="<< b <<endl;

    return 0;
}