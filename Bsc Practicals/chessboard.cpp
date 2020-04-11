#include <bits/stdc++.h>

using namespace std;

int waysToGiveACheck(char a[][8]) {
    // Complete this function
    for(int i=0;i<8;i++)
    {
        for(int j=0;i<8;j++)
        {
            if(a[i][j]=='P'||'p')
            {
                cout<<a[i][j];
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        char board[8][8];
        for(int board_i = 0;board_i < 8;board_i++){
           for(int board_j = 0;board_j < 8;board_j++){
              cin >> board[board_i][board_j];
           }
        }
        int result = waysToGiveACheck(board);
        cout << result << endl;
    }
    return 0;
}

