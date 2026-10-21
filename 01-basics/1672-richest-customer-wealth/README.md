# LeetCode 1672 - Richest Customer Wealth

## Problem

You are given an `m x n` integer grid called `accounts`, where `accounts[i][j]` represents the amount of money the `i`th customer has in their `j`th bank account.

A customer's wealth is the total amount of money they have across all their bank accounts.

Return the maximum wealth among all customers.

## Example 1

**Input:**

```text
accounts = [[1,2,3],[3,2,1]]
```

**Output:**

```text
6
```

**Explanation:**

The first customer has wealth:

```text
1 + 2 + 3 = 6
```

The second customer has wealth:

```text
3 + 2 + 1 = 6
```

Both customers have wealth of 6, so the maximum wealth is `6`.

## Example 2

**Input:**

```text
accounts = [[1,5],[7,3],[3,5]]
```

**Output:**

```text
10
```

**Explanation:**

- First customer: `1 + 5 = 6`
- Second customer: `7 + 3 = 10`
- Third customer: `3 + 5 = 8`

The second customer has the highest wealth, which is `10`.

## Example 3

**Input:**

```text
accounts = [[2,8,7],[7,1,3],[1,9,5]]
```

**Output:**

```text
17
```

**Explanation:**

- First customer: `2 + 8 + 7 = 17`
- Second customer: `7 + 1 + 3 = 11`
- Third customer: `1 + 9 + 5 = 15`

The maximum wealth is `17`.

## My Approach

1. Initialize `maxWealth` to `0` to store the highest customer wealth found so far.
2. Use an outer `for` loop to visit each customer in the `accounts` grid.
3. Initialize `sum` to `0` for each customer.
4. Use an inner `for` loop to visit every bank account belonging to the current customer.
5. Add each account balance to `sum` using `sum += accounts[outer][inner]`.
6. After the inner loop finishes, `sum` contains the current customer's total wealth.
7. Compare `sum` with `maxWealth`.
8. If `sum` is greater, update `maxWealth = sum`.
9. After processing all customers, return `maxWealth`.

## Key Concepts

- Two-dimensional arrays / vectors
- Nested `for` loops
- Array indexing
- Variable initialization
- Running sum
- Maximum value tracking
- Conditional statements
- Passing a vector by reference
- Returning an integer

## Time Complexity

**O(m × n)**

The outer loop visits each of the `m` customers. For each customer, the inner loop visits all `n` bank accounts.

Therefore, the total number of account visits is proportional to `m × n`.

## Space Complexity

**O(1)** auxiliary space

The solution uses only two additional integer variables, `sum` and `maxWealth`. It does not create another array or vector.

The input grid is not counted as auxiliary space.

## Mistakes I Made

- Initially, I was confused about how an outer array could contain multiple inner arrays.
- I learned that the outer loop selects a customer, while the inner loop visits that customer's bank accounts.
- The `sum` variable must be reset to `0` for every new customer.
- The maximum wealth should be compared after the inner loop has calculated the customer's total, not after every individual account.
- I learned that I do not need separate sum variables for each customer. The same `sum` variable can be reused for every row.

## What I Learned

I learned how to traverse a two-dimensional vector using nested loops.

I understood how to calculate the sum of each row and compare each customer's total wealth with the maximum wealth found so far.

This problem strengthened my understanding of loops, array indexing, running sums, conditional statements, and maximum-value tracking.

I also learned how the outer and inner loops work together to solve a problem involving a two-dimensional array without using advanced STL algorithms.

## LeetCode

https://leetcode.com/problems/richest-customer-wealth/
