#include<iostream>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='q'){
            s[i]='p';
        }
        else if(s[i]=='p'){
            s[i]='q';
        }
    }
    cout<<s<<endl;
}
return 0;
}