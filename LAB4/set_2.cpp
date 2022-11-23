#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator i;
    int j,x,y,z=0;
    i=s.begin();
    cout<<"Enter the number of iterations : ";
    cin>>z;
    for(int k=0;k<z;k++)
    {
        cout<<"1. insert\n2. search \nChoice : ";
        cin>>x;
        if(x==1)
        {
            cout<<"Enter number: ";
            cin>>y;
            s.insert(y);
            cout<<"NUMBER INSERTED SUCCEFULLY"<<endl;
        }else{
            cout<<"Enter number to search : ";
            cin>>y;
            int c=0;
            for(i=s.begin();i!=s.end();i++)if(*i==y)c++;
            if(c!=0)cout<<"FOUND, NUMBER OF TIMES FOUND = "<<c<<endl;
            else cout<<"NOT FOUND"<<endl;
        }
    }
    return 0;
}