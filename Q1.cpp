#include<iostream>
using namespace std;
int main()
{
    string str1,str2,str3;
    cout<<"Enter string 1 : ";
    getline(cin,str1);
    cout<<"Enter string 2 : ";
    getline(cin,str2);
    str3=str1+str2;
    cout<<str3<<endl;
    return 0;
}