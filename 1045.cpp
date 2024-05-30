/*Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES*/


#include <iostream>
using namespace std;
 
int main() {
 
    double a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
    z=a;
    if(b>c)
    {
        y=b;
        x=c;
    }
    else
    {
        y=c;
        x=b;
    }
    }
    else if(b>a&&b>c)
    {
    z=b;
    if(a>c)
    {
        y=a;
        x=c;
    }
    else
    {
        y=c;
        x=a;
    }
    }
    else
    {
        z=c;
        if(a>b)
        {
            y=a;
            x=b;
        }
        else
        {
            x=a;
            y=b;
        }
    }
    a=z;
    b=y;
    c=x;
    if(a >= b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
    if(a*a == b*b + c*c)
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if(a*a > (b*b + c*c))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    } 
    if(a==b && a==c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }
 
    return 0;
}