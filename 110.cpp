#include<iostream>
#include<vector>
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
if(n==1 && a[0]==0){
    cout<<1<<endl;
    continue;
}
int count=0;
int maxc=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        count++;
    }
    else{
        if(count>maxc){
            maxc=count;
        }
        count=0;
    }
}
if (count > maxc) {
    maxc = count;
}
cout<<maxc<<endl;
}
return 0;
}