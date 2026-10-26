class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // counter variable is used to count how many good pair are available
        int counter = 0;

        // outer for loop is used to iterate on nums
        for (int outer = 0; outer < nums.size(); outer++) {

            // inner for loop is used to compare first element with next element

             // here we do not need to check i < j because its automatically satisfied why because we are comparing next upcoming index not previous one
            for (int inner = outer + 1; inner < nums.size(); inner++) {

               // here we check current element with upcoming next element so we can decide that both are good pairs.
                if (nums[outer] == nums[inner]) {
                    counter++;
                }
            }
        }

        return counter;
    }
};