# [Largest Odd Number in a String](https://takeuforward.org/plus/dsa/problems/largest-odd-number-in-a-string?subject=dsa&category=beginner-problem&subcategory=basic-strings&approach=optimal&tab=submissions)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a string **s** , representing a large integer, the task is to return the largest-valued **odd** **integer** (as a string) that is a **substring** of the given string s.

The number returned should **not** have leading **zero's** . But the given input string may have leading zero. (If no odd number is found, then return empty string.)

### Example 1

<p>

**Input:** s = "5347"</p><p>

**Output:** "5347"</p><p>

**Explanation:** </p>The odd numbers formed by given strings are --> 5, 3, 53, 347, 5347.

So the largest among all the possible odd numbers for given string is 5347.

### Example 2

<p>

**Input:** s = "0214638"</p><p>

**Output:** "21463"</p><p>

**Explanation:** </p>The different odd numbers that can be formed by the given string are --> 1, 3, 21, 63, 463, 1463, 21463.

We cannot include 021463 as the number contains leading zero.

So largest odd number in given string is 21463.

### Constraints

- 1 <= s.length <= 10^3
- '0' <= s[i] <= '9'

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
