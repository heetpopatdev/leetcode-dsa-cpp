# LeetCode 2520 — Count the Digits That Divide a Number

- **Difficulty:** Easy
- **Language:** C++
- **Topics:** Loops, modulo operator, integer division

## Problem

Given an integer `num`, count how many of its digits divide `num` evenly.

## Approach

1. Store the original number.
2. Extract the last digit using `num % 10`.
3. Check that the digit is not zero and divides the original number.
4. Increase the count when the condition is true.
5. Remove the last digit using `num / 10`.
6. Return the count.

## Example

**Input:** `num = 121`

- Digit `1` divides `121`.
- Digit `2` does not divide `121`.
- Digit `1` divides `121`.

**Output:** `2`

## Complexity

- **Time:** O(log N) — process each digit.
- **Auxiliary Space:** O(1) — use a fixed number of variables.

## LeetCode

https://leetcode.com/problems/count-the-digits-that-divide-a-number/
