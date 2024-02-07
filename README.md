# Competitive Programming Template
![Codeforces Logo](https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg](https://cdn.iconscout.com/icon/free/png-256/free-code-forces-3628695-3029920.png)](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b1/Codeforces_logo.svg/1024px-Codeforces_logo.svg.png)

This repository provides a C++ template tailored for competitive programming. It includes essential macros and a basic structure to kickstart solving problems efficiently.

## Features

- **Fast I/O Setup:** Optimized for efficient input/output operations.
- **Typedefs:** Defines common data types such as `long long` and `pair`.
- **Macros for Modulo Arithmetic:** Handy macros for modular addition and multiplication.
- **Sorting Functions:** Functions to sort vectors in ascending and descending order.

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/competitive-programming-template.git
    ```

2. Copy the contents of `main.cpp` into your C++ file.

3. Implement your solution inside the `solve` function.

4. Compile and run your code:

    ```bash
    g++ -o main main.cpp
    ./main
    ```

Feel free to customize the template to suit your needs.

## Macros

- `fast`: Optimizes I/O for faster execution.
- `INF`: Represents a large constant for initialization.
- `fill(a, val)`: Fills array `a` with the specified value.
- `rep(i, n)`: Standard loop macro for iterating `i` from 0 to `n-1`.
- `for(i, a, b)`: Standard loop macro for iterating `i` from `a` to `b-1`.
- `sortv(v)`: Sorts vector `v` in ascending order.
- `sortvr(v)`: Sorts vector `v` in descending order.
- `MOD`: Modulus constant for modular arithmetic.
- `ADD(a, b)`: Adds `a` and `b` with modulo operation.
- `MUL(a, b)`: Multiplies `a` and `b` with modulo operation.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
