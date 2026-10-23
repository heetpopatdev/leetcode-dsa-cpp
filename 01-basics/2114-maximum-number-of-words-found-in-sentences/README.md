# LeetCode 2114 - Maximum Number of Words Found in Sentences

## Problem

You are given an array of strings called `sentences`, where each element represents a sentence.

Words in a sentence are separated by a single space. There are no leading or trailing spaces.

Return the maximum number of words that appear in any single sentence.

## Example 1

**Input:**

```text
sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
```

**Output:**

```text
6
```

**Explanation:**

- First sentence: `"alice and bob love leetcode"` contains 5 words.
- Second sentence: `"i think so too"` contains 4 words.
- Third sentence: `"this is great thanks very much"` contains 6 words.

The third sentence has the maximum number of words, which is `6`.

## Example 2

**Input:**

```text
sentences = ["please wait", "continue to fight", "continue to win"]
```

**Output:**

```text
3
```

**Explanation:**

- First sentence: `"please wait"` contains 2 words.
- Second sentence: `"continue to fight"` contains 3 words.
- Third sentence: `"continue to win"` contains 3 words.

The maximum number of words in a sentence is `3`.

## My Approach

1. Initialize `maxWords` to `0` to store the maximum word count found so far.
2. Use an outer `for` loop to visit every sentence in the `sentences` vector.
3. Initialize `words` to `1` for each sentence because every sentence contains at least one word.
4. Use an inner `for` loop to traverse each character of the current sentence.
5. Check whether the current character is a space using `sentences[i][j] == ' '`.
6. Whenever a space is found, increment `words` because each space separates two words.
7. After counting all the words in the current sentence, compare `words` with `maxWords`.
8. If `words` is greater than `maxWords`, update `maxWords = words`.
9. After processing every sentence, return `maxWords`.

## Key Concepts

- `vector<string>`
- Nested `for` loops
- String indexing
- String length using `.length()`
- Character comparison
- Counting using a variable
- Maximum value tracking
- Conditional statements
- Returning an integer

## Time Complexity

**O(n × m)**

Let:

- `n` be the number of sentences.
- `m` be the maximum length of a sentence.

The outer loop visits each sentence, and the inner loop examines every character in that sentence.

Therefore, the overall time complexity is O(n × m), where `m` represents the maximum sentence length.

More precisely, the time complexity is O(n + L), where `L` is the total number of characters across all sentences.

## Space Complexity

**O(1)** auxiliary space

The solution uses only two additional integer variables, `maxWords` and `words`, along with loop variables.

It does not create any additional strings or arrays.

Therefore, the auxiliary space complexity is O(1).

## Mistakes I Made

- Initially, I needed to understand how to count words without splitting the sentence into separate strings.
- I learned that every space separates two words in this problem.
- Counting spaces alone gives one less than the number of words, so `words` must start at `1`.
- The variable `words` must be reset to `1` for each new sentence.
- The maximum word count should be updated after finishing the count for the current sentence.
- I learned that `.length()` gives the number of characters in a string, not the number of words.

## What I Learned

I learned how to count words in a sentence by counting the spaces between them.

I understood how nested loops can be used to process an array of strings and examine each character of every sentence.

I also learned how to track the maximum value using a variable and an `if` statement.

This problem strengthened my understanding of strings, vectors, nested loops, character comparison, and counting logic without requiring advanced STL algorithms.

## LeetCode

https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
