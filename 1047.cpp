/*Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.*/


#include <iostream>
using namespace std;
 
int main() {
 
    int sh,sm,eh,em;
    cin>>sh>>sm>>eh>>em;
    if(sh == eh)
    {
        if(sm==em)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        else if(sm>em)
        {
            cout<<"O JOGO DUROU 23 HORA(S) E "<<60-(sm-em)<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU 0 HORA(S) E "<<em-sm<<" MINUTO(S)"<<endl;
        }
    }
    else if(sh<eh)
    {
        if(sm==em)
        {
        cout<<"O JOGO DUROU "<<eh-sh<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else if(sm>em)
        {
            cout<<"O JOGO DUROU "<<eh-sh-1<<" HORA(S) E "<<60-(sm-em)<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<eh-sh<<" HORA(S) E "<<em-sm<<" MINUTO(S)"<<endl;
        }
    }
    else
    {
        if(sm==em)
        {
        cout<<"O JOGO DUROU "<<(24-sh)+eh<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else if(sm>em)
        {
            cout<<"O JOGO DUROU "<<(24-sh)+eh-1<<" HORA(S) E "<<60-(sm-em)<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<(24-sh)+eh<<" HORA(S) E "<<em-sm<<" MINUTO(S)"<<endl;
        }
    }
    
    
    return 0;
}