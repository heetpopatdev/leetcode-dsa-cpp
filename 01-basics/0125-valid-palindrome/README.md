# LeetCode 125 - Valid Palindrome

## Problem

Given a string `s`, determine whether it is a palindrome after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters.

Alphanumeric characters include letters and numbers.

A string is a palindrome if it reads the same forward and backward.

Return `true` if the string is a palindrome, or `false` otherwise.

## Example

**Input:**

```text
s = "A man, a plan, a canal: Panama"
```

**Output:**

```text
true
```

**Explanation:**

After removing spaces, punctuation, and converting uppercase letters to lowercase:

```text
amanaplanacanalpanama
```

Reversing the cleaned string:

```text
amanaplanacanalpanama
```

Both strings are identical, so the result is `true`.

**Example 2:**

**Input:**

```text
s = "race a car"
```

**Output:**

```text
false
```

**Explanation:**

After cleaning:

```text
raceacar
```

After reversing:

```text
racaecar
```

Both strings are different, so the result is `false`.

**Example 3:**

**Input:**

```text
s = " "
```

**Output:**

```text
true
```

After removing non-alphanumeric characters, the string becomes empty.

An empty string is considered a palindrome.

## My Approach

1. Initialize an empty string `clean_and_lower_case` to store the cleaned characters.
2. Use a `for` loop to traverse the original string `s`.
3. Use `isalnum()` to check whether the current character is a letter or digit.
4. If the character is alphanumeric, convert it to lowercase using `tolower()`.
5. Append the lowercase character to `clean_and_lower_case`.
6. Initialize another empty string called `reverse`.
7. Use a second `for` loop starting from the last index of the cleaned string.
8. Append each character to `reverse` while moving backward.
9. Compare `clean_and_lower_case` with `reverse` using the `==` operator.
10. Return `true` if both strings are equal; otherwise, return `false`.

## Key Concepts

- `string`
- `for` loop
- `if` statement
- `isalnum()` function
- `tolower()` function
- String indexing
- String concatenation
- Reverse traversal
- String comparison using `==`
- Boolean return type
- String manipulation

## Time Complexity

**O(n)**

The first loop traverses the original string to remove non-alphanumeric characters and convert uppercase letters to lowercase.

The second loop traverses the cleaned string backward to create the reversed string.

The final comparison checks whether the cleaned and reversed strings are equal.

Each operation takes at most O(n) time, so the overall time complexity is O(n), where n is the length of the input string.

## Space Complexity

**O(n)** auxiliary space

Two additional strings are created:

- `clean_and_lower_case` stores the cleaned string.
- `reverse` stores the reversed version of the cleaned string.

In the worst case, both strings can contain n characters.

Therefore, the total auxiliary space complexity is O(n).

## Mistakes I Made

- Initially, it may seem possible to compare the original string directly with its reverse.
- However, uppercase and lowercase letters must be treated as equal.
- Spaces, punctuation marks, and special characters must be removed before comparison.
- Using `isalnum()` helps identify valid letters and digits.
- Using `tolower()` ensures that uppercase and lowercase letters are compared consistently.
- When traversing backward, the loop must begin at the last valid index, `length() - 1`, rather than `length()`.

## What I Learned

I learned how to check whether a string is a palindrome by cleaning it, reversing it, and comparing both versions.

I understood how `isalnum()` identifies letters and digits and how `tolower()` converts uppercase characters into lowercase characters.

I also learned how to traverse a string backward using a `for` loop.

This problem helped me strengthen my understanding of string manipulation, loops, conditional statements, character functions, and string comparison.

I also learned that creating additional strings makes the solution easy to understand, but requires O(n) extra space.

An alternative two-pointer approach can solve the same problem using O(1) auxiliary space.

## LeetCode

https://leetcode.com/problems/valid-palindrome/
