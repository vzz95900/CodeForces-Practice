#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> a(n),b(n);
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
int count=0;
for(int i=0;i<n;i++){
    if((b[i]-a[i])>=2){
        count++;
    }
}
cout<<count<<endl;
return 0;
}