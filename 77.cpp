#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
int main()
{
int a,b,c;
cin>>a>>b>>c;
vector <int> boom;
boom.push_back(a);
boom.push_back(b);
boom.push_back(c);
sort(boom.begin(),boom.end());
int kyu =(boom[2]-boom[1])+(boom[1]-boom[0]);
cout<<kyu<<endl;
return 0;
}