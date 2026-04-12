#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
int count=0;
while(n>4){
    count++;
    n-=4;
}
cout<<count+1<<endl;
}
return 0;
}