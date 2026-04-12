#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int r,a,c;
cin>>r>>a>>c;
if((r+a)==c){
    cout<<"+"<<endl;
}
else cout<<"-"<<endl;

}
return 0;
}