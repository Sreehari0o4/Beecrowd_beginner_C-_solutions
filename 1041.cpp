/*Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).



If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".*/

#include <iostream>
using namespace std;
 
int main() {
 
    float x,y;
    cin>>x>>y;
    if(x==0 && y==0)
    cout<<"Origem"<<endl;
    else if(x == 0)
    cout<<"Eixo Y"<<endl;
    else if(y == 0)
    cout<<"Eixo X"<<endl;
    else if(x>0 && y>0)
    cout<<"Q1"<<endl;
    else if(x<0 && y>0)
    cout<<"Q2"<<endl;
    else if(x>0 && y<0)
    cout<<"Q4"<<endl;
    else
    cout<<"Q3"<<endl;
 
    return 0;
}