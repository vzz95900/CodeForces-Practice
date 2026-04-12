#include<iostream>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int oprs(string x,string s){
    int prns=0;
    string now=x;
    while(now.size()<=50){
        if(now.find(s)!=string::npos){
            return prns;
        }
        now+=now;
        prns++;
    }
    return -1;
}

int main()
{
noch
while(t--){
int n,m;
cin>>n>>m;
string x,s;
cin>>x>>s;
cout<<oprs(x,s)<<endl;
}
return 0;
}