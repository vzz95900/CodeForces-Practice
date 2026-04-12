#include<iostream>
#include<set>
using namespace std;
int main()
{
int s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
set<int> kyabatau = {s1,s2,s3,s4};
int kyubatau=4-kyabatau.size();
cout<<kyubatau<<endl;
return 0;
}