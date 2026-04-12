#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
string ans="";
int j=1;
while(1){
    if(j%2==0){
        ans+="I love ";
    }
    else {ans+="I hate ";}
    if(j!=t){
        ans+="that ";
    }
    else break;
    j++;
}
string f=ans+"it";
cout<<f<<endl;
return 0;
}