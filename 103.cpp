#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int a,b;
cin>>a>>b;
int ans=0;
for(int i=1;i<=a*b;i++){
    if(i%a==0 && i%b==0){
        ans =i;
        break;
    }
}
cout<<ans<<endl;
}
return 0;
}