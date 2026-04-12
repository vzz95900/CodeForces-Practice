#include<iostream>
#include <string>
using namespace std;
string toLower(const string& str) {
    string lowerStr;
    for (char ch : str) {
        lowerStr += tolower(ch); // Convert each character to lowercase
    }
    return lowerStr;
}
int main()
{
string a,b;
getline(cin,a);
getline(cin,b);
string s=toLower(a);
string s2=toLower(b);
if(s<s2) cout<<-1<<endl;
else if(s>s2) cout<<1<<endl;
else cout<<0<<endl;

return 0;
}