# Push_swap

Push_swap is a program that accepts a stack of integers and sorts it using the least amount of a limited set of instructions. 

## Learning goals

The project is part of the [Codam](https://www.codam.nl/studying-at-codam) curriculum. 
The main learning goals is to learn about complexity within algorithms and to learn about different options of sorting algorithms.

## Rules

- Integer stack can only contain integers
- These can only be formatted as numbers
- Only two stacks can be used, named 'a' and 'b'
- Only a limited set of instructions are allowed (listed below)

### Allowed instructions
- Swap: 'a or b': swap first two elements of stack
- Swap-Swap: Swap first two elements of both stacks
- Push: 'a or b': take first element of stack and put it on top of other stack
- Rotate: 'a or b': shift up all elements of a stack by 1
- Rotate-rotate: Shifts up both elements of a stack
- Reverse rotate: 'a or b': shifts down all elements of a stack by 1
- Reverse-rotate-rotate: Shifts down all elements of both stacks by 1

## Usage

   ```console
  ./push_swap <integer stack>
  
  ./push_swap 4 3 2 1
   ```
Example:


 ![Example screenshot](/pics/screenshot.png)

### Disclaimer

The entire project is written in accordance with the 42 Network Norm. 
The norm puts readability above everything and can therefore sometimes be limiting in options for writing the most optimal code.
