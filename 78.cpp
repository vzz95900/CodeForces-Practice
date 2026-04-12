#include<iostream>
using namespace std;
#define noch int t;cin>>t;
int main()
{
noch
while(t--){
int a,b,c;
cin>>a>>b>>c;
if((a+b)==c || (c+b)==a || (a+c)==b){
    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}
}
return 0;
}