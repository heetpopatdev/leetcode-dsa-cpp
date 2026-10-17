
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};

int main() {
    Solution solution;

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    solution.reverseString(s);

    cout << "Reversed string: ";

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    cout << endl;

    return 0;
}
