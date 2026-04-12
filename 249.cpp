#include<bits/stdc++.h>
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
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
noch
cin.ignore();
while(t--){
string s;
getline(cin,s);
string a="";
a+=s[0];
for(int i=1;i<s.length();i++){
    if(s[i]==' '){
        a+=s[i+1];
    }
}
cout<<a<<endl;
}
return 0;
}