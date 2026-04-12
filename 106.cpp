#include<iostream>
#include<vector>
#include<algorithm>
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
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
a[0]++;
int pdt=1;
for(int i=0;i<n;i++){
    pdt*=a[i];
}
cout<<pdt<<endl;
}
return 0;
}