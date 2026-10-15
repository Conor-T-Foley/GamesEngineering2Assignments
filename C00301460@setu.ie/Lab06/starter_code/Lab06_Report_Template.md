# Lab 06 — Report

**Full Name:** 
**Student ID:** 

## Build, test, coverage

```
cmake -S . -B build
cmake --build build --target lab06_tests
./build/lab06_tests --gtest_color=yes

cmake -S . -B build-cov -DCMAKE_CXX_FLAGS="--coverage" \
                        -DCMAKE_EXE_LINKER_FLAGS="--coverage"
cmake --build build-cov --target lab06_tests
./build-cov/lab06_tests
gcov -b -r build-cov/CMakeFiles/discount.dir/src/discount.cpp.gcno > coverage_summary.txt
```

## Coverage criteria

Predicate-coverage rows used:  ____ , ____
Clause-coverage rows used:  ____
Tests reported / passed:  ____ / ____

## Coverage summary (paste the tail of coverage_summary.txt)

```
```

## Report (250-500 words)

Explain the difference between Predicate Coverage and Clause Coverage. Give a pair of rows from the truth table that satisfies Predicate Coverage but not Clause Coverage, and say which clause is left unexercised. Then describe what gcov reported for `discount.cpp`: did your suite reach 100 % line coverage, 100 % branch coverage, or both, and what is the difference between those two numbers?

## Screenshots

* `screenshots/vscode.png`
* `screenshots/terminal.png`
