
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean_and_lower_case = "";

        // Step 1: Remove non-alphanumeric characters
        // and convert uppercase letters to lowercase
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(static_cast<unsigned char>(s[i]))) {
                clean_and_lower_case +=
                    tolower(static_cast<unsigned char>(s[i]));
            }
        }

        // Step 2: Reverse the cleaned string
        string reverse = "";

        for (int j = static_cast<int>(clean_and_lower_case.length()) - 1;
             j >= 0; j--) {
            reverse += clean_and_lower_case[j];
        }

        // Step 3: Compare both strings
        return clean_and_lower_case == reverse;
    }
};

int main() {
    Solution solution;

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (solution.isPalindrome(s)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}
