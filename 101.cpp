#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int med(int a,int b,int c){
    vector <int> m={a,b,c};
    sort(m.begin(),m.end());
    return m[1];

}
int main()
{
noch
while(t--){
int a,b,c;
cin>>a>>b>>c;
cout<<med(a,b,c)<<endl;
}
return 0;
}