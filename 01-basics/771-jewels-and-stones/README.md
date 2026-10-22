# LeetCode 771 - Jewels and Stones

## Problem

You are given two strings, `jewels` and `stones`.

- `jewels` represents the types of stones that are jewels.
- `stones` represents the stones you have.

Each character in `stones` represents one stone. Return the number of stones that are also jewels.

Letters are case-sensitive, so `"a"` and `"A"` are considered different characters.

## Example 1

**Input:**

```text
jewels = "aA", stones = "aAAbbbb"
```

**Output:**

```text
3
```

**Explanation:**

The jewels are `'a'` and `'A'`.

The stones contain one `'a'` and two `'A'` characters.

Therefore, the total number of stones that are jewels is `3`.

## Example 2

**Input:**

```text
jewels = "z", stones = "ZZ"
```

**Output:**

```text
0
```

**Explanation:**

The jewel is lowercase `'z'`, but both stones are uppercase `'Z'`.

Since uppercase and lowercase letters are different, the answer is `0`.

## My Approach

1. Initialize `count_similar_character` to `0`.
2. Use an outer `for` loop to visit every character in `stones`.
3. Use an inner `for` loop to compare the current stone with every character in `jewels`.
4. If `stones[outer] == jewels[inner]`, the current stone is a jewel.
5. Increase `count_similar_character` by `1`.
6. Use `break` to stop the inner loop because the current stone has already been counted.
7. Repeat the process for every stone.
8. Return `count_similar_character`.

## Key Concepts

- Strings
- Character comparison
- Nested `for` loops
- String indexing
- Conditional statements
- Counter variables
- `break` statement
- Case-sensitive comparison

## Time Complexity

**O(n × m)**

Where:

- `n` is the length of `stones`.
- `m` is the length of `jewels`.

The outer loop visits each stone, and the inner loop checks jewel characters. In the worst case, each stone is compared with every jewel.

Therefore, the time complexity is `O(n × m)`.

## Space Complexity

**O(1)** auxiliary space

The solution uses a counter and loop variables without creating additional arrays or data structures.

## Mistakes I Made

- Initially, I compared `jewels[i]` directly with `stones[i]`. This checks only characters at matching positions.
- I learned that the two strings can have different lengths, so each string needs its own loop index.
- I understood that every stone must be compared with the jewel characters, regardless of their positions.
- I learned that the counter should increase only when a match is found.
- I learned that `break` stops the inner loop after a match, preventing unnecessary comparisons.

## What I Learned

I learned how to compare characters across two strings using nested loops.

I understood why comparing characters at the same index is insufficient and how checking each stone against the jewel characters solves the problem.

This problem strengthened my understanding of strings, indexing, nested loops, conditions, counters, and the `break` statement.

I also learned how to reduce unnecessary comparisons without using advanced STL algorithms.

## LeetCode

[https://leetcode.com/problems/jewels-and-stones/](https://leetcode.com/problems/jewels-and-stones/)
