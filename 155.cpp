#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
int abbol=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        abbol+=a[i];
    }
    else{
        abbol-=a[i];
    }
}
cout<<abbol<<endl;
}
return 0;
}