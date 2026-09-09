#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    getline(cin, text);

    int result = 0;
    bool prevIsEnd = false;

    for (char c : text) {
        bool isEnd = (c == '.' || c == '!' || c == '?');
        if (isEnd && !prevIsEnd) {
            ++result;
        }
        prevIsEnd = isEnd;
    }

    cout << result << '\n';
    return 0;
}
