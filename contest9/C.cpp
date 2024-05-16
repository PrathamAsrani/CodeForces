#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        set<int> clock, anticlock;

        if (b < a) {
            for (int tmp = a; tmp >= 1; tmp = (tmp == 1 ? 12 : tmp - 1)) {
                anticlock.insert(tmp);
                if (tmp == b)
                    break;
            }
            for (int tmp = a; tmp <= 12; tmp = (tmp == 12 ? 1 : tmp + 1)) {
                clock.insert(tmp);
                if (tmp == b)
                    break;
            }
        } else {
            for (int tmp = a; tmp <= 12; tmp = (tmp == 12 ? 1 : tmp + 1)) {
                clock.insert(tmp);
                if (tmp == b)
                    break;
            }
            for (int tmp = a; tmp >= 1; tmp = (tmp == 1 ? 12 : tmp - 1)) {
                anticlock.insert(tmp);
                if (tmp == b)
                    break;
            }
        }

        bool left = (clock.find(c) != clock.end() || clock.find(d) != clock.end());
        bool right = (anticlock.find(c) != anticlock.end() || anticlock.find(d) != anticlock.end());

        if (left && right) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
