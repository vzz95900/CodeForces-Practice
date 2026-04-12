#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else{
        int c;
        c=(a+b)/2;
        cout<<(c-a)+(b-c)<<endl;
    }
}
return 0;
}