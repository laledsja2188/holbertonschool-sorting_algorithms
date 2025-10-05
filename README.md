# Holberton School - Sorting Algorithms Project

This project implements various sorting algorithms in C, starting with bubble sort.

## Files

- `sort.h` - Header file containing function prototypes
- `0-bubble_sort.c` - Implementation of bubble sort algorithm
- `0-O` - Big O notation analysis for bubble sort time complexity
- `print_array.c` - Utility function to print arrays
- `0-main.c` - Test main function

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

## Usage

```bash
./bubble
```

## Bubble Sort Algorithm

The bubble sort algorithm works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Time Complexity Analysis (0-O file):
- **Best case**: O(n) - when the array is already sorted
- **Average case**: O(n²) - when elements are in random order
- **Worst case**: O(n²) - when the array is sorted in reverse order

### Space Complexity: O(1) - constant space

## Example Output

```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```