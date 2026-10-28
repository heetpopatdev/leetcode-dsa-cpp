#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Here i am checking that both have same length or not why because they dont have same length that means they cannot contain exactly same character with the same frequencies.
        if (s.length() != t.length()) {
            return false;
        }
        // Here i created this freq array containing 26 integers why 26 because the problem gaurantees that the strings contain only lowercase English letters.
        int freq[26] = {0};

        // Here i created this for loop from 0 to length of string s to increase frequence when i found.
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        // Here I am traversing every character of string s. Why? Because I want to count how many times each character appears.
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