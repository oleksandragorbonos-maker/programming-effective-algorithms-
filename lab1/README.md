# Lab 1

The first laboratory work contains three independent C++17 solutions.

| File | Purpose |
| --- | --- |
| `task1.cpp` | Counts sentence endings marked by `.`, `!`, or `?`. Consecutive punctuation marks count as one ending. |
| `task2.cpp` | Answers color-frequency queries in a sorted sequence using `equal_range`. |
| `task3.cpp` | Calculates the task result from `n`, `m`, and the type flag. |

## Running a task

Compile a solution from the repository root:

```bash
g++ -std=c++17 -O2 -Wall -Wextra lab1/task2.cpp -o task2
./task2
```

Input examples and exact constraints should be taken from the corresponding
assignment statement.
