#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
int t;
cin>>t;
string s;
cin>>s;
unordered_set<char> ap;
for(char c:s){
    if(isalpha(c)){
        ap.insert(tolower(c));
    }
}
if(ap.size()==26) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}