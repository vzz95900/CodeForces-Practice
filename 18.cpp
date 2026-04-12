#include<iostream>
using namespace std;
#define ll long long
#define in(n) ll n; cin>>n
int main()
{
in(n);
int x=0;
while(n--){
    string s;
    cin>>s;
    if(s=="++X" || s=="X++") x=x+1;
    if(s=="--X" || s=="X--") x=x-1;
}
cout<<x<<endl;
return 0;
}