# LeetCode 1523 — Count Odd Numbers in an Interval Range

- **Difficulty:** Easy
- **Language:** C++
- **Topics:** Variables, loops, if conditions, modulo operator

## Problem

Given two non-negative integers `low` and `high`, count the number of odd integers between `low` and `high`, inclusive.

## Approach

1. Initialize `count` to `0`.
2. Use a `for` loop to iterate from `low` to `high`.
3. Check whether each number is odd using `i % 2 != 0`.
4. Increase `count` whenever the number is odd.
5. Return the final count.

## Example

**Input:** `low = 3, high = 7`

**Output:** `3`

**Explanation:**

The odd numbers between `3` and `7` are `3`, `5`, and `7`.

Therefore, the total count is `3`.

## Complexity

- **Time:** O(n) — checks every number in the interval.
- **Auxiliary Space:** O(1) — uses a fixed number of variables.

## LeetCode

https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
