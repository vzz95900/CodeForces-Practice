#include<iostream>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
int count =0;
while(1){
    if(n%10==7 || n%10==4){
        count++;
        n/=10;
        if(n==0) break;
    }
    else{ 
        n/=10;
        if(n==0) break;
    }
}
if(count==4 || count==7){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
return 0;
}