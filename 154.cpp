#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
if(n>=1900){
    cout<<"Division 1"<<endl;
}
else if(n>=1600){
    cout<<"Division 2"<<endl;
}
else if(n>=1400){
    cout<<"Division 3"<<endl;
}
else{
    cout<<"Division 4"<<endl;
}
}
return 0;
}