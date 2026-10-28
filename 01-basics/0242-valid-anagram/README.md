LeetCode 242 - Valid Anagram
Problem
You are given two strings called s and t.

Return true if t is an anagram of s. Otherwise, return false.

An anagram is a word or string made by rearranging the characters of another string. Both strings must contain the same characters with the same frequencies.

In simple words, the order can be different, but the characters and the number of times they appear must be the same.
Example 1
Input:
s = "anagram"
t = "nagaram"
Output:
true
Explanation:

Both strings contain:

- a three times
- n one time
- g one time
- r one time
- m one time
  The characters appear in a different order, but their frequencies match. Therefore, the answer is true.
  Example 2
  Input:
  s = "rat"
  t = "car"
  Output:
  false
  Explanation:

The strings do not contain the same characters. s contains t, while t contains c.

Therefore, the answer is false.
My Approach

1. First, compare the lengths of s and t.
2. If their lengths are different, return false because anagrams must contain the same number of characters.
3. Create an integer array called freq with 26 elements, all initialized to 0.
4. Traverse every character in s.
5. Convert each lowercase character into an index using s[i] - 'a', then increase that counter.
6. Traverse every character in t and decrease the counter for each character.
7. Check all 26 counters.
8. If any counter is not 0, return false.
9. If all counters are 0, return true.
   This approach counts the characters in s and then cancels those counts using the characters in t. If the strings are anagrams, every counter returns to zero.
   C++ Solution
   #include <string>
   using namespace std;

class Solution {
public:
bool isAnagram(string s, string t) {
if (s.length() != t.length()) {
return false;
}

        int freq[26] = {0};

        // how many times each character appears
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for(int j = 0; j < t.length(); j++) {
            freq[t[j] - 'a']--;
        }

        // Here I am traversing every character of string t. Why? Because I want to check whether string t contains the same characters with the same frequencies as string s.
        for(int k = 0; k < 26; k++) {
            if(freq[k] != 0) {
                return false;
            }
        }

        return true;
    }

};
How the Frequency Array Works
int freq[26] = {0};
This creates 26 integer storage locations. Each location starts at 0.

We use one location for each lowercase English letter:
Character Array index
a 0
b 1
c 2
d 3
... ...
z 25

The expression s[i] - 'a' converts a lowercase character into its corresponding index.

For example:
'a' - 'a' // 0
'b' - 'a' // 1
'c' - 'a' // 2
The array stores integers, not characters. The character determines which integer counter we access.
Why Do We Use ++ and --?
When we find a character in s, we increase its counter:
freq[s[i] - 'a']++;
For example, if a appears three times in s, its counter becomes:
0 -> 1 -> 2 -> 3
When we find a character in t, we decrease its counter:
freq[t[j] - 'a']--;
If a also appears three times in t, its counter becomes:
3 -> 2 -> 1 -> 0
The counts cancel because both strings contain the same number of each character.

If a character appears more times in one string than the other, its counter will not finish at zero.
Dry Run
Consider:
s = "anagram"
t = "nagaram"
Step 1: Count characters in s
The string s contains:
Character Frequency after processing s
a 3
g 1
m 1
n 1
r 1

All other character counters remain 0.
Step 2: Subtract characters in t
The string t contains the same character frequencies. Each subtraction cancels a count from the first string.
Character Count after s Subtractions from t Final count
a 3 3 0
g 1 1 0
m 1 1 0
n 1 1 0
r 1 1 0

Step 3: Check the 26 counters
The loop checks:
for(int k = 0; k < 26; k++) {
if(freq[k] != 0) {
return false;
}
}
Every counter is 0, so the condition freq[k] != 0 is never true.

The function reaches:
return true;
Therefore, the output is true.
Why Do We Check the String Length First?
if (s.length() != t.length()) {
return false;
}
Anagrams must contain the same total number of characters. If the lengths differ, the strings cannot be anagrams, so we can return false immediately without counting anything.
Why Do We Check All 26 Counters?
for(int k = 0; k < 26; k++) {
if(freq[k] != 0) {
return false;
}
}
A non-zero counter means that a character appeared a different number of times in the two strings.

If even one counter is non-zero, the strings are not anagrams. If all 26 counters are zero, every lowercase letter has matching frequencies.
Understanding the Constraints
The problem states:
1 <= s.length, t.length <= 5 \* 10^4
s and t consist of lowercase English letters

- Both strings contain at least one character.
- Each string can contain up to 50,000 characters.
- Only lowercase English letters are allowed.
  Because the input contains only 26 possible characters, an array of 26 counters is enough to track all character frequencies.
  Key Concepts
- String length
- for loops
- Character indexing
- Integer arrays
- Frequency counting
- Increment (++) and decrement (--)
- Early return
- Comparing values
- Anagrams
- Time complexity
- Auxiliary space complexity
  Time Complexity
  O(n)

Let n be the length of the strings.

- Checking the lengths takes constant time.
- Traversing s takes O(n).
- Traversing t takes O(n).
- Checking all 26 counters takes O(26), which is constant time.
  Therefore, the total time complexity is O(n).
  Space Complexity
  O(1) auxiliary space

The algorithm uses an array of exactly 26 integers, regardless of the input length.

Since the array size does not grow as the strings get longer, the auxiliary space complexity is O(1).
What I Learned
I learned how to check whether two strings are anagrams using a frequency array.

I understood how s[i] - 'a' maps a lowercase character to an array index, how ++ counts characters, and how -- cancels those counts while processing the second string.

I also learned that if every frequency counter returns to zero, both strings contain the same characters with the same frequencies.
LeetCode 242. Valid Anagram
