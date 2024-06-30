# Calculator

This is a simple console-based calculator implemented in C++. It provides a variety of mathematical operations, including addition, subtraction, multiplication, division, square root, factorial, exponential, percentage, combination, and permutation.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Square Root
- Factorial
- Exponential
- Percentage
- Combination
- Permutation

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- C++ standard library

### Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/your-username/console-calculator.git
```

## Usage

To use the calculator, follow these steps:

1. Enter the number corresponding to the desired operation from the menu.
2. Depending on the operation chosen:
   - For addition, subtraction, multiplication, division, percentage, combination, and permutation:
     - Enter the first number.
     - Enter the second number (where applicable).
   - For square root, factorial, and exponential:
     - Enter the number to operate on.
3. The result of the calculation will be displayed.

## Functions

- `addition(int n1, int n2)` - Returns the sum of `n1` and `n2`.
- `subtraction(int n1, int n2)` - Returns the difference between `n1` and `n2`.
- `multiplication(int n1, int n2)` - Returns the product of `n1` and `n2`.
- `division(int n1, int n2)` - Returns the quotient of `n1` divided by `n2`. Prompts for remainder if needed.
- `squareroot(int n1)` - Returns the square root of `n1`.
- `factorial(int n1)` - Returns the factorial of `n1`.
- `exponential(int n1)` - Returns `n1` raised to the power of the user-provided exponent.
- `percentage(int n1, int n2)` - Returns the percentage of `n1` with respect to `n2`.
- `combination(int n, int r)` - Returns the combination of `n` and `r`.
- `permutation(int n, int r)` - Returns the permutation of `n` and `r`.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- Inspired by basic calculator implementations.
- Uses standard C++ libraries for mathematical operations.
