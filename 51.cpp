#include<iostream>
#include<vector>
using namespace std;
int main()
{
double t;
cin>>t;
vector<double> v(t);
for(int i=0;i<t;i++){
    cin>>v[i];
}
double sum=0;
for(int i=0;i<t;i++){
    sum+=v[i];
}
cout<<sum/t<<endl;
return 0;
}