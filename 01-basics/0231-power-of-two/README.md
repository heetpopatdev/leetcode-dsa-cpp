# LeetCode 231 - Power of Two

## Problem

Given an integer `n`, return `true` if `n` is a power of two. Otherwise, return `false`.

A number `n` is a power of two if there exists an integer `x` such that:

`n = 2^x`

## Example

Input:

16

Output:

true

Process:

16 → 16 / 2 = 8

8 → 8 / 2 = 4

4 → 4 / 2 = 2

2 → 2 / 2 = 1

Since the result becomes `1`, 16 is a power of two.

## My Approach

1. If `n` is less than or equal to `0`, return `false`.
2. Keep dividing `n` by `2` while it is completely divisible by `2`.
3. If `n` becomes `1`, it is a power of two.
4. Otherwise, return `false`.

## Key Concepts

- while loop
- modulo `%`
- integer division `/`
- divisibility
- repeated division

## Time Complexity

O(log n)

The number is divided by 2 in each iteration.

## Space Complexity

O(1)

Only a fixed number of variables are used.

## Mistakes I Made

- Initially thought I needed to calculate different powers of 2 and compare them with `n`.
- Learned that I can repeatedly divide `n` by `2`.
- Learned that if the final value becomes `1`, the number is a power of two.

## What I Learned

When a number can be repeatedly divided by a value until it reaches `1`, a `while` loop can be used to check the condition step by step.

For Power of Two:

`n → n / 2 → n / 2 → ... → 1`
