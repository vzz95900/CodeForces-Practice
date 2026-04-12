#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int count=1;
for(int i=1;i<n;i++){
    if(a[i]!=a[i-1]){
        count++;
    }
}
if (n==0) cout<<0<<endl;
else cout<<count<<endl;
return 0;
}