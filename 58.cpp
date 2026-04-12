#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
vector<int> vec(t);
for(int i=0;i<t;i++){
    cin>>vec[i];
}
int avl=0;
int count=0;
for(int i=0;i<t;i++){
    if(vec[i]==-1){
        if(avl>0){
            avl--;
        }
        else count++;
    }
    else {
        avl += vec[i];
    }
}
cout<<count<<endl;
return 0;
}