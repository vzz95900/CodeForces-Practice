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
int ca=0,cb=0;
for(int i=0;i<5;i++){
    if(a[i]=='A') ca++;
    else cb++;
}
if(ca>cb) cout<<"A"<<endl;
else cout<<"B"<<endl;
}
return 0;
}