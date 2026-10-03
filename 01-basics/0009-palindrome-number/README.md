```markdown
# LeetCode 9 - Palindrome Number

## Problem

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

## Example

Input: 121

Output: true

Process: 121 → 1, 2, 1 → 121

Since the reversed number is the same as the original number, it is a palindrome.

## My Approach

1. Store the original number in a separate variable.
2. Extract the last digit using `% 10`.
3. Build the reversed number using `reverse = reverse * 10 + num`.
4. Remove the last digit using `/ 10`.
5. Repeat the process until the number becomes `0`.
6. Compare the original number with the reversed number.
7. If both are equal, return `true`.
8. Otherwise, return `false`.

## Key Concepts

- while loop
- modulo `%`
- integer division `/`
- digit extraction
- number reversal
- comparison

## Time Complexity

O(log n)

The loop runs once for each digit in the number.

## Space Complexity

O(1)

Only a fixed number of variables are used.

## Mistakes I Made

- Initially tried to store `reverse = num` after extracting the digit.
- This replaced the previous value of `reverse` instead of building the complete reversed number.
- Learned why `reverse = reverse * 10 + num` is needed to preserve the previous digits.

## What I Learned

When reversing a number, I need to preserve the previously calculated digits and add the new digit to the end.

Using:

`reverse = reverse * 10 + num`

allows me to build the reversed number step by step.
```
