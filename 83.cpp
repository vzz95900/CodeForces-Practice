#include<iostream>
using namespace std;
#define noch int t;cin>>t;
int main()
{
noch
while(t--){
string s;
cin>>s;
int sum1=0;
int sum2=0;
for(int i=0;i<6;i++){
    int p=s[i]-'0';
    if(i<3){
        sum1+=p;
    }
    else sum2+=p;
}
if(sum1==sum2) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}