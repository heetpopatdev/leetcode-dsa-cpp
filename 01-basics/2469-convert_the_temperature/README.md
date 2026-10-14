# LeetCode 2469 — Convert the Temperature

- **Difficulty:** Easy
- **Language:** C++
- **Topics:** Variables, arithmetic operations, functions, vectors

## Problem

Given a temperature in Celsius, convert it into Kelvin and Fahrenheit.

Return a vector containing the temperatures in this order:

1. Kelvin
2. Fahrenheit

## Approach

1. Receive the temperature in Celsius.
2. Calculate Kelvin using `celsius + 273.15`.
3. Calculate Fahrenheit using `celsius * 1.80 + 32.00`.
4. Store both results in a vector in the required order.
5. Return the vector.

## Example

**Input:** `celsius = 36.50`

**Output:** `[309.65000, 97.70000]`

**Explanation:**

- Kelvin = `36.50 + 273.15 = 309.65`
- Fahrenheit = `(36.50 * 1.80) + 32.00 = 97.70`

## Complexity

- **Time:** O(1) — a fixed number of arithmetic operations.
- **Auxiliary Space:** O(1) — a fixed number of variables. The returned vector contains exactly two elements.

## LeetCode

https://leetcode.com/problems/convert-the-temperature/
