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
int n,k;
cin>>n>>k;
string s;
cin>>s;
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='B'){
        count++;
        i+=k-1;
    }
}
cout<<count<<endl;
}
return 0;
}