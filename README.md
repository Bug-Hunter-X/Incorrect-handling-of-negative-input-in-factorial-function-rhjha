# Hack Bug Report: Incorrect handling of negative input

This repository demonstrates a bug in a Hack program that calculates the factorial of a number. The `bar` function does not properly handle negative input values. Instead of throwing an exception, it returns -1, which is not a valid factorial result.

The `bug.hh` file contains the buggy code, and `bugSolution.hh` provides the corrected implementation.

## Bug Description

The `bar` function, intended to calculate the factorial, incorrectly returns -1 when a negative number is passed as input. It should raise an exception because factorials are not defined for negative numbers.

## Solution

The solution involves adding exception handling to the `bar` function. If the input `x` is less than 0, a `ValueError` exception is thrown, ensuring that the program behaves as expected for invalid input.
