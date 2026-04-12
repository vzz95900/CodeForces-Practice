#include<iostream>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
int n,m;
cin>>n>>m;
int count=0;
for(int a=0;a<=(max(n,m))/2+1;a++){
    for(int b=0;b<=(max(n,m))/2+1;b++){
        if((a*a +b)==n && (a+b*b)==m){
            count++;
        }
    }
}
cout<<count<<endl;
return 0;
}