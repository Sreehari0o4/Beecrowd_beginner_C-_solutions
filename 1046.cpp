/*Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”*/


#include <iostream>
using namespace std;
 
int main() {
 
    int start,end;
    cin>>start>>end;
    if(start == end)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(start<end)
    {
        cout<<"O JOGO DUROU "<<end-start<<" HORA(S)"<<endl;
    }
    else
    {
        cout<<"O JOGO DUROU "<<(24-start)+end<<" HORA(S)"<<endl;
    }
 
    return 0;
}