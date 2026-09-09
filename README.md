# Programming Effective Algorithms

Solutions for laboratory assignments and independent algorithm exercises.

## Repository structure

```text
lab1/
├── README.md
├── task1.cpp
├── task2.cpp
└── task3.cpp
```

Each task is a standalone C++ program. Input is read from standard input and
the result is written to standard output.

## Building a task

The solutions require C++17 or newer. From the repository root, compile and
run a task with:

```bash
g++ -std=c++17 -O2 -Wall -Wextra lab1/task1.cpp -o task1
./task1
```

Replace `task1.cpp` and `task1` with the task you want to run.

Compiled binaries and other generated files are excluded by `.gitignore`.
