# LeetCode 1512 - Number of Good Pairs

## Problem

You are given an integer array called `nums`. Your task is to return the number of good pairs in the array.

A pair `(i, j)` is called a good pair if both conditions are satisfied:

- `nums[i] == nums[j]`
- `i < j`

The first condition means that both elements must have the same value.

The second condition means that the first index must be smaller than the second index.

In simple words, count how many pairs of different positions contain the same number. Count each pair only once.

## Example 1

**Input:**

```text
nums = [1, 2, 3, 1, 1, 3]
```

**Output:**

```text
4
```

**Explanation:**

There are four good pairs:

- `(0, 3)` because `nums[0] == nums[3] == 1`.
- `(0, 4)` because `nums[0] == nums[4] == 1`.
- `(3, 4)` because `nums[3] == nums[4] == 1`.
- `(2, 5)` because `nums[2] == nums[5] == 3`.

Therefore, the total number of good pairs is `4`.

## Example 2

**Input:**

```text
nums = [1, 1, 1, 1]
```

**Output:**

```text
6
```

**Explanation:**

Every element has the same value.

The good pairs are:

```text
(0, 1)
(0, 2)
(0, 3)
(1, 2)
(1, 3)
(2, 3)
```

There are six good pairs in total.

## Example 3

**Input:**

```text
nums = [1, 2, 3]
```

**Output:**

```text
0
```

**Explanation:**

Every element has a different value.

No two elements satisfy the condition `nums[i] == nums[j]`.

Therefore, there are no good pairs.

## My Approach

1. Create an integer variable called `counter` and initialize it to `0`.
2. Use an outer `for` loop to select the first element of a pair.
3. Start the outer loop at index `0`.
4. Use an inner `for` loop to examine the elements after the selected element.
5. Initialize `inner` to `outer + 1` so that the second index is always greater than the first index.
6. Continue the inner loop while `inner < nums.size()`.
7. Use an `if` condition to check whether `nums[outer] == nums[inner]`.
8. If both values are equal, increment `counter` by one.
9. Continue checking the remaining pairs.
10. Return `counter` after all comparisons are complete.

This approach uses nested loops to examine every possible pair of different positions exactly once.

## C++ Solution

```cpp
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter = 0;

        for (int outer = 0; outer < nums.size(); outer++) {
            for (int inner = outer + 1; inner < nums.size(); inner++) {
                if (nums[outer] == nums[inner]) {
                    counter++;
                }
            }
        }

        return counter;
    }
};
```

## How Indexing Works

Consider this array:

```text
nums = [1, 2, 3, 1, 1, 3]
```

Its indexes and values are:

| Index | Value |
| ----: | ----: |
|     0 |     1 |
|     1 |     2 |
|     2 |     3 |
|     3 |     1 |
|     4 |     1 |
|     5 |     3 |

In C++, array and vector indexes start at `0`.

For example:

```cpp
nums[0]  // Value is 1
nums[1]  // Value is 2
nums[3]  // Value is 1
```

Here, the index identifies the position, while the value is the number stored at that position.

## Understanding the Nested Loops

The outer loop selects the first index, represented by `outer`.

The inner loop selects the second index, represented by `inner`.

For each outer-loop index, the inner loop checks every later index.

For example, when `outer = 0`, the inner loop checks:

```text
(0, 1)
(0, 2)
(0, 3)
(0, 4)
(0, 5)
```

When `outer = 1`, it checks:

```text
(1, 2)
(1, 3)
(1, 4)
(1, 5)
```

The process continues until every possible pair has been examined.

## Why Do We Use `inner = outer + 1`?

The problem requires:

```text
i < j
```

This means the second index must be greater than the first index.

Suppose:

```text
nums = [1, 1]
```

The valid pair is:

```text
(0, 1)
```

We must not count `(0, 0)` because both indexes are identical.

We must also not count `(1, 0)` because the first index is greater than the second index.

Therefore, starting the inner loop at `outer + 1` ensures that every pair follows the required index order.

It also prevents counting the same pair twice.

## How the Counter Works

Initially:

```cpp
int counter = 0;
```

The counter starts at zero because no pairs have been checked yet.

Whenever the condition below is true:

```cpp
if (nums[outer] == nums[inner])
```

the counter increases:

```cpp
counter++;
```

For example, if three good pairs have been found, the counter becomes `3`.

After all comparisons are complete, the counter contains the total number of good pairs.

## Understanding the Constraints

The problem provides these constraints:

```text
1 <= nums.length <= 100

1 <= nums[i] <= 100
```

### Constraint 1: `1 <= nums.length <= 100`

The array contains at least one element and at most 100 elements.

Therefore, the array length can be any integer from `1` to `100`, inclusive.

### Constraint 2: `1 <= nums[i] <= 100`

Every element in the array has a value between `1` and `100`, inclusive.

Repeated values are allowed, which is important because good pairs require equal values.

Constraints help us understand which inputs are valid and whether our approach is efficient enough.

## Key Concepts

- Variables and initialization
- `for` loops
- Nested loops
- `if` conditions
- Basic array and vector indexing
- Comparing two values
- Incrementing a counter
- Understanding problem constraints
- Counting pairs without duplication
- Time complexity
- Auxiliary space complexity

## Time Complexity

**O(n²)**

Let `n` represent the number of elements in the input array.

The outer loop processes each element.

For every element, the inner loop checks the elements that come after it.

The total number of comparisons in the worst case is:

```text
(n - 1) + (n - 2) + ... + 2 + 1
```

This sum equals:

```text
n * (n - 1) / 2
```

The number of comparisons grows proportionally to `n²`.

Therefore, the time complexity is **O(n²)**.

The algorithm is suitable for this problem because the constraints limit the array length to 100 elements.

## Space Complexity

**O(1) auxiliary space**

The algorithm uses only a constant number of additional variables:

- `counter`
- `outer`
- `inner`

It does not create another array or vector.

Therefore, the auxiliary space complexity is **O(1)**.

The input vector is provided by the function, and the algorithm does not allocate additional storage proportional to the input size.

## Mistakes I Avoided

- Initially, I compared every element with every other element, including itself.
- I learned that comparing an element with itself does not produce a valid good pair.
- I learned that counting both `(0, 1)` and `(1, 0)` would count the same pair twice.
- I corrected the inner loop to start at `outer + 1`.
- I learned that C++ vectors use `.size()` rather than `.length()`.
- I learned that the two values must be equal for a pair to be good.
- I learned that the counter should increase only when the condition is satisfied.

## What I Learned

I learned how to count identical pairs in an array using nested loops and a simple counter.

I understood how indexes differ from values and why the condition `i < j` matters.

I also learned how starting the inner loop at `outer + 1` prevents duplicate comparisons and ensures that the same element is not compared with itself.

This problem strengthened my understanding of loops, conditions, indexing, and basic problem-solving without requiring advanced STL algorithms.

## LeetCode

[1512. Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/)
