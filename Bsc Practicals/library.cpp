#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int t1,t2;
    t1=(y1-1)*366+(m1-1)*31+d1;
    t2=(y2-1)*366+(m2-1)*31+d2;
    int fine;
    if(t1<=t2)
    {
        fine=0;
    }
    else{
    
    if(y1-y2!=0)
    {
        fine=10000;
    }
    else
      if(m1-m2!=0)
      {
          fine=500*(m1-m2);
      }
    else
        if(d1-d2!=0)
        {
            fine=15*(d1-d2);
        }
    else
    {
        fine=0;
    }
    }
    return fine;
    // Complete this function
}

int main() {
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
    return 0;
}

