#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int n=str.length();
    int st=0,end=n-1;
    while (st<end)
    {
        swap(str[st++],str[end--]);
    }
    cout<<str<<endl;
    return 0;
}