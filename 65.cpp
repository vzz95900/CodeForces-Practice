#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int s;
cin>>s;
string n;
cin>>n;
if(n.size()!=5){
    cout<<"NO"<<endl;
    continue;
}
unordered_map<char,int> exp={
    {'T',1},
    {'i',1},
    {'m',1},
    {'u',1},
    {'r',1}
};
unordered_map<char,int> act;
for(char ch:n){
    act[ch]++;
}
if(act==exp){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
return 0;
}