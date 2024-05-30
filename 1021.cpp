/*Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.*/



#include <iostream>
using namespace std;
 
int main() {
 
    float a;
    cin>>a;
    int amt = int(a);
    int dec = int((a*100))%100;
    int hun,fif,twn,ten,fiv,two,cone,cfif,ctfi,cten,cfiv,cpo;
    hun = amt/100;
    amt = amt - hun*100;
    fif = amt/50;
    amt = amt - fif*50;
    twn = amt/20;
    amt = amt - twn*20;
    ten = amt/10;
    amt = amt - ten*10;
    fiv = amt/5;
    amt = amt - fiv*5;
    two = amt/2;
    amt = amt - two*2;
    cone = amt;
    
    cfif = dec/50;
    dec = dec - cfif*50;
    ctfi = dec/25;
    dec = dec - ctfi*25;
    cten = dec/10;
    dec = dec - cten*10;
    cfiv = dec/5;
    dec = dec - cfiv*5;
    cpo = dec;
    
    cout<<"NOTAS:"<<endl;
    cout<<hun<<" nota(s) de R$ 100.00"<<endl;
    cout<<fif<<" nota(s) de R$ 50.00"<<endl;
    cout<<twn<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<fiv<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<cone<<" moeda(s) de R$ 1.00"<<endl;
    cout<<cfif<<" moeda(s) de R$ 0.50"<<endl;
    cout<<ctfi<<" moeda(s) de R$ 0.25"<<endl;
    cout<<cten<<" moeda(s) de R$ 0.10"<<endl;
    cout<<cfiv<<" moeda(s) de R$ 0.05"<<endl;
    cout<<cpo<<" moeda(s) de R$ 0.01"<<endl;
 
    return 0;
}