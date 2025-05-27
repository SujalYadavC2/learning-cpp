# Declare and Initialize the following

**A pointer to a char**

Always ask question after reading a task. In this what is a pointer; A pointer store address of a variable. In our case the variable is of char type.

```cpp
char ch = 'a';
char* ptr = &ch;
```

**A pointer to a constant char**

Now our variable is a constant. But pointer is not a constant that means we can not modify our variable directly or through pointer, but pointer can change the address it points.

```cpp
const char ch = 'a';
const char* ptr = &ch;

*ptr = 'b'; // Error: cannot modify ch
ptr = &another_char;
```

**A constant pointer to a char**

This time our pointer is constant not the variable.

```cpp
char ch = 'a';
char* const ptr = &ch;

*ptr = 'b'; //allowed
ptr = &another_char: Error: Cannot change pointer
```
