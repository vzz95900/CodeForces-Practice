#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int a;
cin>>a;
string s=to_string(a);
if(s[2]=='0'){
    no
    continue;
}
int b=s.size();
if(b<=2){
    no
    continue;
}
int p=pow(10,b-2);
int c=a/p;
int d=a%p;
if(c==10 && d>1) yes
else no
}
return 0;
}