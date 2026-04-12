#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector<int> an;
for(int i=0;i<n;i++){
    int el;
    cin>>el;
    an.push_back(el);
}
int count =0;
for(int i : an){ 
    if(i>=an[k-1] && i>0){
        count++;
    }
}
cout<<count<<endl;
return 0;
}