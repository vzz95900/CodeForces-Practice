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
char let;
cin>>let;
bool ans=false;
for(int i=0;i<s.size();i++){
    if(s[i]==let && i%2==0){
        ans=true;
        break;
    }
}
if(ans) yes
else no
}
return 0;
}