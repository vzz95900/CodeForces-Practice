#include<iostream>
#include<vector>
using namespace std;
// int n;
// cin>>n;
// vector<int> s;
// for(int i=0;i<n;i++){
// int q;
// cin>>q;
// s.push_back(q);
//}
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
string s;
cin>>s;
string ans="";
ans+=s[0];
for(int i=1;i<s.size();i+=2){
        ans+=s[i];
}
cout<<ans<<endl;
}
return 0;
}