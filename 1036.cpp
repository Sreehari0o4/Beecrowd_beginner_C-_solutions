/*Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.*/

#include <iostream>
#include<cmath>
#include<iomanip> //for setprecision()
using namespace std;
 
int main() {
 
    double a,b,c;
    cin>>a>>b>>c;
    double d = b*b-(4*a*c);
    if(d<0 || a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        double r1 = (-b + sqrt(d))/(2*a);
        double r2 = (-b - sqrt(d))/(2*a);
        cout << "R1 = " <<fixed <<setprecision(5) <<r1<<endl;
        cout << "R2 = " <<fixed <<setprecision(5) <<r2<<endl;
    }
    
 
    return 0;
}