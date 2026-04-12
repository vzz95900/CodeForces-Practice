#include<iostream>
#include<algorithm>
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

int b=1;
int m=0;

for(int y=1;y<n;y++){
    int cgcd=__gcd(n,y);
    int cv=cgcd+y;
    if(cv>m){
        m=cv;
        b=y;
    }
}
cout<<b<<endl;
}
return 0;
}