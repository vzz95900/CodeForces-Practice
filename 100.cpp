#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
char ch;
cin>>ch;
string d="codeforces";
bool ans=false;
for(int i=0;i<d.size();i++){
    if(ch==d[i]){
        ans=true;
        break;
    }
}
if(ans) yes
else no
}
return 0;
}