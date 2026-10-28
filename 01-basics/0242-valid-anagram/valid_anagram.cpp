#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        // how many times each character appears
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for(int j = 0; j < t.length(); j++) {
            freq[t[j] - 'a']--;
        }

        // Here I am traversing every character of string t. Why? Because I want to check whether string t contains the same characters with the same frequencies as string s.
        for(int k = 0; k < 26; k++) {
            if(freq[k] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (solution.isAnagram(s, t)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}