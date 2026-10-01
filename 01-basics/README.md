# LeetCode 258 - Add Digits

## Problem

Given an integer `num`, repeatedly add all its digits until the result has only one digit.

## Example

Input:
38

Output:
2

Process:
38 → 3 + 8 = 11
11 → 1 + 1 = 2

## My Approach

1. Extract each digit using `% 10`.
2. Remove the last digit using `/ 10`.
3. Add all digits.
4. If the result has more than one digit, repeat the same process.
5. Stop when the result becomes a single digit.

## Key Concepts

- while loop
- modulo `%`
- integer division `/`
- digit extraction

## Time Complexity

O(log n) per digit-sum round.

## Space Complexity

O(1)

## Mistakes I Made

- Initially tried to process `num` again after it became `0`.
- Didn't realize I needed to repeat the digit-sum operation.
- Learned why a temporary variable is useful when reusing `sum`.

## What I Learned

When the same operation needs to be repeated until a condition becomes true, think about using a loop instead of creating separate variables like `second_sum`, `third_sum`, etc.
