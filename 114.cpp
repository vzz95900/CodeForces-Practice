#include<iostream>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
string a;
cin>>a;
sort(a.begin(),a.end());
string s1="abcdefghijklmnopqrstuvwxyz";
int ans=0;
for(int i=0;i<26;i++){
    if(a[n-1]==s1[i]){
        ans=i+1;
        break;
    }
}
cout<<ans<<endl;
}
return 0;
}