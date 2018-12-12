#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,s;
    string text;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> text;
        s = text.size();
        // cin.get();

        for(int j=0; j<s; j=j+2)
        {
                cout << text[j];
        }
        cout << " ";
        for(int k=1; k<s; k=k+2)
        {
                cout << text[k];
        }
        cout << endl;
    }
    return 0;
}
