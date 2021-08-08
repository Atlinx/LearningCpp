# Chapter 3 -  Debugging C++ Programs

Mostly about debugging strategy and how to use debuggers.
I didn't really have to write much code.

# Notes

**Syntax Errors** - Errors that prevent the code from compiling

**Semantic Errors** - Errors that allow the program to compile but make the program work in an unintended manner. 

## Debugging Process

1. Identify the problem
2. Find the root cause of the problem
3. Determine how you will fix the problem
4. Apply the fix and retest the program to ensure no more errors

## Debugging Strategies

Inspect your code

Find problems by running your program

Find a way to consistently reproduce the problem

Home in on issues
- Like the game "hi-lo", where a friend tries to guess a number in your head and you respond with either too high, too low, or just right.
- For example, we can eliminate the thought of an issue occurring before a certain point if the code up to that point gives the expected result.
