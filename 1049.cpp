/*In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.



Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

*/


#include <iostream>
using namespace std;
 
int main() {
 
    string s1,s2,s3,ans;
    cin>>s1>>s2>>s3;
    if(s1=="vertebrado")
    {
        if(s2=="ave")
        {
            if(s3=="carnivoro")
            {
                ans="aguia";
            }
            else
            {
                ans="pomba";
            }
        }
        else
        {
            if(s3=="onivoro")
            {
                ans="homem";
            }
            else
            {
                ans="vaca";
            }
        }
    }
    else
    {
        if(s2=="inseto")
        {
            if(s3=="hematofago")
            {
                ans="pulga";
            }
            else
            {
                ans="lagarta";
            }
        }
        else
        {
            if(s3=="hematofago")
            {
                ans="sanguessuga";
            }
            else
            {
                ans="minhoca";
            }
        }
    }
    
    cout<<ans<<endl;
 
    return 0;
}