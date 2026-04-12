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
string s;
cin>>s;
string as=s.substr(0,2);
string bs=s.substr(3,2);
string sf="";
int ai=stoi(as);
if(ai>=12){
    if(ai==12){
        sf="PM";
    }
    else{
        ai-=12;
        sf="PM";
    }
    if(ai>=10){
        cout<<ai<<":"<<bs<<" "<<sf<<endl;
    }
    else {
        cout<<0<<ai<<":"<<bs<<" "<<sf<<endl;
    }
}
else if(ai==00){
    ai=12;
    sf="AM";
    cout<<ai<<":"<<bs<<" "<<sf<<endl;
}
else{
    cout<<s<<" "<<"AM"<<endl;
}
}
return 0;
}