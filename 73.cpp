#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool ans =true;
for(int i=1;i<n;i++){
    int as=abs(a[i]-a[i-1]);
    if(as==5 || as==7){
        ans=true;
    }
    else{
        ans=false;
        break;
    }
}
if(ans==true) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
return 0;
}