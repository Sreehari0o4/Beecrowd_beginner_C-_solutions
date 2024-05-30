/*Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.*/

#include <iostream>
using namespace std;
 
int main() {
 
    int a,b,c,x,y,z;
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
    
    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
 
    return 0;
}