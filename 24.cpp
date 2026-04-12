#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
string s;
getline(cin,s);
vector<char> v;
for(int i=0;i<s.size();i+=2){
    v.push_back(s[i]);
}
sort(v.begin(),v.end());
string ans(s.size(),'+');
for(int i=0;i<s.size();i+=2){
        ans[i]=v[i/2];
}
cout<<ans<<endl;
return 0;
}