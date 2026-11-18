# Introduction to Programming (C++)

**American International University-Bangladesh (AIUB)**
Department of Computer Science, Faculty of Science and Technology


## Practice Problem Set 1: Putting the Tools to Work

**Covers:** variables and data types, arithmetic and type casting, `if` / `else if` / `else`, `switch`, the conditional operator, logical operators, character input

**Status:** ungraded practice. Loops, arrays, strings and functions have not been covered, so none of these problems needs them. Do not use them.

---

## How to Use This Set

1. Read the problem carefully and **decide the logic before you type any code**. A quick flowchart or a few lines of rough notes will save time.
2. Write a complete C++ program that reads from `cin` and writes to `cout`.
3. Do not print prompts such as `Enter a number:`. Print exactly what the problem asks for, in exactly the stated format. Output is compared character by character.
4. Check your program against the sample cases given with each problem.
5. **Passing the samples does not mean your solution is correct.** Each problem will later be run against additional cases that are not shown here. Before you call a problem finished, list the unusual, extreme and borderline inputs you can think of, work out the correct answers by hand, and test them.

The problems become more demanding from Tier 1 to Tier 3. In Tier 3 the first idea that comes to mind will often not be enough.

---

## Tier 1: Tool Check

### Problem 1: Exam Percentage

Read a student's obtained marks and the total marks of an exam. Compute and display the percentage obtained as a decimal number.

**Input**

One line with two integers: `obtained` and `total`.

Constraints: 0 <= obtained <= total, 1 <= total <= 1,000,000.

**Output**

One line: `Percentage: ` followed by the value, printed with the default `cout` formatting (do not use `setprecision`).

**Sample 1**

Input:

```
45 60
```

Output:

```
Percentage: 75
```

**Sample 2**

Input:

```
1 2
```

Output:

```
Percentage: 50
```

---

### Problem 2: Free Ride Eligibility

A metro operator allows free travel for children **under 5 years** and for senior citizens aged **65 years or above**. However, passengers travelling in **premium class** always pay, whatever their age.

Read a passenger's age and class, and display whether the ride is free.

**Input**

One line with two integers: `age` and `premium` (1 if the passenger is in premium class, 0 otherwise).

Constraints: 0 <= age <= 120.

**Output**

`Free` or `Pay`.

**Sample 1**

Input:

```
70 0
```

Output:

```
Free
```

**Sample 2**

Input:

```
30 0
```

Output:

```
Pay
```

**Sample 3**

Input:

```
80 1
```

Output:

```
Pay
```

---

### Problem 3: Character Classifier

Read a single character and classify it as follows:

- `Vowel` if it is one of a, e, i, o, u (in either upper or lower case),
- `Consonant` if it is any other English letter (in either case),
- `Digit` if it is one of the characters 0 to 9,
- `Other` for anything else.

Using a `switch` statement for the vowel test is encouraged.

**Input**

One printable, non-space ASCII character.

**Output**

One word: `Vowel`, `Consonant`, `Digit` or `Other`.

**Sample 1**

Input:

```
e
```

Output:

```
Vowel
```

**Sample 2**

Input:

```
k
```

Output:

```
Consonant
```

**Sample 3**

Input:

```
8
```

Output:

```
Digit
```

**Sample 4**

Input:

```
$
```

Output:

```
Other
```

---

## Tier 2: Applied Problems

### Problem 4: Clock After a Delay

A 24-hour clock shows a given time. After a delay of `duration` minutes, what will the clock show, and how many times will it have passed midnight?

Display the new time as `HH:MM`, using exactly two digits for the hour and for the minute.

**Input**

One line with three integers: `hour`, `minute` and `duration`.

Constraints: 0 <= hour <= 23, 0 <= minute <= 59, 0 <= duration <= 1,000,000.

**Output**

Two lines:

```
HH:MM
Days later: N
```

where `N` is the number of midnights passed.

**Sample 1**

Input:

```
10 20 70
```

Output:

```
11:30
Days later: 0
```

**Sample 2**

Input:

```
22 15 1000
```

Output:

```
14:55
Days later: 1
```

---

### Problem 5: Taxi Fare

A taxi service in Dhaka charges according to the following rules:

- The **first 2000 metres** cost a flat **50 taka**.
- For the distance beyond 2000 m, up to a total of 10,000 m, **15 taka for each kilometre or part of a kilometre**.
- For the distance beyond 10,000 m, **12 taka for each kilometre or part of a kilometre**.
- A ride that starts **at or after 22:00, or before 05:00**, carries a **night surcharge of 20%** of the fare, rounded **down** to a whole taka.

Read the distance and the starting hour, and display the total fare.

**Input**

One line with two integers: `meters` and `hour`.

Constraints: 1 <= meters <= 100,000, 0 <= hour <= 23.

**Output**

One line: `Fare: F taka`.

**Sample 1**

Input:

```
5000 14
```

Output:

```
Fare: 95 taka
```

**Sample 2**

Input:

```
12000 23
```

Output:

```
Fare: 232 taka
```

---

### Problem 6: Date Validator

Read a day, a month and a year and decide whether they form a valid date in the Gregorian calendar.

A date is valid if the year is at least 1, the month is between 1 and 12, and the day is between 1 and the number of days in that month. February has 29 days in a leap year and 28 otherwise. A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.

**Input**

One line with three integers: `day`, `month` and `year`.

Constraints: -1000 <= day, month, year <= 9999.

**Output**

`Valid` or `Invalid`.

**Sample 1**

Input:

```
29 2 2024
```

Output:

```
Valid
```

**Sample 2**

Input:

```
31 4 2025
```

Output:

```
Invalid
```

---

### Problem 7: Three-Digit Analyser

Read a three-digit integer (positive or negative) and report three facts about it:

1. the **sum of its digits** (ignoring the sign),
2. the number obtained by **reversing its digits**, read as an ordinary integer with the original sign kept (leading zeros disappear, so 120 reverses to 21 and -120 reverses to -21),
3. whether the number is a **palindrome**, meaning its digits read the same in both directions.

Solve the problem using arithmetic only. Do not use strings or arrays.

**Input**

One integer `n`.

Constraints: 100 <= |n| <= 999.

**Output**

Three lines:

```
Digit sum: S
Reversed: R
Palindrome: Yes
```

The last line is `Yes` or `No`.

**Sample 1**

Input:

```
123
```

Output:

```
Digit sum: 6
Reversed: 321
Palindrome: No
```

**Sample 2**

Input:

```
202
```

Output:

```
Digit sum: 4
Reversed: 202
Palindrome: Yes
```

---

## Tier 3: Stretch Problems

### Problem 8: Sort Three Numbers

Read three integers. Display them in ascending order, and also report how many **different** values they contain.

Do not use loops, arrays or library sorting functions.

**Input**

One line with three integers `a`, `b` and `c`.

Constraints: -10^9 <= a, b, c <= 10^9.

**Output**

Two lines:

```
x y z
Distinct: k
```

where `x <= y <= z` are the three numbers in order, separated by single spaces, and `k` is 1, 2 or 3.

**Sample 1**

Input:

```
5 2 9
```

Output:

```
2 5 9
Distinct: 3
```

**Sample 2**

Input:

```
7 -1 3
```

Output:

```
-1 3 7
Distinct: 3
```

---

### Problem 9: Day of the Week

Read a valid date and display the day of the week on which it falls, using only arithmetic. You are given one fact: **1 January 2000 was a Saturday.**

The Gregorian leap-year rule applies: a year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.

Hint: count the days between 1 January 2000 and the given date, then use the remainder after dividing by 7. Do not use any library date or time functions.

**Input**

One line with three integers: `day`, `month` and `year`. The date is always valid.

Constraints: 2000 <= year <= 2999.

**Output**

The full English name of the day, for example `Saturday`.

**Sample 1**

Input:

```
1 1 2000
```

Output:

```
Saturday
```

**Sample 2**

Input:

```
15 8 2025
```

Output:

```
Friday
```

---

### Problem 10: Overlapping Rectangles

Two rectangles lie on a grid with their sides parallel to the axes. Each rectangle is described by **two opposite corners, given in any order**. A rectangle may be degenerate (zero width or zero height).

Display the **area of the region the two rectangles have in common**. If they share no area, including the case where they only touch along an edge or at a corner, display 0.

**Input**

Two lines. Each line holds four integers `x1 y1 x2 y2`, the two opposite corners of one rectangle.

Constraints: -1,000,000 <= every coordinate <= 1,000,000.

**Output**

One line: `Overlap area: A`.

**Sample 1**

Input:

```
0 0 4 4
2 2 6 6
```

Output:

```
Overlap area: 4
```

**Sample 2**

Input:

```
0 0 2 2
3 3 5 5
```

Output:

```
Overlap area: 0
```

---

## Before You Submit Anything

- Does the program print **only** what the problem asks for, with the exact wording and spacing?
- Have you tried the smallest and the largest values allowed by the constraints?
- Have you tried values that sit exactly **on** a boundary, and values one step on either side of it?
- Have you tried unusual combinations (zeros, negatives, equal values) wherever the constraints allow them?
- Does any intermediate value become larger than an `int` can hold?
