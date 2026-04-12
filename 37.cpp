#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
string t;
cin>>t;
bool ans=true;
if(s.size()!=t.size()){
    cout<<"NO"<<endl;
}
else{
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[t.size()-1-i]){
            ans=false;
            break;
        }
        else ans=true;
}
if(ans==true){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
return 0;
}