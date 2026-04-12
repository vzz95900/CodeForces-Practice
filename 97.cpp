#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
int n,k;
cin>>n>>k;
int rem=240-k;
int hism=0;
int count=0;
for(int i=1;i<=n;i++){
    hism+=5*i;
    if(hism>rem){
        break;
    }
    count++;
}
cout<<count<<endl;
return 0;
}