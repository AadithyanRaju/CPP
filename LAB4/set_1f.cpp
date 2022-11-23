#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator i;
    set<int>::iterator f;
    int j,x,y,z;
    i=s.begin();
    cout<<"Enter the number of iterations : ";cin>>z;
    for(int k=0;k<z;k++){
        cout<<"1. insert\n2. search \nChoice : ";
        cin>>x;
        if(x==1)
        {
            cout<<"Enter number: ";cin>>y;
            if(s.find(y)!=s.end())cout<<"NUMBER IS ALREADY IN THE SET"<<endl;
            else{
                s.insert(y);
                cout<<"INSERTED SUCCESULLY"<<endl;
            }
        }else{
            cout<<"Enter number to search : ";
            cin>>y;
            if(s.find(y)!=s.end())cout<<"FOUND"<<endl;
            else cout<<"NOT FOUND"<<endl;
        }
    }
    return 0;
}