#include <iostream>
#include <string>
using namespace std;
string str1="hello sky";
int main(){
    str1.resize(str1.size()+1,'a'); 
    string str2;
    getline(cin,str2,'$');
    cout << str2 << endl;
    cout<<str1<<endl;
    return 0;
}