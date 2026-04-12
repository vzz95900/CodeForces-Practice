#include<iostream>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n,a,b,c;
cin>>n>>a>>b>>c;
int sm=a+b+c;
int day=0;
if(n%sm==0){
    day+=(n/sm)*3;
}
else{
    day+=(n/sm)*3;
    int rem=n%sm;
    if(rem>(a+b)){
        day+=3;
    }
    else if(rem>a) {
        day+=2;
    }
    else day++;
}
cout<<day<<endl;
}
return 0;
}
