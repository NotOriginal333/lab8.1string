#include <iostream>
#include <string>

using namespace std;

int FindFourthDot(const string& s) {
    int dotCount = 0;
    int index = -1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 4) {
                index = i;
                break;
            }
        }
    }
    return index;
}

string ReplaceDotsWithStars(string s) {
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == '.') {
            s.replace(i, 1, "**");
            i++;
        }
    }
    return s;
}

int main() {
    string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);

    int fourthDotIndex = FindFourthDot(str);
    if (fourthDotIndex != -1) {
        cout << "Position of the fourth dot from the end: " << fourthDotIndex << endl;
    }
    else {
        cout << "The fourth dot was not found in the string." << endl;
    }

    string modifiedStr = ReplaceDotsWithStars(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
