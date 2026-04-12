#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(b<2*a){
        if(n%2==0){
            cout<<(n/2)*b<<endl;
        }
        else {
            cout<<((n-1)/2)*b+a<<endl;
        }
    }
    else cout<<n*a<<endl;
}
return 0;
}