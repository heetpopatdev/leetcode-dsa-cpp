# LeetCode 2652 - Sum Multiples

## Problem

Given a positive integer `n`, find the sum of all integers in the range `[1, n]` inclusive that are divisible by `3`, `5`, or `7`.

Return an integer representing the sum of all numbers satisfying this condition.

## Example

**Input:**

```text
n = 7
```

**Output:**

```text
21
```

**Explanation:**

The numbers in the range `[1, 7]` that are divisible by `3`, `5`, or `7` are:

```text
3, 5, 6, 7
```

Their sum is:

```text
3 + 5 + 6 + 7 = 21
```

## My Approach

1. Initialize `sum = 0` to store the total.
2. Use a `for` loop starting from `i = 1` and continue until `i <= n`.
3. Check whether `i` is divisible by `3`, `5`, or `7`.
4. Use the modulo operator `%` to check divisibility. A remainder of `0` means the number is divisible.
5. Use the logical OR operator `||` because a number needs to satisfy at least one condition.
6. If any condition is true, add `i` to `sum`.
7. After the loop finishes, return `sum`.

## Key Concepts

- `for` loop
- `if` statement
- Modulo operator `%`
- Logical OR operator `||`
- Accumulator variable
- Divisibility
- Basic mathematical problem-solving

## Time Complexity

**O(n)**

The loop checks every integer from `1` to `n`. Each divisibility check takes constant time, so the total time complexity is O(n).

## Space Complexity

**O(1)** auxiliary space

Only a fixed number of variables, such as `sum` and `i`, are used. No additional array or collection is created.

## Mistakes I Made

- Initially, it may seem necessary to create a list of all numbers divisible by `3`, `5`, or `7`.
- Creating an additional array is unnecessary because each qualifying number can be added directly to the sum.
- Using `&&` instead of `||` would incorrectly require a number to be divisible by all three numbers.
- A number divisible by multiple values must be added only once. The `if` condition handles this correctly.

## What I Learned

I learned how to use the modulo operator to check whether a number is divisible by another number.

I also learned how the logical OR operator checks whether at least one condition is true.

Using an accumulator variable allows me to calculate the total without storing every qualifying number.

This problem strengthened my understanding of loops, conditional statements, logical operators, and time and space complexity.

## LeetCode

https://leetcode.com/problems/sum-multiples/
