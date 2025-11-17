//
// Created by awalol on 2025/11/7.
// https://ac.nowcoder.com/acm/contest/98215/E
//

#include <iostream>

using namespace std;

struct coord {
    int x;
    int y;
};

int main() {
    //        |
    //    B   |   A
    //        |
    //------------------
    //        |
    //    C   |   D
    //        |

    int n,a = 0,b = 0,c = 0,d = 0,x,y,mark = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        cin >> y;
        if (x > 0) {
            if (y > 0) {
                a++;
            }else {
                d++;
            }
        }
        if (x < 0) {
            if (y > 0) {
                b++;
            }else {
                c++;
            }
        }
    }

    // 2 score
    int temp = 0;
    temp = min(a,c);
    a -= temp;
    c -= temp;
    mark += temp * 2;
    temp = min(b,d);
    b -= temp;
    d -= temp;
    mark += temp * 2;

    // 1 score
    temp = min(a,b);
    a -= temp;
    b -= temp;
    mark += temp;
    temp = min(a,d);
    a -= temp;
    d -= temp;
    mark += temp;
    temp = min(b,c);
    b -= temp;
    c -= temp;
    mark += temp;
    temp = min(c,d);
    c -= temp;
    d -= temp;
    mark += temp;

    cout << mark;

    return 0;
}
