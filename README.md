# CIS-165 Lab 3

*Name:* Theo Douma *Section:* CIS-165-W099

---

## Initial Plans

* **diamond.cpp:** I will use `cout` statements with exact spaces and asterisks to reproduce the required seven-line diamond pattern without using loops or user input.
* **game_time.cpp:** I will store Level 1 (78 minutes) and Level 2 (144 minutes) in named variables, use integer division (`/`) and the remainder operator (`%`) to calculate hours and remaining minutes for each level and their difference, store each result in a variable, and display them clearly with labels.

---

## Run Instructions

1. Go to onlinegdb.com (C++).
2. Paste the code from either file into the editor.
3. Click "Run" at the top to see the output.

---

## Test Table

| Program/test | Values or pattern checked | Expected result before running | Actual output | Match or correction |
| --- | --- | --- | --- | --- |
| diamond.cpp | Seven required lines | Matches exact spacing and stars: 3 spaces, 1 star; 2 spaces, 3 stars; 1 space, 5 stars; 0 spaces, 7 stars; 1 space, 5 stars; 2 spaces, 3 stars; 3 spaces, 1 star | Exact seven-line diamond pattern | Yes |
| game_time.cpp — assigned values | 78 and 144 minutes | Level 1: 1 hour, 18 minutes; Level 2: 2 hours, 24 minutes; Difference: 1 hour, 6 minutes | Level 1 time: 1 hours and 18 minutes<br>Level 2 time: 2 hours and 24 minutes<br>Difference time: 1 hours and 6 minutes | Yes |
| game_time.cpp — changed values | 90 and 200 minutes | Level 1: 1 hour, 30 minutes; Level 2: 3 hours, 20 minutes; Difference: 1 hour, 50 minutes | Level 1 time: 1 hours and 30 minutes<br>Level 2 time: 3 hours and 20 minutes<br>Difference time: 1 hours and 50 minutes | Yes |


---

## Explanations

* **diamond.cpp:** I created the shape by counting and placing the required leading spaces and asterisks inside individual output statements for each line, verifying the alignment visually against the prompt.
* **game_time.cpp:** I used integer division (`total_minutes / 60`) to extract the whole number of hours and the remainder operator (`total_minutes % 60`) to find the leftover minutes.
* **Variable storage:** I stored all calculations in dedicated result variables before passing them to `cout` to make the code cleaner, easier to read, and structured for potential reuse.
