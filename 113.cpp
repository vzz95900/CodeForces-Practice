#include<iostream>
#include<vector>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int count=1;
int max=0;
for(int i=1;i<n;i++){
    if(a[i-1]<a[i]){
        count++;
    }
    else {
        if(count>max){
            max=count;
        }
        count=1;
    }
}
if(count>max){
    max=count;
}
cout<<max<<endl;
return 0;
}