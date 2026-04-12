#include<iostream>
#include<string>
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
string s,a="";
cin>>s;
a+=s[0];
char s1=s[0];
for(int i=1;i<n;i++){
    if(s1==s[i]){
        a+=s[i+1];
        s1=s[i+1];
        i++;
    }
}
a.pop_back();
cout<<a<<endl;
}
return 0;
}