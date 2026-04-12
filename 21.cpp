#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    if(a[0][0]==1 || a[0][4]==1 || a[4][0]==1 || a[4][4]==1){
        cout<<4<<endl;
    }
    else if(a[1][2]==1 || a[2][1]==1 || a[2][3]==1 || a[3][2]==1){
        cout<<1<<endl;
    }
    else if(a[1][1]==1 || a[1][3]==1 || a[3][1]==1 || a[3][3]==1 || a[0][2]==1 || a[2][0]==1 || a[4][2]==1 || a[2][4]==1){
        cout<<2<<endl;
    }
    else if(a[2][2]==1) cout<<0<<endl;
    else cout<<3<<endl;
return 0;
}