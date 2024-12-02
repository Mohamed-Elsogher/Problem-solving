#include <iostream>
#include <string>
using namespace std;

bool isLucky(int num) {
    string str = to_string(num);
    for (char c : str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    int luckyCount = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    if (isLucky(luckyCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
