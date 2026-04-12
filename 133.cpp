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
string s;
cin>>s;
bool ila=false;
for(int i=1;i<=s.size()-1;i++){
    if(s[i-1]!=s[i]){
        ila=true;
        swap(s[i-1],s[i]);
        break;
    }
}
if(ila){
    yes
    cout<<s<<endl;
}
else no
}
return 0;
}