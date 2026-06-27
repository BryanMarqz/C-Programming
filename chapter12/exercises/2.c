The statement is illegal because pointers cannot be added. Here's a legal statement that has the desired effect:

middle = low + (high - low) / 2;
The value of (high - low) / 2 is an integer, not a pointer, so it can legally be added to low.


