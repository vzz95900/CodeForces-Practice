#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int m,p,c;
cin>>m>>p>>c;
if(m<p && p<c){
    cout<<"STAIR"<<endl;
}
else if(m<p && p>c){
    cout<<"PEAK"<<endl;
}
else {
    cout<<"NONE"<<endl;
}
}
return 0;
}