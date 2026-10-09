# 🧠 LeetCode 412 - Fizz Buzz

![LeetCode](https://img.shields.io/badge/LeetCode-412-orange?style=for-the-badge&logo=leetcode)
![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Solved-success?style=for-the-badge)

---

## 📌 Problem

Given an integer **`n`**, return a string array `answer` where:

- `answer[i] == "FizzBuzz"` if `i` is divisible by **3 and 5**.
- `answer[i] == "Fizz"` if `i` is divisible by **3**.
- `answer[i] == "Buzz"` if `i` is divisible by **5**.
- Otherwise, `answer[i]` should contain `i` as a string.

---

## 🧪 Example

### Input

```text
n = 5
```

### Output

```text
["1", "2", "Fizz", "4", "Buzz"]
```

### Another Example

```text
Input:
n = 15

Output:
["1", "2", "Fizz", "4", "Buzz",
 "Fizz", "7", "8", "Fizz", "Buzz",
 "11", "Fizz", "13", "14", "FizzBuzz"]
```

---

## 💡 My Approach

I solve the problem by checking every number from `1` to `n`.

### Step 1 — Create the answer vector

```cpp
vector<string> answer;
```

This stores the final result.

### Step 2 — Loop from `1` to `n`

```cpp
for(int i = 1; i <= n; i++)
```

Each number is checked individually.

### Step 3 — Check FizzBuzz first

```cpp
if(i % 3 == 0 && i % 5 == 0)
```

If the number is divisible by both `3` and `5`, add:

```text
FizzBuzz
```

### Step 4 — Check Fizz

```cpp
else if(i % 3 == 0)
```

If divisible by `3`, add:

```text
Fizz
```

### Step 5 — Check Buzz

```cpp
else if(i % 5 == 0)
```

If divisible by `5`, add:

```text
Buzz
```

### Step 6 — Otherwise add the number

```cpp
else
    answer.push_back(to_string(i));
```

If none of the conditions match, convert the integer to a string and store it.

---

## ⚠️ Why Do I Check 3 and 5 First?

This is the most important part of the problem.

Consider:

```text
15
```

`15` is divisible by both `3` and `5`:

```text
15 % 3 == 0
15 % 5 == 0
```

Therefore the answer must be:

```text
FizzBuzz
```

If I checked:

```cpp
if(i % 3 == 0)
```

first, `15` would become:

```text
Fizz
```

and the program would never reach the `5` condition.

Therefore the order must be:

```text
FizzBuzz
    ↓
Fizz
    ↓
Buzz
    ↓
Number
```

---

## 🔑 Key Concepts

| Concept               | Why it is used                     |
| --------------------- | ---------------------------------- |
| `for` loop            | Visit every number from `1` to `n` |
| `if / else if / else` | Select the correct output          |
| `%` modulo            | Check divisibility                 |
| `&&`                  | Check two conditions together      |
| `vector<string>`      | Store the final answers            |
| `push_back()`         | Add an element to the vector       |
| `to_string()`         | Convert an integer to a string     |

---

## 🧮 Understanding `%`

The modulo operator gives the **remainder** after division.

For example:

```text
15 % 3 = 0
```

So `15` is divisible by `3`.

Similarly:

```text
15 % 5 = 0
```

So `15` is divisible by `5`.

But:

```text
14 % 3 = 2
```

Therefore `14` is **not** divisible by `3`.

---

## 🧑‍💻 Solution

```cpp
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for (int i = 1; i <= n; i++) {

            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
            }

            else if (i % 3 == 0) {
                answer.push_back("Fizz");
            }

            else if (i % 5 == 0) {
                answer.push_back("Buzz");
            }

            else {
                answer.push_back(to_string(i));
            }
        }

        return answer;
    }
};
```

---

## ⏱️ Complexity

### Time Complexity

**O(n)**

The loop runs once for every number from `1` to `n`.

```text
1 → 2 → 3 → ... → n
```

Therefore, the amount of work grows linearly with `n`.

### Space Complexity

**O(n)**

The `answer` vector stores `n` results.

---

## ❌ Mistakes I Made

- Initially needed to understand why `"Fizz"`, `"Buzz"`, and `"FizzBuzz"` must be written as strings.
- Initially needed to understand why the `FizzBuzz` condition must come **before** the individual `Fizz` and `Buzz` conditions.
- Learned that `to_string(i)` is required because `answer` is a `vector<string>`.
- Learned how `%` can be used to check whether a number is divisible by another number.

---

## 📚 What I Learned

The main lesson from this problem is:

> **Translate the conditions in the question directly into `if / else if / else` statements.**

The modulo operator is the key:

```cpp
i % 3 == 0
```

means:

> `i` is divisible by `3`.

And:

```cpp
i % 3 == 0 && i % 5 == 0
```

means:

> `i` is divisible by both `3` and `5`.

The most specific condition should be checked first.

---

## 🎯 Pattern Learned

```text
Input
  ↓
Loop through every element
  ↓
Check conditions
  ↓
Select appropriate result
  ↓
Store result
  ↓
Return answer
```

This is a basic but important pattern for solving **condition-based array problems**.

---

## 📁 File Structure

```text
412_Fizz_Buzz/
├── 412_Fizz_Buzz.cpp
└── README.md
```

---

⭐ **LeetCode 412 — Fizz Buzz | Easy | C++ | Solved**
