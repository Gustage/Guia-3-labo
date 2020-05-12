#include <iostream>
#include <math.h>

using namespace std;
float x1, x2;
int a, b, c;

int main (){
    a=5; b=2; c=3;
    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout>>"x1="<<x1<<"\nx2 ="<<x2;
}