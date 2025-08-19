#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int n=str.length();
    for (int i=0;i<n;i++)
    {
        if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||
            str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
            {
                for (int j=i;j<n;j++)
                {
                    str[j]=str[j+1];
                }
                i--;
                n--;
            }
    }
    cout<<str<<endl;
    return 0;
}