# Cricket Performance Analysis

A cricket coach wants to analyze a batsman's performance over the last 10 matches.

Write a C++ program that reads the runs scored in each match and:

- Displays the scores for all 10 matches.
- Identifies the highest and lowest scores, along with their match numbers.
- Counts how many times the batsman scored:
  - A half-century (50–99 runs).
  - A century (100 or more runs).
- Calculates and displays the batting average.
- Displays the form based on the batting average:
  - `Excellent Form` if the average is 50 or more.
  - `Good Form` if the average is between 30 and 49.
  - `Poor Form` if the average is less than 30.

## Sample Input

```text
Enter runs in last 10 matches:
Match 1: 45
Match 2: 102
Match 3: 12
Match 4: 78
Match 5: 35
Match 6: 0
Match 7: 120
Match 8: 56
Match 9: 28
Match 10: 85
```

## Sample Output

```text
Runs of last 10 matches:
Match 1: 45 runs
Match 2: 102 runs
Match 3: 12 runs
Match 4: 78 runs
Match 5: 35 runs
Match 6: 0 runs
Match 7: 120 runs
Match 8: 56 runs
Match 9: 28 runs
Match 10: 85 runs
Highest score: Match 7 (120 runs)
Lowest score: Match 6 (0 runs)
Half-centuries (50-99): 3
Centuries (100+): 2
Batting average: 56.1
Excellent Form
```
