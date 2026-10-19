
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        // Store lowercase letters and digits
        string clean_and_lower_case = "";

        // Step 1: Remove non-alphanumeric characters
        // and convert uppercase letters to lowercase
        for (int i = 0; i < s.length(); i++) {

            // Check whether the character is a letter or digit
            if (isalnum(s[i])) {

                // Convert the character to lowercase and add it
                clean_and_lower_case += tolower(s[i]);
            }
        }

        // Step 2: Create a reversed version of the cleaned string
        string reverse = "";

        // Start from the last character and move backward
        for (int j = clean_and_lower_case.length() - 1; j >= 0; j--) {

            // Add each character to the reversed string
            reverse += clean_and_lower_case[j];
        }

        // Step 3: Compare both strings
        // Return true if they are equal; otherwise, return false
        return clean_and_lower_case == reverse;
    }
};

int main() {
    Solution solution;
    string s;

    // Read the complete input, including spaces
    cout << "Enter a string: ";
    getline(cin, s);

    // Check whether the input is a palindrome
    if (solution.isPalindrome(s)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}
