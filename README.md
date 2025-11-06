# Push Swap - Stack Sorting Algorithm

Welcome to **Push Swap**, a project where I implemented a sorting algorithm using stacks and a restricted set of operations.  
This project is part of the 42 curriculum and focuses on algorithm design, optimization, and data structure manipulation in C.

## Description

**Push Swap** is a program that sorts a stack of integers in ascending order using a limited set of predefined instructions.  
The goal is to perform the sorting with the **fewest possible number of moves**.  
To achieve this, I implemented two stacks, **A** and **B**, and created functions that manipulate the data between them using only the allowed operations.  
This project helped me understand sorting algorithms, stack operations, and how to optimize code for efficiency and clarity.

## List of Operations

### Swap Operations
- **`sa`**: Swap the first two elements of stack A.  
- **`sb`**: Swap the first two elements of stack B.  
- **`ss`**: Perform both `sa` and `sb` simultaneously.

### Push Operations
- **`pa`**: Push the top element of stack B onto stack A.  
- **`pb`**: Push the top element of stack A onto stack B.

### Rotate Operations
- **`ra`**: Rotate all elements of stack A upwards by one position.  
- **`rb`**: Rotate all elements of stack B upwards by one position.  
- **`rr`**: Perform both `ra` and `rb` simultaneously.

### Reverse Rotate Operations
- **`rra`**: Rotate all elements of stack A downwards by one position.  
- **`rrb`**: Rotate all elements of stack B downwards by one position.  
- **`rrr`**: Perform both `rra` and `rrb` simultaneously.

## Usage

To use the program, compile the source files and run the executable with a list of integers as arguments.  
The program will output the sequence of instructions required to sort the numbers.

### Compilation

```bash
make
```

### Execution Example

```bash
./push_swap 4 67 3 87 23
```

You can count the number of operations using:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

You can also verify the sorting with a checker program if available:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

