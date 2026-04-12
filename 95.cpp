#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
string a;
cin>>a;
int b=a.size();
if(b%2!=0){
    no
    continue;
}
bool c=true;
for(int i=0;i<b/2;i++){
if(a[i]!=a[i+b/2]){
    c=false;
    break;
}
}
if(c) yes
else no
}
return 0;
}