# LeetCode 344 - Reverse String

## Problem

Write a function that reverses a string.

The input string is given as an array of characters `s`. Reverse the array by modifying the original array **in-place**, using `O(1)` extra memory.

## Example

**Input:**

```text
s = ["h", "e", "l", "l", "o"]
```

**Output:**

```text
["o", "l", "l", "e", "h"]
```

**Process:**

```text
h e l l o
↓       ↓
o e l l h
  ↓   ↓
o l l e h
```

The first and last characters are swapped, then the second and second-last characters are swapped. The middle character stays in the same position.

## My Approach

1. Initialize `left = 0` to point to the first character.
2. Initialize `right = s.size() - 1` to point to the last character.
3. Use a `while` loop that runs while `left < right`.
4. Store `s[left]` in a temporary variable called `temp`.
5. Assign `s[right]` to `s[left]`.
6. Assign `temp` to `s[right]` to complete the swap.
7. Increment `left` and decrement `right`.
8. Repeat until the pointers meet or cross.

## Key Concepts

- `vector<char>`
- Two-pointer technique
- `while` loop
- Array indexing
- Swapping elements
- In-place modification
- Reference parameter: `vector<char>& s`

## Time Complexity

**O(n)**

The algorithm processes approximately half of the characters, swapping both ends in each iteration. Therefore, the time complexity is O(n), where n is the number of characters.

## Space Complexity

**O(1)** auxiliary space

Only a fixed number of extra variables (`left`, `right`, and `temp`) are used. No additional array or string is created.

## Mistakes I Made

- Initially, reversing a string can seem like a task that requires creating another string.
- Creating a second array is unnecessary for this problem because the original array must be modified in-place.
- Swapping characters without a temporary variable can overwrite a character before it is saved.

## What I Learned

I learned how the two-pointer technique reverses an array by swapping characters from opposite ends.

The temporary variable prevents a character from being lost during a swap.

Using `left++` and `right--` moves both pointers toward the center until the entire array is reversed.

I also learned that in-place modification means changing the original array rather than creating a separate array.

## LeetCode

https://leetcode.com/problems/reverse-string/
