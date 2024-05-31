/*The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	Readjustment Rate
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%


Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"*/

#include <iostream>
using namespace std;
 
int main() {
 
    float sal,nsal,amt;
    int rate;
    cin>>sal;
    if(sal>=0 && sal<=400)
    {
        nsal=sal+(0.15*sal);
        amt=0.15*sal;
        rate=15;
    }
    else if(sal>400 && sal<=800)
    {
        nsal=sal+(0.12*sal);
        amt=0.12*sal;
        rate=12;
    }
    else if(sal>800 && sal<=1200)
    {
        nsal=sal+(0.1*sal);
        amt=0.1*sal;
        rate=10;
    }
    else if(sal>1200 && sal<=2000)
    {
        nsal=sal+(0.07*sal);
        amt=0.07*sal;
        rate=7;
    }
    else
    {
        nsal=sal+(0.04*sal);
        amt=0.04*sal;
        rate=4;
    }
    printf("Novo salario: %.2f\n",nsal);
    printf("Reajuste ganho: %.2f\n",amt);
    printf("Em percentual: %d %\n",rate);
 
    return 0;
}