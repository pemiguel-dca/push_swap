This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves.

## Instructions

**sa** (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

**sb** (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.

**ss** : sa and sb at the same time.

**pa** (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

**pb** (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

**ra** (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.

**rb** (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.

**rr** : ra and rb at the same time.

**rra** (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.

**rrb** (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

**rrr** : rra and rrb at the same time.

## Clone

```bash
git clone https://github.com/pemiguel-dca/push_swap.git
```
When you have cloned the repo, you just need to run ```make``` inside of the 'src' directory.

## Push Swap

To use this program is very simple.
You just call the numbers as parameters, for example:
```bash
./push_swap 10 321 2

output: rra
```

If the numbers that you use as parameters were already organized the program gives the prompt back.

### Errors

The program display the message "Error" when:

- Duplicate numbers.
- Character as parameter.
- Number bigger than INT_MAX (2147483647).

## Radix Sort
The algothim that I used to do this project is called Radix Sort.

This algothim consists in sorting the number by the least significant digit.
Since radix sort only takes account the digit, all numbers must be positive.

You'll see in the 'sort_complex.c' file that I create the function `duplicate_list()` that replicates the actual list but, gets the number by index on the organized array, by doing this I eliminate the negative numbers so I can do the Radix Sort.

Later in that file you'll see that I do the `sort_with_radix()` function to sort the stack, since we only can use 2 stacks in this project seems right to organized the array using the binary.
