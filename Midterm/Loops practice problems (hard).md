# Introduction to Programming (C++)

**American International University-Bangladesh (AIUB)**
Department of Computer Science, Faculty of Science and Technology

## About This Set
**A lot of the problems in this set are too difficult for you to solve at this level of knowledge. You are nonetheless encouraged to try to solve these. This will better prepare you for the 1st quiz.**

## Practice Problem Set 2: Classic Problems with Well-Known Solutions

**Covers:** loops, arrays (one- and two-dimensional), strings (`std::string` and C-style `char` arrays), and functions that take values and return a value

**Status:** ungraded practice. Pointers, references, passing arrays to functions, and recursion (apart from Problem 25) are not used in this set.

---

## How to Use This Set

1. **Attempt each problem before reading its solution.** Each problem is followed by a well-known solution, consisting of a short explanation and pseudocode. Cover it with a sheet of paper until you have tried the problem yourself.
2. Start by working out the idea on paper, with a flowchart or a few worked examples.
3. The pseudocode is **not** C++. Translating it into a correct C++ program is part of the exercise.
4. Write a complete program that reads from `cin` and writes to `cout`. Do not print prompts such as `Enter a number:`. Print exactly what the problem asks for, in the stated format.
5. Test your program on the sample cases, and then on cases of your own: the smallest and largest allowed values, boundary values, and unusual combinations. **Passing the samples does not prove that a program is correct.** Your solutions may later be tested on additional cases that are not shown here.

## Reading the Pseudocode

The pseudocode uses plain keywords. Positions in arrays and strings start at **0**, exactly as in C++.

| Notation | Meaning |
|---|---|
| `READ x` | read a value into `x` |
| `PRINT a, b` | display the items one after another, then start a new line |
| `WRITE a` | display `a` and stay on the same line |
| `NEWLINE` | start a new line |
| `x ← expression` | assign the value of the expression to `x` |
| `=`, `≠`, `<`, `≤`, `>`, `≥` | comparisons (`=` tests equality; it is not an assignment) |
| `AND`, `OR`, `NOT` | logical operators |
| `DIV`, `MOD` | integer quotient and remainder |
| `FOR i FROM a TO b` ... `END FOR` | repeat for `i = a, a+1, ..., b` (both ends included) |
| `FOR i FROM a DOWN TO b` ... `END FOR` | repeat for `i = a, a-1, ..., b` |
| `WHILE condition` ... `END WHILE` | repeat while the condition is true |
| `IF` ... `THEN` ... `ELSE IF` ... `ELSE` ... `END IF` | decisions |
| `a[i]`, `m[i][j]`, `s[i]` | array element, matrix element, character of a string |
| `LENGTH(s)` | number of characters in the string `s` |
| `FUNCTION f(x, y) RETURNS type` ... `END FUNCTION` | definition of a function |
| `RETURN value` | leave the function and give back a value |
| `MAIN` ... `END MAIN` | the main program |

## Contents

| # | Problem | Level |
|---|---|---|
| 1 | Factorial of n (using a loop) | Easy |
| 2 | Prime number check | Easy |
| 3 | Fibonacci series | Easy |
| 4 | GCD and LCM | Medium |
| 5 | Reverse a number and palindrome number | Medium |
| 6 | Pyramid pattern | Medium |
| 7 | Maximum and minimum with positions | Easy |
| 8 | Linear search | Easy |
| 9 | Second largest element | Medium |
| 10 | Reverse an array | Medium |
| 11 | Bubble sort | Medium |
| 12 | Matrix: transpose and diagonal sums | Hard |
| 13 | Palindrome phrase | Easy |
| 14 | Count vowels, consonants, digits and spaces | Easy |
| 15 | Reverse a string and reverse the words | Medium |
| 16 | Anagram check | Medium |
| 17 | Caesar cipher | Medium |
| 18 | Length and comparison of two C-style strings | Hard |
| 19 | Primes up to N using isPrime(n) | Easy |
| 20 | Sum of two fractions using gcd() and lcm() | Medium |
| 21 | Power function | Easy |
| 22 | Palindromic words using isPalindrome(string) | Medium |
| 23 | Perfect numbers using isPerfect(n) | Medium |
| 24 | Calculator built from small functions | Hard |
| 25 | Factorial of n (using recursion) | Medium |

---

## Section 1: Loops

Tools needed: `for`, `while`, `do-while`, nested loops, integer arithmetic.

### Problem 1: Factorial of n (using a loop)  (Easy)

The factorial of a non-negative integer n, written n!, is the product of all integers from 1 to n. By definition, 0! = 1.

Read n and display n!. Solve this problem with a loop. (Problem 25 asks for the recursive version.)

**Input**

One integer `n`.

Constraints: 0 <= n <= 20.

**Output**

One line containing n!.

**Sample 1**

Input:

```
5
```

Output:

```
120
```

**Sample 2**

Input:

```
7
```

Output:

```
5040
```

#### Well-known solution

**Idea.** Start with a running product of 1 and multiply it by every integer from 2 up to n. Starting at 1 makes 0! and 1! correct without any special case, because the loop body is never executed for them. Factorials grow very quickly: 13! already exceeds the range of `int`, so the product must be stored in a `long long` (20! is the largest factorial that fits).

**Pseudocode**

```
READ n
result ← 1
FOR i FROM 2 TO n
    result ← result * i
END FOR
PRINT result
```

---

### Problem 2: Prime number check  (Easy)

A prime number is an integer greater than 1 whose only positive divisors are 1 and itself.

Read an integer n and decide whether it is prime. Your program should finish well within a second even when n is close to 10^9.

**Input**

One integer `n`.

Constraints: 1 <= n <= 1,000,000,000.

**Output**

`Prime` or `Not prime`.

**Sample 1**

Input:

```
29
```

Output:

```
Prime
```

**Sample 2**

Input:

```
30
```

Output:

```
Not prime
```

#### Well-known solution

**Idea.** Try to divide n by 2, 3, 4, and so on. If any of them divides n exactly, n is not prime. It is enough to stop once i * i exceeds n: if n = a x b, then at least one of a and b is at most the square root of n, so a divisor beyond that point would already have been found as its partner. Writing the test as `i * i <= n` avoids needing a square-root function. Numbers below 2 are not prime.

**Pseudocode**

```
READ n
isPrime ← (n ≥ 2)
i ← 2
WHILE isPrime AND i * i ≤ n
    IF n MOD i = 0 THEN
        isPrime ← FALSE
    END IF
    i ← i + 1
END WHILE
IF isPrime THEN
    PRINT "Prime"
ELSE
    PRINT "Not prime"
END IF
```

---

### Problem 3: Fibonacci series  (Easy)

The Fibonacci sequence begins 0, 1, and every later term is the sum of the two terms before it: 0, 1, 1, 2, 3, 5, 8, 13, ...

Read n and display the first n terms.

**Input**

One integer `n`.

Constraints: 1 <= n <= 90.

**Output**

One line with the first n terms separated by single spaces (no space after the last term).

**Sample 1**

Input:

```
6
```

Output:

```
0 1 1 2 3 5
```

**Sample 2**

Input:

```
10
```

Output:

```
0 1 1 2 3 5 8 13 21 34
```

#### Well-known solution

**Idea.** Keep two variables: `a`, the current term, and `b`, the next one. Print `a`, then slide the pair forward: the new `b` is `a + b` and the new `a` is the old `b`. Print a space before every term except the first. The 47th term already exceeds the range of `int`, so use `long long`.

**Pseudocode**

```
READ n
a ← 0
b ← 1
FOR i FROM 1 TO n
    IF i > 1 THEN
        WRITE " "
    END IF
    WRITE a
    next ← a + b
    a ← b
    b ← next
END FOR
NEWLINE
```

---

### Problem 4: GCD and LCM  (Medium)

The greatest common divisor (GCD) of two positive integers is the largest integer that divides both. The least common multiple (LCM) is the smallest positive integer that both divide.

Read two positive integers and display their GCD and LCM.

**Input**

One line with two integers `a` and `b`.

Constraints: 1 <= a, b <= 1,000,000,000.

**Output**

Two lines:

```
GCD: g
LCM: l
```

**Sample 1**

Input:

```
12 18
```

Output:

```
GCD: 6
LCM: 36
```

**Sample 2**

Input:

```
17 13
```

Output:

```
GCD: 1
LCM: 221
```

#### Well-known solution

**Idea.** Euclid's algorithm: the GCD of a and b equals the GCD of b and (a MOD b). Repeat this replacement until the remainder becomes 0; the last non-zero value is the GCD. The LCM then follows from the identity LCM = a x b / GCD. Divide before multiplying (`a / g * b`), because a x b can be as large as 10^18; store it in a `long long`.

**Pseudocode**

```
READ a, b
x ← a
y ← b
WHILE y ≠ 0
    r ← x MOD y
    x ← y
    y ← r
END WHILE
g ← x
l ← (a DIV g) * b
PRINT "GCD: ", g
PRINT "LCM: ", l
```

---

### Problem 5: Reverse a number and palindrome number  (Medium)

Read a non-negative integer. Display the number obtained by reversing its digits, and state whether the original number is a palindrome (it reads the same forwards and backwards).

Trailing zeros disappear when a number is reversed: 120 reverses to 21. Solve the problem using arithmetic only (no strings).

**Input**

One integer `n`.

Constraints: 0 <= n <= 1,000,000,000.

**Output**

Two lines:

```
Reversed: R
Palindrome: Yes
```

The second line is `Yes` or `No`.

**Sample 1**

Input:

```
12321
```

Output:

```
Reversed: 12321
Palindrome: Yes
```

**Sample 2**

Input:

```
1234
```

Output:

```
Reversed: 4321
Palindrome: No
```

#### Well-known solution

**Idea.** Peel the last digit off with `MOD 10`, append it to the reversed number by multiplying that number by 10 and adding the digit, and then remove the digit from the original with `DIV 10`. Repeat until nothing is left. The number is a palindrome exactly when the reversed number equals the original. Because the reversed value is built as a number, leading zeros vanish automatically.

**Pseudocode**

```
READ n
rev ← 0
temp ← n
WHILE temp > 0
    digit ← temp MOD 10
    rev ← rev * 10 + digit
    temp ← temp DIV 10
END WHILE
PRINT "Reversed: ", rev
IF rev = n THEN
    PRINT "Palindrome: Yes"
ELSE
    PRINT "Palindrome: No"
END IF
```

---

### Problem 6: Pyramid pattern  (Medium)

Read n and print a pyramid of n rows made of asterisks. Row r (counting from 1) contains 2r - 1 asterisks, positioned so that the pyramid is centred. Do not print trailing spaces.

**Input**

One integer `n`.

Constraints: 1 <= n <= 20.

**Output**

n lines forming the pyramid.

**Sample 1**

Input:

```
3
```

Output:

```
  *
 ***
*****
```

**Sample 2**

Input:

```
4
```

Output:

```
   *
  ***
 *****
*******
```

#### Well-known solution

**Idea.** Use one outer loop for the rows and two inner loops for each row: the first prints the leading spaces, the second prints the asterisks. Row r needs n - r spaces followed by 2r - 1 asterisks. Finish each row with a newline.

**Pseudocode**

```
READ n
FOR row FROM 1 TO n
    FOR s FROM 1 TO n - row
        WRITE " "
    END FOR
    FOR k FROM 1 TO 2 * row - 1
        WRITE "*"
    END FOR
    NEWLINE
END FOR
```

---

## Section 2: Arrays

Tools needed: one-dimensional and two-dimensional arrays declared in `main`, loops. Arrays are not passed to functions in this set.

**Reading an array.** Read `n` first, then read the `n` values in a loop. Declare the array with the largest size allowed by the problem, for example `int a[100];`, and use only the first `n` positions.

### Problem 7: Maximum and minimum with positions  (Easy)

Read n integers into an array. Display the largest value and the smallest value, together with the index (counting from 0) at which each occurs. If a value occurs more than once, report the first index.

**Input**

The first line contains `n`. The second line contains `n` integers.

Constraints: 1 <= n <= 100, each value has absolute value at most 1,000,000,000.

**Output**

Two lines:

```
Maximum: M (index i)
Minimum: m (index j)
```

**Sample 1**

Input:

```
5
3 -9 2 7 -4
```

Output:

```
Maximum: 7 (index 3)
Minimum: -9 (index 1)
```

**Sample 2**

Input:

```
4
-5 12 8 -20
```

Output:

```
Maximum: 12 (index 1)
Minimum: -20 (index 3)
```

#### Well-known solution

**Idea.** Assume the first element is both the maximum and the minimum, then scan the remaining elements. Whenever an element is larger than the current maximum, or smaller than the current minimum, update it. Store the position, not the value: the value can always be read back as `a[position]`. Start from `a[0]`, never from 0, otherwise an array of all negative numbers (or all positive numbers) gives a wrong answer. Using a strict comparison keeps the first occurrence.

**Pseudocode**

```
READ n
FOR i FROM 0 TO n - 1
    READ a[i]
END FOR
maxIdx ← 0
minIdx ← 0
FOR i FROM 1 TO n - 1
    IF a[i] > a[maxIdx] THEN
        maxIdx ← i
    END IF
    IF a[i] < a[minIdx] THEN
        minIdx ← i
    END IF
END FOR
PRINT "Maximum: ", a[maxIdx], " (index ", maxIdx, ")"
PRINT "Minimum: ", a[minIdx], " (index ", minIdx, ")"
```

---

### Problem 8: Linear search  (Easy)

Read an array of n integers and a search value x. Display the index of the first and of the last occurrence of x (counting from 0), or report that x is not in the array.

**Input**

The first line contains `n`. The second line contains `n` integers. The third line contains `x`.

Constraints: 1 <= n <= 100, every value has absolute value at most 1,000,000,000.

**Output**

If x occurs:

```
First index: i
Last index: j
```

Otherwise: `Not found`.

**Sample 1**

Input:

```
5
4 8 2 9 6
9
```

Output:

```
First index: 3
Last index: 3
```

**Sample 2**

Input:

```
5
4 8 2 9 6
5
```

Output:

```
Not found
```

#### Well-known solution

**Idea.** Scan the whole array once. When an element equals x, record its position as `first` only if no earlier match has been recorded, and always record it as `last`. Using -1 as "not yet found" gives a natural test at the end. The loop must not stop at the first match, otherwise `last` cannot be determined.

**Pseudocode**

```
READ n
FOR i FROM 0 TO n - 1
    READ a[i]
END FOR
READ x
first ← -1
last ← -1
FOR i FROM 0 TO n - 1
    IF a[i] = x THEN
        IF first = -1 THEN
            first ← i
        END IF
        last ← i
    END IF
END FOR
IF first = -1 THEN
    PRINT "Not found"
ELSE
    PRINT "First index: ", first
    PRINT "Last index: ", last
END IF
```

---

### Problem 9: Second largest element  (Medium)

Read an array of n integers. Display the second largest distinct value, that is, the largest value that is strictly smaller than the maximum. If all elements are equal, there is no such value.

**Input**

The first line contains `n`. The second line contains `n` integers.

Constraints: 2 <= n <= 100, every value has absolute value at most 1,000,000,000.

**Output**

`Second largest: x`, or `No second largest` if all elements are equal.

**Sample 1**

Input:

```
5
4 9 2 7 1
```

Output:

```
Second largest: 7
```

**Sample 2**

Input:

```
4
10 3 8 6
```

Output:

```
Second largest: 8
```

#### Well-known solution

**Idea.** First find the maximum. Then scan again, looking only at elements that are different from the maximum, and keep the largest of them. A flag `found` records whether any such element exists; this avoids picking an arbitrary starting value for `second`. Skipping every copy of the maximum is what makes the answer correct when the maximum occurs several times.

**Pseudocode**

```
READ n
FOR i FROM 0 TO n - 1
    READ a[i]
END FOR
largest ← a[0]
FOR i FROM 1 TO n - 1
    IF a[i] > largest THEN
        largest ← a[i]
    END IF
END FOR
found ← FALSE
second ← 0
FOR i FROM 0 TO n - 1
    IF a[i] ≠ largest AND (found = FALSE OR a[i] > second) THEN
        second ← a[i]
        found ← TRUE
    END IF
END FOR
IF found THEN
    PRINT "Second largest: ", second
ELSE
    PRINT "No second largest"
END IF
```

---

### Problem 10: Reverse an array  (Medium)

Read an array of n integers and display it in reverse order. Reverse the array itself by swapping elements; do not use a second array.

**Input**

The first line contains `n`. The second line contains `n` integers.

Constraints: 1 <= n <= 100, every value has absolute value at most 1,000,000,000.

**Output**

One line with the reversed array, values separated by single spaces.

**Sample 1**

Input:

```
5
1 2 3 4 5
```

Output:

```
5 4 3 2 1
```

**Sample 2**

Input:

```
4
10 20 30 40
```

Output:

```
40 30 20 10
```

#### Well-known solution

**Idea.** Swap the first element with the last, the second with the second last, and so on, moving towards the middle. Only the first half of the positions need to start a swap: that is `n DIV 2` swaps. Going all the way to n would swap every pair twice and restore the original array. A swap needs a temporary variable. The middle element of an odd-length array stays where it is.

**Pseudocode**

```
READ n
FOR i FROM 0 TO n - 1
    READ a[i]
END FOR
FOR i FROM 0 TO (n DIV 2) - 1
    temp ← a[i]
    a[i] ← a[n - 1 - i]
    a[n - 1 - i] ← temp
END FOR
FOR i FROM 0 TO n - 1
    IF i > 0 THEN
        WRITE " "
    END IF
    WRITE a[i]
END FOR
NEWLINE
```

---

### Problem 11: Bubble sort  (Medium)

Sort n integers in ascending order using bubble sort: repeatedly compare neighbouring elements and swap them when they are in the wrong order. Display the sorted array and the total number of swaps performed.

Swap only when the left element is strictly greater than the right one, so equal elements are never swapped.

**Input**

The first line contains `n`. The second line contains `n` integers.

Constraints: 1 <= n <= 100, every value has absolute value at most 1,000,000,000.

**Output**

Two lines:

```
sorted array separated by single spaces
Swaps: k
```

**Sample 1**

Input:

```
5
5 1 4 2 8
```

Output:

```
1 2 4 5 8
Swaps: 4
```

**Sample 2**

Input:

```
4
9 7 5 3
```

Output:

```
3 5 7 9
Swaps: 6
```

#### Well-known solution

**Idea.** In each pass, compare every pair of neighbours `a[j]` and `a[j+1]` and swap them if `a[j] > a[j+1]`. After the first pass the largest value has moved to the last position, after the second pass the second largest is in place, and so on, so pass number p only has to examine the first `n - 1 - p` pairs. After n - 1 passes the array is sorted. Add 1 to a counter at every swap.

**Pseudocode**

```
READ n
FOR i FROM 0 TO n - 1
    READ a[i]
END FOR
swaps ← 0
FOR pass FROM 0 TO n - 2
    FOR j FROM 0 TO n - 2 - pass
        IF a[j] > a[j + 1] THEN
            temp ← a[j]
            a[j] ← a[j + 1]
            a[j + 1] ← temp
            swaps ← swaps + 1
        END IF
    END FOR
END FOR
FOR i FROM 0 TO n - 1
    IF i > 0 THEN
        WRITE " "
    END IF
    WRITE a[i]
END FOR
NEWLINE
PRINT "Swaps: ", swaps
```

---

### Problem 12: Matrix: transpose and diagonal sums  (Hard)

Read a matrix with r rows and c columns. Display its transpose (the matrix whose rows are the columns of the original). If the matrix is square, also display the sum of the main diagonal (top-left to bottom-right) and of the anti-diagonal (top-right to bottom-left).

**Input**

The first line contains `r` and `c`. The next `r` lines contain `c` integers each.

Constraints: 1 <= r, c <= 10, every value has absolute value at most 1000.

**Output**

```
Transpose:
(c lines, each with r values separated by single spaces)
```

followed by either

```
Main diagonal sum: S
Anti-diagonal sum: T
```

when r = c, or `Not a square matrix` otherwise.

**Sample 1**

Input:

```
2 3
1 2 3
4 5 6
```

Output:

```
Transpose:
1 4
2 5
3 6
Not a square matrix
```

**Sample 2**

Input:

```
3 3
1 2 3
4 5 6
7 8 9
```

Output:

```
Transpose:
1 4 7
2 5 8
3 6 9
Main diagonal sum: 15
Anti-diagonal sum: 15
```

#### Well-known solution

**Idea.** Store the matrix in a two-dimensional array `m[row][column]`. The element in row i and column j of the original becomes the element in row j and column i of the transpose, so print by looping over the columns of the original in the outer loop and the rows in the inner loop. On a square matrix of size n the main diagonal consists of `m[i][i]` and the anti-diagonal of `m[i][n-1-i]`. A diagonal is only defined when the matrix is square.

**Pseudocode**

```
READ r, c
FOR i FROM 0 TO r - 1
    FOR j FROM 0 TO c - 1
        READ m[i][j]
    END FOR
END FOR
PRINT "Transpose:"
FOR j FROM 0 TO c - 1
    FOR i FROM 0 TO r - 1
        IF i > 0 THEN
            WRITE " "
        END IF
        WRITE m[i][j]
    END FOR
    NEWLINE
END FOR
IF r = c THEN
    mainSum ← 0
    antiSum ← 0
    FOR i FROM 0 TO r - 1
        mainSum ← mainSum + m[i][i]
        antiSum ← antiSum + m[i][r - 1 - i]
    END FOR
    PRINT "Main diagonal sum: ", mainSum
    PRINT "Anti-diagonal sum: ", antiSum
ELSE
    PRINT "Not a square matrix"
END IF
```

---

## Section 3: Strings

Tools needed: `std::string`, indexing with `s[i]`, `.length()`, `char` comparisons, and (in Problem 18 only) C-style `char` arrays.

**Hint: reading a whole line.** `cin >> s` stops at the first space. To read a complete line, including any spaces, declare `string s;` and use `getline(cin, s);`. If you read a number with `cin >>` before a `getline`, call `cin.ignore();` in between, because `cin >>` leaves the end-of-line character in the input.

**Hint: C-style strings.** `char word[101]; cin >> word;` reads one word into a character array. The array must be one position longer than the longest possible word, because C++ stores a terminating `'\0'` after the last character.

### Problem 13: Palindrome phrase  (Easy)

A phrase is a palindrome if it reads the same forwards and backwards when only letters and digits are considered and upper-case and lower-case letters are treated as equal. For example, "A man, a plan, a canal: Panama" is a palindrome.

Read one line of text and decide whether it is a palindrome. A line that contains no letters or digits counts as a palindrome.

**Input**

One line of text (it may contain spaces and punctuation).

Constraints: 1 to 200 characters.

**Output**

`Yes` or `No`.

**Sample 1**

Input:

```
level
```

Output:

```
Yes
```

**Sample 2**

Input:

```
hello
```

Output:

```
No
```

#### Well-known solution

**Idea.** Use two positions: `i` at the start of the line and `j` at the end. Move `i` forward past anything that is not a letter or digit, and move `j` backward in the same way. When both point at letters or digits, convert them to the same case and compare; a mismatch means the phrase is not a palindrome. Then move both positions inwards. Stop when the positions meet.

**Pseudocode**

```
READ s                       (the whole line)
i ← 0
j ← LENGTH(s) - 1
palindrome ← TRUE
WHILE palindrome AND i < j
    left ← s[i]
    right ← s[j]
    IF left is not a letter or digit THEN
        i ← i + 1
    ELSE IF right is not a letter or digit THEN
        j ← j - 1
    ELSE
        convert left and right to lower case
        IF left ≠ right THEN
            palindrome ← FALSE
        END IF
        i ← i + 1
        j ← j - 1
    END IF
END WHILE
IF palindrome THEN
    PRINT "Yes"
ELSE
    PRINT "No"
END IF
```

---

### Problem 14: Count vowels, consonants, digits and spaces  (Easy)

Read one line of text and count how many vowels, consonants, digits and spaces it contains. Letters are case-insensitive: `A` and `a` are both vowels. Other characters (punctuation, symbols) are not counted.

**Input**

One line of text. The line may be empty.

Constraints: 0 to 200 characters.

**Output**

Four lines:

```
Vowels: v
Consonants: c
Digits: d
Spaces: s
```

**Sample 1**

Input:

```
hello world 123
```

Output:

```
Vowels: 3
Consonants: 7
Digits: 3
Spaces: 2
```

**Sample 2**

Input:

```
Programming is fun
```

Output:

```
Vowels: 5
Consonants: 11
Digits: 0
Spaces: 2
```

#### Well-known solution

**Idea.** Visit every character of the line once. Convert an upper-case letter to lower case first, so that one set of tests covers both cases. Then test in order: is it one of the five vowels, otherwise is it a letter (so a consonant), otherwise a digit, otherwise a space. Anything else is ignored.

**Pseudocode**

```
READ s                       (the whole line)
vowels ← 0
consonants ← 0
digits ← 0
spaces ← 0
FOR i FROM 0 TO LENGTH(s) - 1
    ch ← s[i]
    IF ch is an upper-case letter THEN
        convert ch to lower case
    END IF
    IF ch is one of 'a', 'e', 'i', 'o', 'u' THEN
        vowels ← vowels + 1
    ELSE IF ch is between 'a' and 'z' THEN
        consonants ← consonants + 1
    ELSE IF ch is between '0' and '9' THEN
        digits ← digits + 1
    ELSE IF ch = ' ' THEN
        spaces ← spaces + 1
    END IF
END FOR
PRINT "Vowels: ", vowels
PRINT "Consonants: ", consonants
PRINT "Digits: ", digits
PRINT "Spaces: ", spaces
```

---

### Problem 15: Reverse a string and reverse the words  (Medium)

Read one sentence. Display (1) the whole sentence reversed character by character, and (2) the sentence with the order of its words reversed, where each word keeps its own spelling.

**Input**

One line of text. Words are separated by exactly one space; there are no leading or trailing spaces.

Constraints: 1 to 200 characters.

**Output**

Two lines:

```
Reversed: ...
Words reversed: ...
```

**Sample 1**

Input:

```
hello
```

Output:

```
Reversed: olleh
Words reversed: hello
```

**Sample 2**

Input:

```
The quick brown fox
```

Output:

```
Reversed: xof nworb kciuq ehT
Words reversed: fox brown quick The
```

#### Well-known solution

**Idea.** For the first output, print the characters from the last position down to position 0. For the second, scan from the end of the line: `end` marks the last character of the word being collected, and `start` moves left until it reaches a space (or runs off the front). The characters between `start + 1` and `end` form one word, which is printed in its normal order. Print a space if another word remains, then continue from just before `start`.

**Pseudocode**

```
READ s                       (the whole line)
n ← LENGTH(s)
WRITE "Reversed: "
FOR i FROM n - 1 DOWN TO 0
    WRITE s[i]
END FOR
NEWLINE
WRITE "Words reversed: "
end ← n - 1
WHILE end ≥ 0
    start ← end
    WHILE start ≥ 0 AND s[start] ≠ ' '
        start ← start - 1
    END WHILE
    FOR k FROM start + 1 TO end
        WRITE s[k]
    END FOR
    IF start > 0 THEN
        WRITE " "
    END IF
    end ← start - 1
END WHILE
NEWLINE
```

---

### Problem 16: Anagram check  (Medium)

Two words are anagrams if one can be formed by rearranging the letters of the other, using every letter exactly once (for example `listen` and `silent`). Read two words and decide whether they are anagrams.

Hint: count how often each letter occurs. A letter `ch` can be mapped to the position `ch - 'a'` in an array of 26 counters.

**Input**

One line with two words separated by whitespace. Each word consists of 1 to 100 lower-case letters (a to z).

**Output**

`Anagrams` or `Not anagrams`.

**Sample 1**

Input:

```
listen silent
```

Output:

```
Anagrams
```

**Sample 2**

Input:

```
hello world
```

Output:

```
Not anagrams
```

#### Well-known solution

**Idea.** If the lengths differ, the words cannot be anagrams. Otherwise keep 26 counters, one per letter. For every position, add 1 to the counter of the letter in the first word and subtract 1 from the counter of the letter in the second word. The words are anagrams exactly when every counter ends at 0, which means each letter occurs equally often in both.

**Pseudocode**

```
READ a, b
anagrams ← (LENGTH(a) = LENGTH(b))
IF anagrams THEN
    FOR i FROM 0 TO 25
        count[i] ← 0
    END FOR
    FOR i FROM 0 TO LENGTH(a) - 1
        count[a[i] - 'a'] ← count[a[i] - 'a'] + 1
        count[b[i] - 'a'] ← count[b[i] - 'a'] - 1
    END FOR
    FOR i FROM 0 TO 25
        IF count[i] ≠ 0 THEN
            anagrams ← FALSE
        END IF
    END FOR
END IF
IF anagrams THEN
    PRINT "Anagrams"
ELSE
    PRINT "Not anagrams"
END IF
```

---

### Problem 17: Caesar cipher  (Medium)

A Caesar cipher encrypts a message by replacing each letter with the letter k positions later in the alphabet, wrapping around from `z` to `a` (and from `Z` to `A`). Upper-case letters stay upper case. Characters that are not letters are left unchanged.

Read a message and a shift k, and display the encrypted message.

Hint: read the message with `getline(cin, message)` so that spaces are included. Read the number k afterwards with `cin >> k`. (If a number has to be read before a line, call `cin.ignore()` first, because `cin >>` leaves the end-of-line character in the input.)

**Input**

The first line contains the message (1 to 200 characters). The second line contains the integer `k`.

Constraints: 0 <= k <= 1000.

**Output**

The encrypted message on one line.

**Sample 1**

Input:

```
Hello, World!
3
```

Output:

```
Khoor, Zruog!
```

**Sample 2**

Input:

```
Abc Def
1
```

Output:

```
Bcd Efg
```

#### Well-known solution

**Idea.** Handle each character on its own. For a lower-case letter, compute its position in the alphabet (`ch - 'a'`), add k, take the remainder modulo 26 so the result wraps around, and convert back by adding `'a'`. Upper-case letters work the same way with `'A'`. Everything else is printed unchanged. Because the alphabet repeats every 26 letters, any shift larger than 25 behaves like a smaller one, and the `MOD 26` handles that automatically.

**Pseudocode**

```
READ message                 (the whole line)
READ k
k ← k MOD 26
FOR i FROM 0 TO LENGTH(message) - 1
    ch ← message[i]
    IF ch is between 'a' and 'z' THEN
        ch ← ((ch - 'a' + k) MOD 26) + 'a'
    ELSE IF ch is between 'A' and 'Z' THEN
        ch ← ((ch - 'A' + k) MOD 26) + 'A'
    END IF
    WRITE ch
END FOR
NEWLINE
```

---

### Problem 18: Length and comparison of two C-style strings  (Hard)

Using C-style character arrays (`char word[101];`) and without calling any library string function (`strlen`, `strcmp`, ...), read two words, determine the length of each, and compare them in alphabetical (ASCII) order.

Hint: a C-style string ends with the character `'\0'`, whose code is 0.

**Input**

One line with two words separated by whitespace. Each word has 1 to 100 characters and contains no spaces.

**Output**

Three lines:

```
Length of first: x
Length of second: y
Equal
```

The third line is `Equal`, `First is smaller` or `First is greater`.

**Sample 1**

Input:

```
apple apple
```

Output:

```
Length of first: 5
Length of second: 5
Equal
```

**Sample 2**

Input:

```
apple banana
```

Output:

```
Length of first: 5
Length of second: 6
First is smaller
```

#### Well-known solution

**Idea.** The length of a word is the number of characters before the terminating `'\0'`. To compare, move forward while both words still have characters and those characters are equal. At the first position where they stop being equal, compare the two characters: the smaller character code decides which word is smaller. If one word ends first, its `'\0'` (code 0) is smaller than any visible character, so a word that is a prefix of the other is automatically the smaller one. If both reach `'\0'` together, the words are equal.

**Pseudocode**

```
READ a, b                    (character arrays ending with '\0')
lengthA ← 0
WHILE a[lengthA] ≠ '\0'
    lengthA ← lengthA + 1
END WHILE
lengthB ← 0
WHILE b[lengthB] ≠ '\0'
    lengthB ← lengthB + 1
END WHILE
i ← 0
WHILE a[i] ≠ '\0' AND b[i] ≠ '\0' AND a[i] = b[i]
    i ← i + 1
END WHILE
PRINT "Length of first: ", lengthA
PRINT "Length of second: ", lengthB
IF a[i] = b[i] THEN
    PRINT "Equal"
ELSE IF a[i] < b[i] THEN
    PRINT "First is smaller"
ELSE
    PRINT "First is greater"
END IF
```

---

## Section 4: Functions

Tools needed: functions that take parameters by value and return one value. Recursion is used for Problem 25 only.

**Reminder.** Define each function above `main` (or declare it first). Parameters are passed by value, so a function never changes the caller's variables.

### Problem 19: Primes up to N using isPrime(n)  (Easy)

Write a function `bool isPrime(int n)` that returns `true` if n is prime. Use it to display all prime numbers from 2 to N and how many there are.

**Input**

One integer `N`.

Constraints: 2 <= N <= 10,000.

**Output**

Two lines:

```
the primes separated by single spaces
Count: k
```

**Sample 1**

Input:

```
10
```

Output:

```
2 3 5 7
Count: 4
```

**Sample 2**

Input:

```
30
```

Output:

```
2 3 5 7 11 13 17 19 23 29
Count: 10
```

#### Well-known solution

**Idea.** Move the primality test from Problem 2 into a function, which keeps `main` short and lets the test be reused. The function returns `false` at once for numbers below 2 and also as soon as it finds a divisor; if the loop ends without finding one, it returns `true`. The caller simply loops over 2, 3, ..., N and prints the numbers for which the function returns `true`.

**Pseudocode**

```
FUNCTION isPrime(n) RETURNS boolean
    IF n < 2 THEN
        RETURN FALSE
    END IF
    i ← 2
    WHILE i * i ≤ n
        IF n MOD i = 0 THEN
            RETURN FALSE
        END IF
        i ← i + 1
    END WHILE
    RETURN TRUE
END FUNCTION

MAIN
    READ N
    count ← 0
    FOR i FROM 2 TO N
        IF isPrime(i) THEN
            IF count > 0 THEN
                WRITE " "
            END IF
            WRITE i
            count ← count + 1
        END IF
    END FOR
    NEWLINE
    PRINT "Count: ", count
END MAIN
```

---

### Problem 20: Sum of two fractions using gcd() and lcm()  (Medium)

Write the functions `gcd(a, b)` and `lcm(a, b)`, each taking two values and returning one value. Use them to add the fractions a/b and c/d and display the result in lowest terms.

Note: if your compiler reports a name clash with a library function, rename your functions (for example `myGcd` and `myLcm`).

**Input**

One line with four integers `a`, `b`, `c` and `d`, representing a/b + c/d.

Constraints: 1 <= a, b, c, d <= 10,000.

**Output**

One line: `Sum: p/q`, where p/q is in lowest terms (if q is 1, it is still printed, for example `1/1`).

**Sample 1**

Input:

```
1 2 1 3
```

Output:

```
Sum: 5/6
```

**Sample 2**

Input:

```
2 3 1 4
```

Output:

```
Sum: 11/12
```

#### Well-known solution

**Idea.** Bring both fractions to the common denominator `lcm(b, d)`. The numerator becomes `a * (den / b) + c * (den / d)`. The result may still share factors, so divide numerator and denominator by their GCD. `gcd` uses Euclid's algorithm (Problem 4) and `lcm` is `a / gcd(a, b) * b`. Writing the two small functions makes `main` read like the arithmetic it performs.

**Pseudocode**

```
FUNCTION gcd(a, b) RETURNS integer
    WHILE b ≠ 0
        r ← a MOD b
        a ← b
        b ← r
    END WHILE
    RETURN a
END FUNCTION

FUNCTION lcm(a, b) RETURNS integer
    RETURN (a DIV gcd(a, b)) * b
END FUNCTION

MAIN
    READ a, b, c, d
    den ← lcm(b, d)
    num ← a * (den DIV b) + c * (den DIV d)
    g ← gcd(num, den)
    PRINT "Sum: ", num DIV g, "/", den DIV g
END MAIN
```

---

### Problem 21: Power function  (Easy)

Write a function `power(base, exp)` that returns `base` raised to the power `exp`, without using any library function. By convention, any number raised to the power 0 is 1, including 0.

Read a base and an exponent, and display the result.

**Input**

One line with two integers `base` and `exp`.

Constraints: -10 <= base <= 10, 0 <= exp <= 18.

**Output**

One line: `Result: r`.

**Sample 1**

Input:

```
2 10
```

Output:

```
Result: 1024
```

**Sample 2**

Input:

```
3 4
```

Output:

```
Result: 81
```

#### Well-known solution

**Idea.** Start with a result of 1 and multiply it by `base` exactly `exp` times. With `exp = 0` the loop does not run and the answer is 1, as required. The result can be as large as 10^18, so both the parameter and the return type should be `long long`.

**Pseudocode**

```
FUNCTION power(base, exp) RETURNS integer
    result ← 1
    FOR i FROM 1 TO exp
        result ← result * base
    END FOR
    RETURN result
END FUNCTION

MAIN
    READ base, exp
    PRINT "Result: ", power(base, exp)
END MAIN
```

---

### Problem 22: Palindromic words using isPalindrome(string)  (Medium)

Write a function `bool isPalindrome(string s)` that returns `true` if `s` reads the same forwards and backwards. The test is case-sensitive: `Level` is not a palindrome.

Read k words, display for each whether it is a palindrome, and finally display how many palindromes there were.

**Input**

The first line contains `k`. The following input contains `k` words separated by whitespace. Each word has 1 to 50 characters and contains no spaces.

Constraints: 1 <= k <= 20.

**Output**

One line per word, in input order:

```
word: Yes
```

(`Yes` or `No`), followed by a final line `Palindromic words: c`.

**Sample 1**

Input:

```
3
madam hello level
```

Output:

```
madam: Yes
hello: No
level: Yes
Palindromic words: 2
```

**Sample 2**

Input:

```
2
ab aba
```

Output:

```
ab: No
aba: Yes
Palindromic words: 1
```

#### Well-known solution

**Idea.** The function compares the first and last character, then the second and the second last, and so on, using two positions that move towards each other. As soon as a pair differs it returns `false`; if the positions meet without a difference it returns `true`. The caller reads one word at a time in a loop, calls the function, and keeps a count of the `true` results. Passing the string by value is fine here because the function only reads it.

**Pseudocode**

```
FUNCTION isPalindrome(s) RETURNS boolean
    i ← 0
    j ← LENGTH(s) - 1
    WHILE i < j
        IF s[i] ≠ s[j] THEN
            RETURN FALSE
        END IF
        i ← i + 1
        j ← j - 1
    END WHILE
    RETURN TRUE
END FUNCTION

MAIN
    READ k
    count ← 0
    FOR w FROM 1 TO k
        READ word
        IF isPalindrome(word) THEN
            PRINT word, ": Yes"
            count ← count + 1
        ELSE
            PRINT word, ": No"
        END IF
    END FOR
    PRINT "Palindromic words: ", count
END MAIN
```

---

### Problem 23: Perfect numbers using isPerfect(n)  (Medium)

A positive integer is perfect if it equals the sum of its proper divisors, that is, all its positive divisors except the number itself. For example, 6 is perfect because 1 + 2 + 3 = 6.

Write a function `bool isPerfect(int n)` and use it to display all perfect numbers from 1 to N.

**Input**

One integer `N`.

Constraints: 6 <= N <= 10,000.

**Output**

Two lines:

```
the perfect numbers separated by single spaces
Count: c
```

**Sample 1**

Input:

```
30
```

Output:

```
6 28
Count: 2
```

**Sample 2**

Input:

```
500
```

Output:

```
6 28 496
Count: 3
```

#### Well-known solution

**Idea.** The function adds up every divisor of n that is smaller than n and compares the sum with n. A proper divisor of n is never larger than `n DIV 2`, so the loop only has to run up to that point. For n = 1 the sum is 0, so 1 is correctly not perfect. The caller tests every number from 1 to N and prints those for which the function returns `true`.

**Pseudocode**

```
FUNCTION isPerfect(n) RETURNS boolean
    sum ← 0
    FOR i FROM 1 TO n DIV 2
        IF n MOD i = 0 THEN
            sum ← sum + i
        END IF
    END FOR
    RETURN sum = n
END FUNCTION

MAIN
    READ N
    count ← 0
    FOR i FROM 1 TO N
        IF isPerfect(i) THEN
            IF count > 0 THEN
                WRITE " "
            END IF
            WRITE i
            count ← count + 1
        END IF
    END FOR
    NEWLINE
    PRINT "Count: ", count
END MAIN
```

---

### Problem 24: Calculator built from small functions  (Hard)

Write five functions, `add`, `subtract`, `multiply`, `divide` and `modulo`, each taking two `long long` values and returning one `long long` value. Then process q calculator operations, using the functions to compute the results.

Division and remainder follow C++ rules (the quotient is truncated towards zero). An attempt to divide, or to take a remainder, by zero must not be computed; print an error message instead.

**Input**

The first line contains `q`. Each of the next `q` lines contains an operator and two integers: `op a b`, where `op` is one of `+`, `-`, `*`, `/`, `%`.

Constraints: 1 <= q <= 20, the absolute value of a and b is at most 1,000,000,000.

**Output**

One line per operation, in order: `Result: x`, or `Error: division by zero` when `op` is `/` or `%` and `b` is 0.

**Sample 1**

Input:

```
3
+ 12 5
* 6 7
- 4 10
```

Output:

```
Result: 17
Result: 42
Result: -6
```

**Sample 2**

Input:

```
2
/ 17 5
% 17 5
```

Output:

```
Result: 3
Result: 2
```

#### Well-known solution

**Idea.** Each operation becomes a one-line function, so `main` only has to decide which function to call. Read the operator as a `char` and choose the function with an `if / else if` chain (or a `switch`). Check for a zero divisor before calling `divide` or `modulo`. A product of two numbers up to 10^9 can reach 10^18, so all values and return types are `long long`.

**Pseudocode**

```
FUNCTION add(a, b) RETURNS integer
    RETURN a + b
END FUNCTION

FUNCTION subtract(a, b) RETURNS integer
    RETURN a - b
END FUNCTION

FUNCTION multiply(a, b) RETURNS integer
    RETURN a * b
END FUNCTION

FUNCTION divide(a, b) RETURNS integer
    RETURN a DIV b
END FUNCTION

FUNCTION modulo(a, b) RETURNS integer
    RETURN a MOD b
END FUNCTION

MAIN
    READ q
    FOR i FROM 1 TO q
        READ op, a, b
        IF (op = '/' OR op = '%') AND b = 0 THEN
            PRINT "Error: division by zero"
        ELSE IF op = '+' THEN
            PRINT "Result: ", add(a, b)
        ELSE IF op = '-' THEN
            PRINT "Result: ", subtract(a, b)
        ELSE IF op = '*' THEN
            PRINT "Result: ", multiply(a, b)
        ELSE IF op = '/' THEN
            PRINT "Result: ", divide(a, b)
        ELSE
            PRINT "Result: ", modulo(a, b)
        END IF
    END FOR
END MAIN
```

---

### Problem 25: Factorial of n (using recursion)  (Medium)

A function is recursive if it calls itself. The factorial has a recursive definition: n! = n x (n - 1)! for n greater than 1, and 0! = 1! = 1.

Write a recursive function `factorial(n)` that returns n!, and use it to read n and display n!. Compare your solution with the loop version in Problem 1.

**Input**

One integer `n`.

Constraints: 0 <= n <= 20.

**Output**

One line containing n!.

**Sample 1**

Input:

```
5
```

Output:

```
120
```

**Sample 2**

Input:

```
10
```

Output:

```
3628800
```

#### Well-known solution

**Idea.** Every recursive function needs a base case that stops the recursion and a recursive case that moves towards it. Here the base case is n <= 1, which returns 1; this also covers 0! correctly. Otherwise the function returns `n * factorial(n - 1)`, which calls itself with a smaller argument. For example, `factorial(4)` becomes 4 x factorial(3), then 4 x 3 x factorial(2), then 4 x 3 x 2 x factorial(1), and finally 4 x 3 x 2 x 1 = 24. The return type is `long long`, as in Problem 1.

**Pseudocode**

```
FUNCTION factorial(n) RETURNS integer
    IF n ≤ 1 THEN
        RETURN 1
    END IF
    RETURN n * factorial(n - 1)
END FUNCTION

MAIN
    READ n
    PRINT factorial(n)
END MAIN
```

---

## Before You Move On

- Does your program print **only** what the problem asks for, with the exact wording and spacing?
- Have you tried the smallest and the largest allowed inputs?
- Have you tried values on and around every boundary, as well as zero, negative, equal and repeated values where the constraints allow them?
- Can any intermediate result become larger than an `int` can hold?
- For loops and arrays: could any index be one too small or one too large?
