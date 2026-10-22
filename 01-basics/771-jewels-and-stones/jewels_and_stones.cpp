
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count_jewels_in_stones = 0;

        for (int outer = 0; outer < stones.length(); outer++) {
            for (int inner = 0; inner < jewels.length(); inner++) {
                if (stones[outer] == jewels[inner]) {
                    count_jewels_in_stones++;
                    break;
                }
            }
        }

        return count_jewels_in_stones;
    }
};

int main() {
    Solution obj;

    string jewels = "aA";
    string stones = "aAAbbbb";

    int result = obj.numJewelsInStones(jewels, stones);

    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
