// https://ac.nowcoder.com/acm/contest/98215/C
#include <iostream>
using namespace std;

int func(int x) {
    string s = to_string(x);
    int end = -1;
    if (atoi(s.substr(s.size() - 1, 1).c_str()) % 2 == 0) {
        return atoi(s.c_str());
    }
    for (int i = 0; i < s.size(); i++) {
        int c = atoi(s.substr(i, 1).c_str());
        if (c % 2 == 0) {
            end = i;
            break;
        }
        if (i == s.size() - 1) {
            if (end == -1) {
                return -1;
            }
        }
    }
    swap(s[end],s[s.size()-1]);
    return atoi(s.c_str());
}

int main()
{
    int q;
    cin >> q; // q行
    int x[q];
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < q; i++) {
        cout << func(x[i]) << endl;
    }

    return 0;
}