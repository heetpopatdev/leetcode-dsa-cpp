# LeetCode 1313 - Decompress Run-Length Encoded List

## Problem

You are given an integer array called `nums` that represents a list compressed using run-length encoding.

Each adjacent pair of elements represents a frequency and a value:

- `nums[2 * i]` represents the frequency.
- `nums[2 * i + 1]` represents the value.

For each pair, add the specified value to the resulting array as many times as its frequency.

Return the decompressed array.

In simple words, the first number tells us how many times to repeat the second number.

## Example 1

**Input:**

```text
nums = [1, 2, 3, 4]
```

**Output:**

```text
[2, 4, 4, 4]
```

**Explanation:**

The input contains two frequency-value pairs.

- First pair: `[1, 2]`
- Frequency = `1`
- Value = `2`
- Add `2` one time.

The result becomes:

```text
[2]
```

The second pair is `[3, 4]`.

- Frequency = `3`
- Value = `4`
- Add `4` three times.

The result becomes:

```text
[2, 4, 4, 4]
```

Therefore, the final decompressed array is `[2, 4, 4, 4]`.

## Example 2

**Input:**

```text
nums = [1, 1, 2, 3]
```

**Output:**

```text
[1, 3, 3]
```

**Explanation:**

The input contains two frequency-value pairs.

- First pair: `[1, 1]` means add `1` one time.
- Second pair: `[2, 3]` means add `3` two times.

The final decompressed array is `[1, 3, 3]`.

## My Approach

1. Create an empty vector called `new_arr` to store the decompressed elements.
2. Use an outer `for` loop to process each frequency-value pair.
3. Start the outer loop at index `0`.
4. Increase `i` by `2` after each iteration because every pair contains two elements.
5. Store the frequency in the variable `frequency` using `nums[i]`.
6. Store the value in the variable `value` using `nums[i + 1]`.
7. Create an inner `for` loop that runs from `0` to `frequency - 1`.
8. Use `new_arr.push_back(value)` to append the value to the result vector.
9. Repeat the inner loop until the value has been added the required number of times.
10. Continue processing the remaining frequency-value pairs.
11. Return the completed vector using `return new_arr`.

## How the Indexing Works

Suppose:

```cpp
vector<int> nums = {1, 2, 3, 4};
```

The input contains four elements.

The first pair is:

```text
nums[0] = 1  // Frequency
nums[1] = 2  // Value
```

The second pair is:

```text
nums[2] = 3  // Frequency
nums[3] = 4  // Value
```

The outer loop uses `i += 2` to visit the beginning of each pair.

| Outer loop index `i` | `nums[i]` (frequency) | `nums[i + 1]` (value) |
| -------------------: | --------------------: | --------------------: |
|                    0 |                     1 |                     2 |
|                    2 |                     3 |                     4 |

### First iteration

The frequency is `1` and the value is `2`.

The inner loop runs once:

```text
new_arr = [2]
```

### Second iteration

The frequency is `3` and the value is `4`.

The inner loop runs three times:

```text
new_arr = [2, 4]
new_arr = [2, 4, 4]
new_arr = [2, 4, 4, 4]
```

The final result is:

```text
[2, 4, 4, 4]
```

## Why Do We Use `i += 2`?

Each pair contains two elements: a frequency and a value.

For example:

```text
Index:  0  1  2  3
Value:  1  2  3  4
        └─┘  └─┘
        Pair  Pair
```

If we used `i++`, the outer loop would visit indices `0`, `1`, `2`, and `3`.

However, we want it to visit only indices `0` and `2`, where the frequency values are stored.

Therefore, we use `i += 2`.

## Key Concepts

- `vector<int>`
- Nested `for` loops
- Array and vector indexing
- Frequency-value pairs
- Loop increment using `i += 2`
- Repeating an operation using a loop
- `push_back()`
- Returning a vector
- Time complexity
- Space complexity

## Time Complexity

**O(n + k)**

Let:

- `n` be the number of elements in the input vector.
- `k` be the number of elements in the decompressed output vector.

The outer loop processes each frequency-value pair. Since the input contains `n` elements, there are `n / 2` pairs.

The inner loop executes according to each frequency. Across all pairs, the total number of inner-loop iterations equals `k`, the number of elements added to the result.

Therefore, the overall time complexity is **O(n + k)**.

## Space Complexity

**O(k)** total space, including the output vector.

The result vector stores `k` elements, where `k` is the length of the decompressed array.

The algorithm creates this additional vector to store the answer.

**Auxiliary space: O(1), excluding the output vector.**

Apart from the output vector, the algorithm uses only a constant number of additional variables, such as `frequency`, `value`, `i`, and `j`.

Therefore, the auxiliary space complexity is O(1).

## Mistakes I Made

- Initially, I needed to understand how the input array stores frequency-value pairs.
- I learned that `nums[i]` represents the frequency and `nums[i + 1]` represents the value.
- I understood why the outer loop uses `i += 2` instead of `i++`.
- I learned that the inner loop must execute exactly `frequency` times.
- I understood how `push_back(value)` adds an element to the end of a vector.
- I learned that the output vector grows as elements are added.
- I understood that the output vector requires O(k) space, while the additional variables require O(1) auxiliary space.

## What I Learned

I learned how to decompress a run-length encoded array using nested loops.

I understood how to process frequency-value pairs by increasing the outer loop index by two.

I also learned how to use an inner loop to repeat a value according to its frequency and how `push_back()` adds elements to a vector.

This problem strengthened my understanding of vectors, indexing, nested loops, frequency counting, and complexity analysis without requiring advanced STL algorithms.

## LeetCode

https://leetcode.com/problems/decompress-run-length-encoded-list/
