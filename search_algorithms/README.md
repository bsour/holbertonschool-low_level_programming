# C - Search Algorithms

This project provides implementations of two common search algorithms: linear search and binary search. The search algorithms are implemented in the C programming language.

## Linear Search

Linear search, also known as sequential search, is a simple search algorithm that iterates through the elements of a collection one by one until the target value is found or the entire collection is traversed. It is applicable to both sorted and unsorted arrays.

### Function Signature

```c
int linear_search(int *array, size_t size, int value);
```

- `array`: Pointer to the first element of the array to search in.
- `size`: Number of elements in the array.
- `value`: Value to search for.

### Return Value

- The function returns the index of the first occurrence of the target value in the array.
- If the value is not present in the array or the array is NULL, the function returns -1.

## Binary Search

Binary search is a more efficient search algorithm that operates on sorted collections. It repeatedly divides the search interval in half and narrows down the search range by comparing the middle element with the target value. It requires the collection to be sorted in ascending order.

### Function Signature

```c
int binary_search(int *array, size_t size, int value);
```

- `array`: Pointer to the first element of the sorted array to search in.
- `size`: Number of elements in the array.
- `value`: Value to search for.

### Return Value

- The function returns the index of the target value in the array.
- If the value is not present in the array or the array is NULL, the function returns -1.

## Getting Started

To use the search algorithms implemented in this project, follow these steps:

1. Clone the repository:

   ```bash
   git clone <repository-url>
   ```

2. Navigate to the project directory:

   ```bash
   cd search_algorithms
   ```

3. Include the header file `search_algos.h` in your source code:

   ```c
   #include "search_algos.h"
   ```

4. Compile your code with the provided source files:

   ```bash
   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <your-file.c> <algorithm-file.c> -o <output-file>
   ```

   Replace `<your-file.c>` with the name of your source file, `<algorithm-file.c>` with the name of the algorithm file (`0-linear.c` or `1-binary.c`), and `<output-file>` with the desired name for the compiled output.

5. Run the compiled executable:

   ```bash
   ./<output-file>
   ```

   Replace `<output-file>` with the name you provided in the compilation step.

Feel free to modify the provided examples or create your own arrays to test different scenarios and explore the behavior of these search algorithms.

---
