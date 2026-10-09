LeetCode 412 - Fizz Buzz
Problem
Given an integer n, return a string array answer (1-indexed) where:

- answer[i] == "FizzBuzz" if i is divisible by both 3 and 5.
- answer[i] == "Fizz" if i is divisible by 3.
- answer[i] == "Buzz" if i is divisible by 5.
- answer[i] == i as a string if none of the above conditions are true.
  Example
  Input:
  n = 5
  Output:
  ["1", "2", "Fizz", "4", "Buzz"]
  For n = 15:
  ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"]
  My Approach

1. Create an empty vector<string> named answer to store the result.
2. Run a for loop from 1 to n.
3. First check whether the number is divisible by both 3 and 5.
4. If it is divisible by both, add "FizzBuzz" to the answer.
5. Otherwise, check whether it is divisible by 3 and add "Fizz".
6. Otherwise, check whether it is divisible by 5 and add "Buzz".
7. If none of the conditions are true, convert the number to a string using to_string() and add it to the answer.
8. Return the completed answer vector.
   Why Do I Check 3 and 5 First?
   A number divisible by both 3 and 5 must produce "FizzBuzz".
   For example:
   15 % 3 == 0
   15 % 5 == 0
   So 15 must become:
   "FizzBuzz"
   If I checked only the 3 condition first, 15 would become "Fizz" and I would never reach the 5 condition.
   Therefore, the combined condition must come first.
   Key Concepts

- for loop
- if / else if / else
- modulo operator %
- divisibility
- logical AND &&
- vector<string>
- push_back()
- to_string()
- returning a vector
  Time Complexity
  O(n)
  The loop processes every number from 1 to n once.
  Space Complexity
  O(n)
  The answer vector stores n strings.
  Mistakes I Made
- Initially forgot that "Fizz", "Buzz", and "FizzBuzz" are strings, so they must be written inside double quotes.
- Initially needed to understand why the FizzBuzz condition must be checked before the individual Fizz and Buzz conditions.
- Learned that to_string(i) is required because the answer is a vector<string>, while i is an integer.
- Learned that % checks whether a number is divisible by another number without a remainder.
  What I Learned
  The important idea in Fizz Buzz is to translate the problem's conditions directly into if/else if/else.
  The modulo operator helps check divisibility:
  i % 3 == 0
  means i is divisible by 3.
  i % 5 == 0
  means i is divisible by 5.
  For the combined case:
  i % 3 == 0 && i % 5 == 0
  means the number is divisible by both 3 and 5.
  The order of the conditions matters because the FizzBuzz case is more specific than the individual Fizz and Buzz cases.
