#include <iostream>
#include <map> 
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    map<int,string> m1;
    map<int,string>::iterator it;
    string a; a="w1 w2 w3 w4 w5";
    int count=0,len=0,nlen=0;
    for(int i=0;i<a.length();i++)
    {
        char ch=a[i];
        if(ch==' ')
        {
            count+=1;
            m1.emplace(count,a.substr(nlen,len));
            nlen+=(len+1);
            len=0;
        }
        else len+=1;
    }
    it=m1.end();
    cout<<"Length: "<<(*it).first+1<<endl; 
    return 0;
}