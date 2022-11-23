#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int,int>s;
    s.insert(1,9);
    cout << *s->first<<*s->second;
    return 0;
}
