#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string ans;
cin>>ans;
string af="codeforces";
int an=0;
for(int i=0;i<ans.size();i++){
    if(ans[i]!=af[i]){
        an++;
    }
}
cout<<an<<endl;
}
return 0;
}