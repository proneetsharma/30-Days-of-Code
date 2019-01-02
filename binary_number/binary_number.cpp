#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, i=0, count=0, maxcount = 0;
    int binary[1000];
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
        binary[i] = n%2;
        n=n/2;
        i++;
    }
    for(int j=0; j<i; j++)
    {
        if(binary[j] == 1)
        {
            count++;
            if(count > maxcount)
                maxcount = count;
        }
        else{
            count = 0;
        }
    }
    cout << maxcount << endl;

    return 0;
}
