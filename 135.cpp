#include<iostream>
#include<vector>
#include<algorithm>
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
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int size=a.size();
sort(a.begin(),a.end());
for(int i=1;i<n;i++){
    if(a[i-1]==a[i]){
        size--;
    }
}
cout<<size<<endl;
}
return 0;
}