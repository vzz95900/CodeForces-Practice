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
vector<int> ans;
int crr=1;
while(n>0){
    int dig=n%10;
    if(dig>0){
        ans.push_back(dig*crr);
    }
    n/=10;
    crr*=10;
}
cout<<ans.size()<<endl;
for(int i:ans){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}