#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    int sum[16];
    int h=0;
    for(int k=0; k<4; k++)
    {
        for(int l=0; l<4; l++)
        {
            sum[h] = arr[k][l] + arr[k][l+1] + arr[k][l+2]
                + arr[k+1][l+1] + arr[k+2][l] + arr[k+2][l+1]
                + arr[k+2][l+2];
            h++;
        }
    }
    sort(sum, sum+16);
    cout << sum[15] <<endl;
    
    return 0;
}
