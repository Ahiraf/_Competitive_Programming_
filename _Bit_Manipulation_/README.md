Key Bit Manipulation Operations:

1)AND (&): Compares each bit of two numbers and returns a new number where each bit is 1 if both compared bits are 1, otherwise 0.
Example: 5 & 3 (binary 0101 & 0011) results in 0001 (decimal 1).

2)OR (|): Compares each bit of two numbers and returns a new number where each bit is 1 if at least one of the compared bits is 1, otherwise 0.
Example: 5 | 3 (binary 0101 | 0011) results in 0111 (decimal 7).

3)XOR (^): Compares each bit of two numbers and returns a new number where each bit is 1 if the bits are different, otherwise 0.
Example: 5 ^ 3 (binary 0101 ^ 0011) results in 0110 (decimal 6).

4)NOT (~): Flips each bit of the number, turning 1 into 0 and vice versa.
Example: ~5 (binary 0101) results in 1010 (considering it as a 4-bit number, the result would be -6 in a signed system).

5)Left Shift (<<): Shifts the bits of a number to the left by a specified number of positions, adding 0s on the right. This effectively multiplies the number by 2 to the power of shift amount.
Example: 5 << 1 (binary 0101 << 1) results in 1010 (decimal 10).

6)Right Shift (>>): Shifts the bits of a number to the right by a specified number of positions. The sign bit is usually preserved for signed integers.
Example: 5 >> 1 (binary 0101 >> 1) results in 0010 (decimal 2).

Why Use Bit Manipulation?

Efficiency: Bit operations are typically faster than arithmetic operations, as they are directly supported by the hardware.
Memory Savings: Using bits instead of full integers can save memory in cases where only a few bits are needed.
Simplicity: Certain algorithms and problems can be simplified by treating data as a collection of bits.





