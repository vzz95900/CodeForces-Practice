#include<iostream>
using namespace std;
int main()
{
int y;
cin>>y;
y++;
while(1){
    int a=y%10;
    int b=(y/10)%10;
    int c=(y/100)%10;
    int d=(y/1000)%10;
    if(a==b || b==c || c==d || d==a || b==d || c==a){
        y++;
    }
    else{
        break;
    }
}
cout<<y<<endl;
return 0;
}