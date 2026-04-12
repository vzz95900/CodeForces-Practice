#include<iostream>
#include<vector>
using namespace std;
// int n;
// cin>>n;
// vector<int> a;
// for(int i=0;i<n;i++){
// int q;
// cin>>q;
// a.push_back(q);
//}
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
string s;
cin>>s;
string ans="";
int i=0;
while(i<s.length()){
    if(s[i]=='.'){
        ans+='0';
        i++;
    }
    else if(s[i]=='-'){
        if(s[i+1]=='.'){
            ans+='1';
            i+=2;
        }
        else if(s[i+1]=='-'){
            ans+='2';
            i+=2;
        }
    }

}
cout<<ans<<endl;
return 0;
}