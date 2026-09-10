# [Rotate String](https://takeuforward.org/plus/dsa/problems/rotate-string?subject=dsa&approach=optimal&sidebar=open&tab=submissions)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given two strings **s** and **goal** , return **true** if and only if s can become goal after some number of shifts on s.

A **shift** on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

### Example 1

<p>

**Input:** s = "abcde" , goal = "cdeab"</p><p>

**Output:** true</p><p>

**Explanation:** </p>After performing 2 shifts we can achieve the goal string from string s.

After first shift the string s is => bcdea

After second shift the string s is => cdeab.

### Example 2

<p>

**Input:** s = "abcde" , goal = "adeac"</p><p>

**Output:** false</p><p>

**Explanation:** </p>Any number of shift operations cannot convert string s to string goal.

### Constraints

- 1 <= s.length <= 100
- 1 <= goal.length <= 100
- s and goal consist of only lowercase English letters.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
