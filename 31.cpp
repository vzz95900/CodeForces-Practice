#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
int count=0;
if(x==5 || x<5){
    cout<<1<<endl;
}
else{
while(x>=5){
    count++;
    x-=5;
}
if(x>0 && x<5){
    count=count+1;
}
cout<<count<<endl;
}
return 0;
}