#include <map>
#include<sstream>
#include<iostream>
using namespace std;
void wordsCount(string str){
      int count = 1,z=0;
      std::map<string,int> wordsMap;
      istringstream wordStream(str);
      string word;
       while(wordStream >> word){
            pair<map<string,int>::iterator,bool> retrunValue;
            retrunValue = wordsMap.insert( pair<string,int>(word,count));
            if (retrunValue.second==false)++retrunValue.first->second;
       }
       map<string,int>::iterator itr ;
       for (itr = wordsMap.begin(); itr != wordsMap.end(); ++itr)z+=itr->second;
       cout<<z<<endl;
}
int main(){
    wordsCount("w1 w2 w3 w4 w5");    
    return 0;

}