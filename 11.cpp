#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of cricket team: ";
string T;
cin>>T;
cout<<"Enter the number of wins: ";
int w;
cin>>w;
cout<<"Enter the number of draws: ";
int d;
cin>>d;
cout<<"Enter the number of losses: ";
int l;
cin>>l;
int p;
p=w*3+d*1+l*0;
cout<<"Pakistan has obtained "<<p<<" points in the Asia Cup tournament.";
}
