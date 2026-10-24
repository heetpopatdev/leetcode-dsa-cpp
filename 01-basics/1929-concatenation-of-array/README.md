# LeetCode 1929 - Concatenation of Array

## Problem

You are given an integer array called `nums` of length `n`.

Create a new array called `ans` of length `2n`, where:

- `ans[i] == nums[i]`
- `ans[i + n] == nums[i]`

for every index `i` from `0` to `n - 1`.

In simple words, concatenate the original array with itself and return the resulting array.

## Example 1

**Input:**

```text
nums = [1, 2, 1]
```

**Output:**

```text
[1, 2, 1, 1, 2, 1]
```

**Explanation:**

- Original array: `[1, 2, 1]`
- First copy: `[1, 2, 1]`
- Second copy: `[1, 2, 1]`
- Concatenated array: `[1, 2, 1, 1, 2, 1]`

The resulting array contains twice as many elements as the original array.

## Example 2

**Input:**

```text
nums = [1, 3, 2, 1]
```

**Output:**

```text
[1, 3, 2, 1, 1, 3, 2, 1]
```

**Explanation:**

- Original array: `[1, 3, 2, 1]`
- First copy: `[1, 3, 2, 1]`
- Second copy: `[1, 3, 2, 1]`
- Concatenated array: `[1, 3, 2, 1, 1, 3, 2, 1]`

The original array contains four elements, so the resulting array contains eight elements.

## My Approach

1. Store the size of the original vector in the variable `n` using `nums.size()`.
2. Create a new vector called `ans` with `2 * n` elements.
3. Use a `for` loop to visit every element of the original vector.
4. Copy each element into the first half of the new vector using `ans[i] = nums[i]`.
5. Copy the same element into the second half using `ans[i + n] = nums[i]`.
6. Continue until every element has been copied into both halves.
7. Return the completed vector using `return ans`.

## How the Indexing Works

Suppose:

```cpp
nums = {1, 2, 1};
```

The original vector has three elements, so `n = 3`.

The new vector has six elements:

```text
ans = {0, 0, 0, 0, 0, 0}
```

During each loop iteration, two positions are updated.

| `i` | `nums[i]` | First half   | Second half  |
| --- | --------- | ------------ | ------------ |
| 0   | 1         | `ans[0] = 1` | `ans[3] = 1` |
| 1   | 2         | `ans[1] = 2` | `ans[4] = 2` |
| 2   | 1         | `ans[2] = 1` | `ans[5] = 1` |

The final vector becomes:

```text
ans = {1, 2, 1, 1, 2, 1}
```

Adding `n` to the original index moves the destination to the corresponding position in the second half.

## Key Concepts

- `vector<int>`
- Vector initialization with a specified size
- `vector.size()`
- Array and vector indexing
- `for` loops
- Copying elements
- Returning a vector from a function
- Time complexity
- Space complexity

## Time Complexity

**O(n)**

Let `n` be the number of elements in the original vector.

The loop runs exactly `n` times. During each iteration, two elements are assigned to the result vector.

Each assignment takes constant time, so the total number of operations grows linearly with the input size.

Therefore, the time complexity is **O(n)**.

## Space Complexity

**O(n)** total space, including the output vector.

The result vector contains `2n` elements.

Because `2n` grows proportionally to `n`, the space required for the result is **O(n)**.

**Auxiliary space: O(1), excluding the output vector.**

The algorithm uses only a constant number of additional variables, such as `n` and `i`, apart from the result vector.

## Mistakes I Made

- Initially, I thought I might be able to multiply an array by `2` to duplicate its elements.
- I learned that multiplying an array by `2` does not concatenate its elements in C++.
- I learned how to create a vector of a specific size using `vector<int> ans(2 * n)`.
- I understood that vector indexing starts at `0`, not `1`.
- I learned that the original vector has `n` elements, while the result vector has `2n` elements.
- I understood that adding `n` to an index moves the destination to the corresponding position in the second half.
- I learned that one loop can fill both halves of the result vector.
- I understood the difference between the output space and auxiliary space.

## What I Learned

I learned how to concatenate an array with itself using a single loop.

I understood how to create a vector with a specific size and access its elements using indexes.

I also learned how the expression `i + n` helps copy each original element into the second half of the result vector.

This problem strengthened my understanding of vectors, indexing, loops, copying elements, and complexity analysis without requiring advanced STL algorithms.

## LeetCode

https://leetcode.com/problems/concatenation-of-array/
