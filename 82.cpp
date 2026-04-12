#include<iostream>
using namespace std;
#define noch int t;cin>>t;
int main()
{
noch
while(t--){
string s;
cin>>s;
int a=s[0]-'0';
int b=s[2]-'0';
char sym=s[1];
char ch;
if(a>b){
    ch='>';
}
else if(a<b){
    ch='<';
}
else ch='=';

if(sym==ch){
    cout<<s<<endl;
}
else {
    s[1]=ch;
    cout<<s<<endl;
}
}
return 0;
}