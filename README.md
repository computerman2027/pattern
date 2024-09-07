
# Pattern Repository

This repository contains pattern printing programs in both C (`pattern.c`) and Python (`pattern.py`). These programs generate a variety of pattern outputs, ranging from simple star patterns to more complex shapes like Pascal's Triangle, Floyd's Triangle, and diamond shapes.

## Files

1. **`pattern.c`**  
   This file contains multiple functions, each responsible for printing a different pattern. It includes:
   - Simple star patterns (`pattern1`, `pattern4`, `pattern5`)
   - Number-based patterns (`pattern2`, `pattern3`, `pattern8`)
   - Inverted patterns (`pattern9`, `pattern10`, `pattern11`)
   - Pascal's triangle (`pattern14`, `pattern15`, `pattern16`)
   - Diamond shapes and more.

2. **`pattern.py`**  
   Similar to `pattern.c`, this file contains various functions to print different patterns but written in Python. It offers a more compact and Pythonic way to generate similar outputs as the C program. Highlights include:
   - Simple star patterns
   - Number pyramids
   - Pascal's triangle
   - Diamond and Floyd's triangle patterns

## How to Use

### C Program (`pattern.c`)
1. Ensure you have a C compiler installed (such as GCC).
2. Compile the program:
   ```bash
   gcc pattern.c -o pattern
   ```
3. Run the compiled program:
   ```bash
   ./pattern
   ```
   The program will automatically display various patterns using different functions.

### Python Program (`pattern.py`)
1. Ensure you have Python installed (preferably Python 3).
2. Run the program:
   ```bash
   python pattern.py
   ```
   The program will ask you to input a height, and it will display a series of patterns based on that input.

## Functions

Both `pattern.c` and `pattern.py` contain functions corresponding to each pattern:

1. **Star Patterns:**
   - `pattern1`: Right-angled triangle of stars.
   - `pattern4`: Right-angled triangle of stars, aligned to the right.
   - `pattern5`: Right-angled triangle of stars, aligned to the right with spacing.

2. **Number Patterns:**
   - `pattern2`: Right-angled triangle of increasing numbers.
   - `pattern3`: Right-angled triangle with each row having consecutive numbers.
   - `pattern6`: Right-angled triangle with consecutive numbers aligned to the right.
   - `pattern8`: Right-angled triangle of decreasing numbers per row.

3. **Complex Patterns:**
   - `pattern14`-`pattern17`: Pascal's Triangle in various forms.
   - `pattern11`: Inverted Floyd's Triangle.
   - `pattern18`, `pattern19`: Diamond-shaped star patterns.
   - `pattern20`: A concentric square pattern of numbers.

## Contribution

Feel free to contribute by adding more patterns or optimizing the current ones. Pull requests are welcome!

## License

This repository is open-sourced and licensed under the MIT License. Feel free to use it for learning or projects.
