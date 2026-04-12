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
vector <int> arr(t);
for(int i=0;i<t;i++){
cin>>arr[i];
}
sort(arr.begin(),arr.end());
int sum=0;
int la=arr[t-1];
for(int i=0;i<t-1;i++){
    sum+=(la-arr[i]);
}
cout<<sum<<endl;
return 0;
}