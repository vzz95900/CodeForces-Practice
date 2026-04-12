#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
int n;
cin>>n;
int count=0;
while(n>0){
    if(n>=100){
        count++;
        n-=100;
    }
    else if(n>=20){
        count++;
        n-=20;
    }
    else if(n>=10){
        count++;
        n-=10;
    }else if(n>=5){
        count++;
        n-=5;
    }
    else if(n>=1){
        count++;
        n-=1;
    }
}
cout<<count<<endl;
return 0;
}