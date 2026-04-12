#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
int ans=0;
int sum=0;
while(1){
    ans++;
    sum+=(ans*(ans+1))/2;
    if(sum>t){
        ans--;
        break;
    }
}
cout<<ans<<endl;
return 0;
}