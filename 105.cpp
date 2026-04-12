#include<iostream>
#include<unordered_set>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
string a;
cin>>a;
int count=0;
unordered_set<char> s;
for(char i : a){
    if(s.count(i)){
        count++;
    }
    else{
        count+=2;
        s.insert(i);
    }
}
cout<<count<<endl;
}
return 0;
}