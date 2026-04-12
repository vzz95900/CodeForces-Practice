#include<iostream>
#include<vector>
#include<set>
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
ios::sync_with_stdio(false);
cin.tie(0);
string a;
set<char> lev;
getline(cin,a);
a=a.substr(1,a.length()-2);

for(char i:a){
    if(islower(i)){
        lev.insert(i);
    }
}
cout<<lev.size()<<endl;
return 0;
}