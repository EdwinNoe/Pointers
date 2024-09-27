# Overview of Programs

## **Program 1: PuntApunt1**

This program demonstrates the use of pointers, dereferencing, and dynamic memory allocation in C++. Key points include:

- Variables of different types are declared, such as `int`, `double`, and a pointer to a dynamically allocated `int` with a value of 150.
- The dereference operator (`*`) is used to access the value pointed to by a pointer.
- Static and dynamic arrays of type `int` are created, showing how to access different memory positions and how memory usage differs between static and dynamic arrays.
- Memory addresses of variables and pointers are printed, and `sizeof` is used to show the size in bytes of the pointers and the values they contain.
- Finally, the dynamically allocated memory is released using `delete` and `delete[]` to avoid memory leaks.

## **Program 2: UsoApunt1**

This program builds on the concepts from the first and introduces additional examples related to:

- Declaration of regular and dynamically allocated variables, showing the difference between storing a value in a local variable and allocating memory dynamically using `new`.
- Accessing and manipulating values through pointers in both static and dynamic arrays.
- The use of double pointers, such as `double**`, to point to another pointer (`double*`), and how to access values stored through multiple levels of dereferencing.
- Examples are provided on obtaining the memory addresses of variables, how to access dynamically allocated values, and how to properly free resources using `delete` and `delete[]`.

---

Both programs provide a comprehensive look at pointers, dynamic memory management, and the importance of efficient resource management in C++.
