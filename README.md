# Pushswap

This project involves sorting a stack of integers using specific instructions. Here are the details of the project:

## Description
The goal of this project is to implement a sorting algorithm to sort a stack of integers. The program `push_swap` takes as an argument the stack `a` formatted as a list of integers. The first argument should be at the top of the stack.

The program must display the smallest list of instructions possible to sort the stack `a`, with the smallest number being at the top. The instructions must be separated by a newline character.

The following operations are available to manipulate the stack:
- `sa`: Swap the first 2 elements at the top of stack `a`.
- `sb`: Swap the first 2 elements at the top of stack `b`.
- `ss`: `sa` and `sb` at the same time.
- `pa`: Take the first element at the top of stack `b` and put it at the top of stack `a`.
- `pb`: Take the first element at the top of stack `a` and put it at the top of stack `b`.
- `ra`: Rotate up all elements of stack `a` by 1. The first element becomes the last one.
- `rb`: Rotate up all elements of stack `b` by 1. The first element becomes the last one.
- `rr`: `ra` and `rb` at the same time.
- `rra`: Reverse rotate down all elements of stack `a` by 1. The last element becomes the first one.
- `rrb`: Reverse rotate down all elements of stack `b` by 1. The last element becomes the first one.
- `rrr`: `rra` and `rrb` at the same time.

The program should handle the following cases:
- Display "Error" followed by a newline on the standard error in case of errors such as non-integer arguments, arguments bigger than an integer, or duplicate arguments.
- If no parameters are specified, the program must not display anything and give the prompt back.

## Usage
To compile the `push_swap` program, run the following command:
```
make
```

To sort the stack, run the `push_swap` program with a list of integers as arguments:
```
./push_swap 2 1 3 6 5 8
```

The program will display the smallest list of instructions to sort the stack.
