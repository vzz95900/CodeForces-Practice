#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
string s;
cin>>s;
int up=0;
int lc=0;
for(char& ch:s){
    if(isupper(ch)){
        up++;
    }
    else lc++;
}

if(lc>=up){
    for(char& ch:s){
        ch=tolower(ch);
    }
}
else {
    for(char& ch:s){
        ch=toupper(ch);
    }
}
cout<<s<<endl;
return 0;
}