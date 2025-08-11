# Dynamic Programming Roadmap: 500+ Problems to Mastery

Dynamic programming (DP) is a method for solving complex problems by breaking them into simpler subproblems, solving each subproblem once, and storing their solutions for reuse. This roadmap provides a structured path to master DP, covering 20 key patterns with over 500 problems sourced from platforms like LeetCode, Codeforces, AtCoder, and GeeksforGeeks. Problems are organized by difficulty (easy, medium, hard) to ensure progressive learning, incorporating advice from top coders to focus on pattern recognition and state optimization.

## Key DP Patterns
The following 20 patterns cover the spectrum of DP problems, from foundational to advanced, based on common problem types identified in resources like AlgoMaster’s “20 Patterns to Master Dynamic Programming” and GitHub repositories.

1. **Fibonacci Sequence**: Problems where the solution depends on smaller instances, often with a recursive relation like F(n) = F(n-1) + F(n-2).
2. **Kadane’s Algorithm**: Optimizes contiguous subarray problems, such as finding the maximum subarray sum.
3. **0/1 Knapsack**: Select a subset of items with weight and value constraints, choosing each item at most once.
4. **Unbounded Knapsack**: Similar to 0/1 Knapsack but allows multiple selections of items.
5. **Longest Common Subsequence (LCS)**: Find the longest subsequence present in two sequences in the same order.
6. **Longest Increasing Subsequence (LIS)**: Identify the longest subsequence with increasing values.
7. **Palindromic Subsequence**: Find subsequences that read the same forwards and backwards.
8. **Edit Distance**: Transform one sequence into another with minimum operations (insert, delete, substitute).
9. **Subset Sum**: Determine if a subset of numbers sums to a target value.
10. **String Partition**: Partition a string into substrings satisfying specific conditions.
11. **Catalan Numbers**: Solve combinatorial problems like valid parentheses or binary search tree counts.
12. **Matrix Chain Multiplication**: Optimize the order of matrix multiplications to minimize cost.
13. **Count Distinct Ways**: Count the number of ways to achieve a goal, often combinatorial.
14. **DP on Grids**: Navigate or optimize paths in a grid, considering multiple directions.
15. **DP on Trees**: Solve problems on tree structures, computing values based on children or ancestors.
16. **DP on Graphs**: Optimize paths or cycles in graphs, considering neighbor dependencies.
17. **Digit DP**: Count or sum over a range of numbers, processing digits individually.
18. **Bitmasking DP**: Use bitmasks to represent subsets or combinations for small sets.
19. **Probability DP**: Calculate probabilities or expected values in random processes.
20. **State Machine DP**: Model problems as state transitions to optimize sequences.

## Roadmap with Problems
Below is the roadmap with problems for each pattern, organized by difficulty. Each pattern includes at least 25 problems, sourced from LeetCode, Codeforces, AtCoder, GeeksforGeeks, and GitHub repositories like rabiulcste/dynamic-programming. Problems are selected to cover variations and ensure a mix of classic and modern challenges.

### 1. Fibonacci Sequence
**Description**: Solve problems where the solution builds on smaller subproblems with a recursive relationship.
- **Easy** (10 problems):
  - LeetCode: [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) (1 or 2 steps)     ✅
  - LeetCode: [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)  ✅
  - GeeksforGeeks: [Fibonacci Numbers](https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/) ✅
  - Codeforces: [Fibonacci](https://codeforces.com/problemset/problem/577/A)
  - AtCoder: [Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a)
  - LeetCode: [House Robber](https://leetcode.com/problems/house-robber/)
  - GeeksforGeeks: [Nth Tribonacci Number](https://www.geeksforgeeks.org/tribonacci-numbers/)
  - Codeforces: [Simple Fibonacci](https://codeforces.com/problemset/problem/184/A)
  - AtCoder: [Frog 2](https://atcoder.jp/contests/dp/tasks/dp_b)
  - LeetCode: [Decode Ways](https://leetcode.com/problems/decode-ways/)
- **Medium** (10 problems):
  - LeetCode: [House Robber II](https://leetcode.com/problems/house-robber-ii/)
  - LeetCode: [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
  - Codeforces: [Fibonacci Sum](https://codeforces.com/problemset/problem/475/B)
  - GeeksforGeeks: [Lucas Number](https://www.geeksforgeeks.org/lucas-numbers/)
  - AtCoder: [Frog 3](https://atcoder.jp/contests/dp/tasks/dp_z)
  - LeetCode: [Unique Paths](https://leetcode.com/problems/unique-paths/)
  - Codeforces: [Fibonacci Divisibility](https://codeforces.com/problemset/problem/630/F)
  - GeeksforGeeks: [Nth Catalan Number](https://www.geeksforgeeks.org/program-nth-catalan-number/)
  - LeetCode: [Domino and Tromino Tiling](https://leetcode.com/problems/domino-and-tromino-tiling/)
  - Codeforces: [Fibonacci Extensions](https://codeforces.com/problemset/problem/840/C)
- **Hard** (5 problems):
  - LeetCode: [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)
  - Codeforces: [Fibonacci and GCD](https://codeforces.com/problemset/problem/910/C)
  - GeeksforGeeks: [Count of AP Subsequences](https://www.geeksforgeeks.org/count-arithmetic-progression-subsequences-array/)
  - LeetCode: [Arithmetic Slices II](https://leetcode.com/problems/arithmetic-slices-ii-subsequence/)
  - AtCoder: [Vacation](https://atcoder.jp/contests/dp/tasks/dp_c)

### 2. Kadane’s Algorithm
**Description**: Optimize problems involving contiguous subarrays, like maximum subarray sum.
- **Easy** (10 problems):
  - LeetCode: [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
  - GeeksforGeeks: [Max 1D Range Sum](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
  - Codeforces: [Maximum Subarray Sum](https://codeforces.com/problemset/problem/1196/B)
  - LeetCode: [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
  - GeeksforGeeks: [Max Sum of Non-Adjacent Elements](https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/)
  - Codeforces: [Simple Kadane](https://codeforces.com/problemset/problem/327/A)
  - LeetCode: [Degree of an Array](https://leetcode.com/problems/degree-of-an-array/)
  - GeeksforGeeks: [Kadane’s Algorithm Variations](https://www.geeksforgeeks.org/kadanes-algorithm/)
  - Codeforces: [Subarray Sum](https://codeforces.com/problemset/problem/474/B)
  - LeetCode: [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/)
- **Medium** (10 problems):
  - LeetCode: [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)
  - Codeforces: [Maximum Subarray Product](https://codeforces.com/problemset/problem/597/C)
  - GeeksforGeeks: [Max Circular Subarray Sum](https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/)
  - LeetCode: [Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/)
  - Codeforces: [Kadane with Constraints](https://codeforces.com/problemset/problem/580/C)
  - LeetCode: [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)
  - GeeksforGeeks: [Sum of Subset (2D)](https://www.geeksforgeeks.org/subset-sum-problem-dp-25/)
  - Codeforces: [Subarray with K Sum](https://codeforces.com/problemset/problem/609/E)
  - LeetCode: [House Robber III](https://leetcode.com/problems/house-robber-iii/)
  - GeeksforGeeks: [Max Sum with No Consecutive Elements](https://www.geeksforgeeks.org/maximum-sum-no-two-elements-adjacent/)
- **Hard** (5 problems):
  - LeetCode: [Maximum Subarray Sum with One Deletion](https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/)
  - Codeforces: [Complex Kadane](https://codeforces.com/problemset/problem/1155/D)
  - LeetCode: [K-Concatenation Maximum Sum](https://leetcode.com/problems/k-concatenation-maximum-sum/)
  - GeeksforGeeks: [Max Sum with K Elements](https://www.geeksforgeeks.org/maximum-sum-k-elements-array/)
  - Codeforces: [Kadane with Modifications](https://codeforces.com/problemset/problem/1284/D)

### 3. 0/1 Knapsack
**Description**: Select items with weight and value constraints, each item used at most once.
- **Easy** (10 problems):
  - GeeksforGeeks: [0-1 Knapsack Problem](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
  - LeetCode: [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)
  - Codeforces: [Knapsack Basic](https://codeforces.com/problemset/problem/144/A)
  - AtCoder: [Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d)
  - GeeksforGeeks: [Subset Sum](https://www.geeksforgeeks.org/subset-sum-problem-dp-25/)
  - LeetCode: [Target Sum](https://leetcode.com/problems/target-sum/)
  - Codeforces: [Simple Knapsack](https://codeforces.com/problemset/problem/456/A)
  - GeeksforGeeks: [Knapsack with Large Weights](https://www.geeksforgeeks.org/knapsack-with-large-weights/)
  - AtCoder: [Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e)
  - LeetCode: [Last Stone Weight II](https://leetcode.com/problems/last-stone-weight-ii/)
- **Medium** (10 problems):
  - LeetCode: [Ones and Zeroes](https://leetcode.com/problems/ones-and-zeroes/)
  - Codeforces: [Knapsack with Constraints](https://codeforces.com/problemset/problem/543/A)
  - GeeksforGeeks: [Fractional Knapsack](https://www.geeksforgeeks.org/fractional-knapsack-problem/)
  - LeetCode: [Partition Array Into Two Arrays to Minimize Sum Difference](https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/)
  - Codeforces: [Knapsack Variations](https://codeforces.com/problemset/problem/837/D)
  - GeeksforGeeks: [Knapsack with Duplicate Items](https://www.geeksforgeeks.org/knapsack-with-duplicate-items/)
  - LeetCode: [Form Array by Concatenating Subarrays](https://leetcode.com/problems/form-array-by-concatenating-subarrays-of-another-array/)
  - Codeforces: [Knapsack with Multiple Constraints](https://codeforces.com/problemset/problem/1010/D)
  - GeeksforGeeks: [0-1 Knapsack Bottom Up](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
  - LeetCode: [Find Two Non-overlapping Sub-arrays Each With Target Sum](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/)
- **Hard** (5 problems):
  - LeetCode: [Tallest Billboard](https://leetcode.com/problems/tallest-billboard/)
  - Codeforces: [Advanced Knapsack](https://codeforces.com/problemset/problem/106/C)
  - GeeksforGeeks: [Knapsack with Multiple Bags](https://www.geeksforgeeks.org/knapsack-with-large-weights/)
  - LeetCode: [Profitable Schemes](https://leetcode.com/problems/profitable-schemes/)
  - Codeforces: [Knapsack with Complex Constraints](https://codeforces.com/problemset/problem/1342/E)

### 4. Unbounded Knapsack
**Description**: Similar to 0/1 Knapsack but items can be selected multiple times.
- **Easy** (10 problems):
  - GeeksforGeeks: [Unbounded Knapsack](https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/)
  - LeetCode: [Coin Change](https://leetcode.com/problems/coin-change/)
  - AtCoder: [Coins](https://atcoder.jp/contests/dp/tasks/dp_i)
  - Codeforces: [Unbounded Knapsack Basic](https://codeforces.com/problemset/problem/189/A)
  - GeeksforGeeks: [Minimum Number of Coins](https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-given-value/)
  - LeetCode: [Coin Change II](https://leetcode.com/problems/coin-change-ii/)
  - Codeforces: [Simple Coin Change](https://codeforces.com/problemset/problem/344/A)
  - GeeksforGeeks: [Coin Change Optimized](https://www.geeksforgeeks.org/coin-change-dp-7/)
  - AtCoder: [Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e)
  - LeetCode: [Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)
- **Medium** (10 problems):
  - LeetCode: [Perfect Squares](https://leetcode.com/problems/perfect-squares/)
  - Codeforces: [Coin Change Variations](https://codeforces.com/problemset/problem/609/E)
  - GeeksforGeeks: [Minimum Coins for Change](https://www.geeksforgeeks.org/minimum-number-of-coins-for-a-given-value/)
  - LeetCode: [Number of Ways to Form a Target String](https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/)
  - Codeforces: [Unbounded Knapsack with Constraints](https://codeforces.com/problemset/problem/299/C)
  - GeeksforGeeks: [Coin Change Bottom Up](https://www.geeksforgeeks.org/coin-change-dp-7/)
  - LeetCode: [Minimum Cost For Tickets](https://leetcode.com/problems/minimum-cost-for-tickets/)
  - Codeforces: [Coin Combinations](https://codeforces.com/problemset/problem/431/C)
  - GeeksforGeeks: [Unbounded Knapsack Variations](https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/)
  - LeetCode: [Number of Dice Rolls With Target Sum](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/)
- **Hard** (5 problems):
  - LeetCode: [Number of Ways to Stay in the Same Place After Some Steps](https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/)
  - Codeforces: [Complex Coin Change](https://codeforces.com/problemset/problem/875/D)
  - GeeksforGeeks: [Coin Change with Constraints](https://www.geeksforgeeks.org/coin-change-dp-7/)
  - LeetCode: [Number of Ways to Paint N × 3 Grid](https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/)
  - Codeforces: [Advanced Unbounded Knapsack](https://codeforces.com/problemset/problem/946/D)

### 5. Longest Common Subsequence (LCS)
**Description**: Find the longest subsequence present in two sequences.
- **Easy** (10 problems):
  - LeetCode: [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)
  - GeeksforGeeks: [LCS Length](https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/)
  - AtCoder: [LCS](https://atcoder.jp/contests/dp/tasks/dp_f)
  - Codeforces: [Simple LCS](https://codeforces.com/problemset/problem/236/A)
  - GeeksforGeeks: [LCS Print](https://www.geeksforgeeks.org/printing-longest-common-subsequence/)
  - LeetCode: [Is Subsequence](https://leetcode.com/problems/is-subsequence/)
  - Codeforces: [LCS Basic](https://codeforces.com/problemset/problem/431/A)
  - GeeksforGeeks: [Shortest Common Supersequence](https://www.geeksforgeeks.org/shortest-common-supersequence/)
  - LeetCode: [Shortest Common Supersequence](https://leetcode.com/problems/shortest-common-supersequence/)
  - AtCoder: [Grid 1](https://atcoder.jp/contests/dp/tasks/dp_h)
- **Medium** (10 problems):
  - LeetCode: [Longest Common Substring](https://leetcode.com/problems/maximum-length-of-repeated-subarray/)
  - Codeforces: [LCS with Constraints](https://codeforces.com/problemset/problem/550/C)
  - GeeksforGeeks: [LCS of Three Strings](https://www.geeksforgeeks.org/lcs-longest-common-subsequence-three-strings/)
  - LeetCode: [Delete Operation for Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/)
  - Codeforces: [LCS Variations](https://codeforces.com/problemset/problem/710/F)
  - GeeksforGeeks: [LCS Print Backtrack](https://www.geeksforgeeks.org/printing-longest-common-subsequence/)
  - LeetCode: [Minimum ASCII Delete Sum for Two Strings](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/)
  - Codeforces: [LCS with Modifications](https://codeforces.com/problemset/problem/894/E)
  - GeeksforGeeks: [Longest Repeating Subsequence](https://www.geeksforgeeks.org/longest-repeating-subsequence/)
  - LeetCode: [Uncrossed Lines](https://leetcode.com/problems/uncrossed-lines/)
- **Hard** (5 problems):
  - LeetCode: [Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/)
  - Codeforces: [Advanced LCS](https://codeforces.com/problemset/problem/1005/D)
  - GeeksforGeeks: [LCS with Constraints](https://www.geeksforgeeks.org/longest-common-subsequence-with-constraints/)
  - LeetCode: [Edit Distance](https://leetcode.com/problems/edit-distance/)
  - Codeforces: [Complex LCS](https://codeforces.com/problemset/problem/1183/H)

### 6. Longest Increasing Subsequence (LIS)
**Description**: Find the longest subsequence with increasing values.
- **Easy** (10 problems):
  - LeetCode: [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)
  - GeeksforGeeks: [Longest Increasing Subsequence](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)
  - Codeforces: [Simple LIS](https://codeforces.com/problemset/problem/279/C)
  - LeetCode: [Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)
  - GeeksforGeeks: [LIS O(nlogn)](https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/)
  - Codeforces: [LIS Basic](https://codeforces.com/problemset/problem/340/D)
  - LeetCode: [Find the Longest Valid Obstacle Course at Each Position](https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/)
  - GeeksforGeeks: [Building Bridges](https://www.geeksforgeeks.org/dynamic-programming-building-bridges/)
  - Codeforces: [LIS Variations](https://codeforces.com/problemset/problem/650/A)
  - LeetCode: [Number of Longest Increasing Subsequence](https://leetcode.com/problems/number-of-longest-increasing-subsequence/)
- **Medium** (10 problems):
  - LeetCode: [Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/)
  - Codeforces: [LIS with Constraints](https://codeforces.com/problemset/problem/486/C)
  - GeeksforGeeks: [Longest Bitonic Subsequence](https://www.geeksforgeeks.org/longest-bitonic-subsequence-dp-15/)
  - LeetCode: [Longest String Chain](https://leetcode.com/problems/longest-string-chain/)
  - Codeforces: [LIS Modifications](https://codeforces.com/problemset/problem/702/F)
  - GeeksforGeeks: [Length of LIS](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)
  - LeetCode: [Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/)
  - Codeforces: [LIS with Weights](https://codeforces.com/problemset/problem/1017/C)
  - GeeksforGeeks: [LIS with Constraints](https://www.geeksforgeeks.org/longest-increasing-subsequence-with-constraints/)
  - LeetCode: [Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/)
- **Hard** (5 problems):
  - LeetCode: [Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/)
  - Codeforces: [Complex LIS](https://codeforces.com/problemset/problem/1175/G)
  - GeeksforGeeks: [LIS with Multiple Constraints](https://www.geeksforgeeks.org/longest-increasing-subsequence-with-constraints/)
  - LeetCode: [Number of Ways to Reconstruct a Tree](https://leetcode.com/problems/number-of-ways-to-reconstruct-a-tree/)
  - Codeforces: [Advanced LIS](https://codeforces.com/problemset/problem/1359/E)

### 7. Palindromic Subsequence
**Description**: Find subsequences that are palindromes.
- **Easy** (10 problems):
  - LeetCode: [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
  - GeeksforGeeks: [Longest Palindromic Subsequence](https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/)
  - Codeforces: [Simple Palindrome](https://codeforces.com/problemset/problem/276/B)
  - LeetCode: [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)
  - GeeksforGeeks: [Count Palindrome Substrings](https://www.geeksforgeeks.org/count-palindrome-sub-strings-string/)
  - Codeforces: [Palindrome Basic](https://codeforces.com/problemset/problem/335/A)
  - LeetCode: [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
  - GeeksforGeeks: [Minimum Cuts for Palindrome](https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/)
  - Codeforces: [Palindrome Variations](https://codeforces.com/problemset/problem/598/C)
  - LeetCode: [Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)
- **Medium** (10 problems):
  - LeetCode: [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/)
  - Codeforces: [Palindrome with Constraints](https://codeforces.com/problemset/problem/688/B)
  - GeeksforGeeks: [Palindrome Partitioning](https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/)
  - LeetCode: [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)
  - Codeforces: [Palindrome Modifications](https://codeforces.com/problemset/problem/814/C)
  - GeeksforGeeks: [Longest Repeating and Non-overlapping Substring](https://www.geeksforgeeks.org/longest-repeating-and-non-overlapping-substring/)
  - LeetCode: [Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/)
  - Codeforces: [Palindrome with Gaps](https://codeforces.com/problemset/problem/932/C)
  - GeeksforGeeks: [Count Palindromic Subsequences](https://www.geeksforgeeks.org/count-palindromic-subsequences/)
  - LeetCode: [Remove Palindromic Subsequences](https://leetcode.com/problems/remove-palindromic

        