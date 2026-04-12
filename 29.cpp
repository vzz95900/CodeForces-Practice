#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int count=0;
while(1){
    if(a>b) break;
    else{
        a*=3;
        b*=2;
        count++;
    }
}
cout<<count<<endl;
return 0;
}