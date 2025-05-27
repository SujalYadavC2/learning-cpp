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
ptr = &another_char; //Error: Cannot change pointer
```

**A constant pointer to a constant char**

Both our pointer and variable are constant.

```cpp
const char ch = 'a';
const char* const ptr = ch;

*ptr = 'b'; // Error: Cannot change ch
ptr = &another_char; // Error: Cannot change pointer
```

**A pointer to a function taking a double parameter and returning an int**

This is not a simple pointer to a varaible, it is a function pointer. I will tell the difference.<br>
First code that I wrote was this:

```cpp
int* func(double);
```

But this declaration give us a pointer to the integer and that integer is output of the function.<br>
So what we need is function pointer which looks something like this:

```cpp
int (*func_ptr)(double);
```

To give an example:

```cpp
int ConvertToInt(double num) { return static_cast<int>(num); }
int (*func_ptr)(double) = ConvertToInt;
```

To give an example of my initial declaration:

```cpp
int value = 40; // It is global variable
int* func(double num) { return &value; }
```

In this case function shoud return the address of the integer because a pointer need address.

