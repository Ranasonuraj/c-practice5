#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
char xyz;
cout<<"Enter a Character:";
 cin>>xyz;
 if(xyz>='a' && xyz<='z' || xyz>='A' && xyz<='Z')
 {
    cout<<xyz<<" is an alphabet";
 }
 else
 {
     cout<<xyz<<" is not aplhabet";
 }
 return 0;
}
