#include <iostream>
#include <string>

using namespace std;

bool isLucky(char c) {
    return c == '4' || c == '7';
}

int main() {
    long long n;
    cin >> n;

    string numStr = to_string(n);
    int luckyCount = 0;
    for (char c : numStr) {
        if (isLucky(c)) {
            luckyCount++;
        }
    }

    // Check if the count of lucky digits is a lucky number
    bool nearlyLucky = true;
    string luckyCountStr = to_string(luckyCount);
    for (char c : luckyCountStr) {
        if (c != '4' && c != '7') {
            nearlyLucky = false;
            break;
        }
    }

    if (nearlyLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}