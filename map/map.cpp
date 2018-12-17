#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    map<string, int> info;
    map<string, int>:: iterator it;
    for(int i=0; i<n; i++)
    {
        int phoneNumber;
        string name;
        cin >> name >> phoneNumber;
        info.insert(pair<string, int>(name, phoneNumber));
    }
    string query;
    for(it = info.end(); it!= info.begin(); it--)
    {
        cin >> query;
        if(info.find(query) != info.end())
        {
            cout << it->first << "=" << it->second << endl; 
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}

