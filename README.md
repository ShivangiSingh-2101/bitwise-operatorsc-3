Program 4(1)
 Aim:
To perform bitwise operations (AND, OR, XOR, NOT, Left Shift, Right Shift) on two integers using C++ and display the results.

Theory:
Bitwise operators operate directly on the binary representation of integers. They are used in low-level programming, device drivers, and performance-sensitive applications.

Algorithm:

- Start the program.
- Include the iostream header and use the std namespace.
- Declare and initialize two integers: a = 21, b = 18.
- Perform and store results of the following operations:
- a & b, a | b, a ^ b
- ~a, ~b
- a << 1, b << 1
- a >> 1, b >> 1
- Display all results using cout.
- End the program.


Program 4(2)

Aim:
To write a C++ program that allows the user to set and reset specific bits of an integer using bitwise operations.

Theory:
Bitwise manipulation is a powerful technique used in low-level programming, such as systems, embedded, or performance-critical applications. Two common operations include:

 Setting a Bit
 Resetting (Clearing) a Bit

 Algorithm:

- Start the program.
- Include iostream and use the std namespace.
- Declare an integer a = 2118 and other integer variables: bit_set, bit_reset, bit_setting, bit_resetting.
- Prompt and take user input for bit_set (position to set).
- Prompt and take user input for bit_reset (position to reset).
- Perform:
- bit_setting = a | (1 << bit_set); to set the bit.
- bit_resetting = a & ~(1 << bit_reset); to reset the bit.
- Print both modified values.
- End the program.



