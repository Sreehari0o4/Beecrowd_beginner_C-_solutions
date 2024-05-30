#include <iostream>
using namespace std;
 
int main() {
 
    float A,B,C;
    cin>>A>>B>>C;
    if(A+B>C && A+C>B && C+B>A)
    {
        float peri = A+B+C;
        printf("Perimetro = %.1f\n",peri);
    }
    else
    {
        float area = (A+B)*C*0.5;
        printf("Area = %.1f\n",area);
    }
    
 
    return 0;
}