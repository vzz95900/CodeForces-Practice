#include<iostream>
using namespace std;
#define noch int t;cin>>t;
int main()
{
noch
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int count=0;
if(a<b) count++;
if(a<c) count++;
if(a<d) count++;

cout<<count<<endl;
}
return 0;
}