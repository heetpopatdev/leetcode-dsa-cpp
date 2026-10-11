# LeetCode 1342 - Number of Steps to Reduce a Number to Zero

## Problem

Given an integer `num`, return the number of steps required to reduce it to zero.

- If the number is even, divide it by `2`.
- If the number is odd, subtract `1`.
- Repeat until the number becomes `0`.

## Example

Input:

`num = 14`

Output:

`6`

Process:

`14 → 7 → 6 → 3 → 2 → 1 → 0`

A total of 6 steps are required to reach zero.

## My Approach

1. Initialize `count = 0`.
2. Use a `while` loop that runs while `num > 0`.
3. If `num % 2 == 0`, divide `num` by `2`.
4. Otherwise, subtract `1` from `num`.
5. Increase `count` after every operation.
6. Return `count` when `num` becomes `0`.

## Key Concepts

- Variables
- `while` loop
- `if-else` statements
- Modulo operator `%`
- Division operator `/`
- Decrementing a number
- Counter using `count++`
- Return statement

## Time Complexity

O(log n)

The number is repeatedly reduced, with even numbers divided by two and odd numbers reduced by one.

## Space Complexity

O(1)

Only a fixed number of variables are used.

## What I Learned

A `while` loop can repeatedly perform operations until a condition becomes false. The modulo operator helps identify even numbers, and a counter keeps track of the total number of steps.
