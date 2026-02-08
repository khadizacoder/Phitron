// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     stack<char> typeDone, undo;

//     while (n--) {
//         string st;
//         cin >> st;

//         if (st == "TYPE") {
//             char val;
//             cin >> val;
//             typeDone.push(val);

//             while (!undo.empty())
//                 undo.pop();
//         }
//         else if (st == "UNDO") {
//             if (!typeDone.empty()) {
//                 undo.push(typeDone.top());
//                 typeDone.pop();
//             }
//         }
//         else if (st == "REDO") {
//             if (!undo.empty()) {
//                 typeDone.push(undo.top());
//                 undo.pop();
//             }
//         }
//     }

//     string result = "";
//     while (!typeDone.empty()) {
//         result += typeDone.top();
//         typeDone.pop();
//     }
//     reverse(result.begin(), result.end());

//     cout << result << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<char> typed, undone;

    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "TYPE") {
            char x;
            cin >> x;
            typed.push(x);

            // New TYPE clears redo history
            while (!undone.empty()) undone.pop();
        }
        else if (cmd == "UNDO") {
            if (!typed.empty()) {
                undone.push(typed.top());
                typed.pop();
            }
        }
        else { // REDO
            if (!undone.empty()) {
                typed.push(undone.top());
                undone.pop();
            }
        }
    }

    // Build final string
    string ans;
    ans.reserve(typed.size());
    while (!typed.empty()) {
        ans.push_back(typed.top());
        typed.pop();
    }
    reverse(ans.begin(), ans.end());

    cout << ans << '\n';
    return 0;
}
