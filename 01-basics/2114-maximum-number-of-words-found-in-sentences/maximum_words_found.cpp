
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int words = 1;

            // Each space separates two words
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') {
                    words++;
                }
            }

            if (words > maxWords) {
                maxWords = words;
            }
        }

        return maxWords;
    }
};

int main() {
    Solution solution;

    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout << "Maximum number of words: "
         << solution.mostWordsFound(sentences) << endl;

    return 0;
}
