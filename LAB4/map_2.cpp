#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<string, int> &a, const pair<string, int> &b){ 
    return (a.second < b.second); 
} 
int main(){
    map<string,int> m1;
    map<string,int>::iterator i;
    map<string,int>::reverse_iterator j;
    m1.emplace("Aadithyan",21301);
    m1.emplace("Abhijith",21302);
    m1.emplace("Anaswara",21310);
    m1.emplace("Anand",21309);
    m1.emplace("Abhishek",21303);
    m1.emplace("Rahul",21346);
    cout<<"NAME ASCENDING"<<endl;
    for(i=m1.begin();i!=m1.end();i++)cout<<(*i).first<<" : "<<(*i).second<<endl;
    cout<<"NAME DESCENDING"<<endl;
    for(j=m1.rbegin();j!=m1.rend();j++)cout<<(*j).first<<" : "<<(*j).second<<endl;
    cout<<"ROLL NO ASCENDING"<<endl;
    vector<pair<string,int>>v1(m1.begin(),m1.end());
    sort(v1.begin(),v1.end(),cmp);
    for (int l = 0; l < v1.size(); l++)cout << v1[l].first << ": " << v1[l].second << endl;
    cout<<"ROLL NO DESCENDING"<<endl;
    for(int m=v1.size()-1;m>=0;m--)cout << v1[m].first << ": " << v1[m].second << endl;
    return 0;
}
