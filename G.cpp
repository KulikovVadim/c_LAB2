#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    unordered_set<string> set;

    while (true) {
        char operation;
        cin >> operation;

        if (operation == '#') {
            break;
        }

        string word;
        cin >> word;

        switch (operation) {
        case '+':
            set.insert(word);
            break;
        case '-':
            set.erase(word);
            break;
        case '?':
            if (set.find(word) != set.end()) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            break;
        default:
            break;
        }
    }

    return 0;
}















