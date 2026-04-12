#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);

int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
int count=0;
int hst=a[0];
int lst=a[0];
for(int i=1;i<n;i++){
    if(a[i]>hst){
        count++;
        hst=a[i];
    }
    else if(a[i]<lst){
        count++;
        lst=a[i];
    }
}
cout<<count<<endl;
return 0;
}