Declaretion means when you define a variable without allocating it memory (int num;)

Initialization comes after you declare a variable, it allocates memory to the variable (int num = 5;). It is also call defination.

Assignment is when you change value of a variable after it declared.<br>
int num;
num = 2;

- you need to declare variables before you use them.
- always put ";" at the end of an expression.
- "std::" use because those name are found in standard-library namespace. We can use "using namespace std" after #include statement to avoid writting std::, but if we are using multiple namspaces then it
  is good to explicitly define namespace.
- There are only 4 fundamental type in c++: bool, char, int, and double
- if you want see the size of these types you can use the function "sizeof()"

# Conversion between basic types

You can declare variables in two ways:
- double d1 = 2.3;
- double d2 {2.3};
The differece between the two is quite simple:
- int i1 = 7.2; //i1 becomes 7
- int i2 {7.2}; //error: floating-point to integer conversion
- int i3 = {7.2}; //error: floating-point to integer conversion

So, the main point is if you do not want unwanted loss of information it is better to use {} for declaretion.
we  can use "auto" keyword in declaretion to avoid type conversion errors
- auto b = true; //bool
- auto ch = 'x'; //char
- auto i = 2; //int
- audo d = 2.4 //double
- auto z = sqrt(y) //the type of whatever sqrt(y) returns

# Reference and Pointers
Pointer stores the address of the variable. Syntex of defining a pointer is "char* p = &v".
- p is character pointer.
- '&' use to access address of the variable.

Using the pointer is also quite simple, if you  use just p it will give the address, to access the value at the address use * with the p. (char x = *p)
- Now varaible x of type char has character same as variable v. 

We can use reference in the declaretion like this "int& a = b". "a" refereing to the "b".
- Benifit of this is that we do not need * to access the value.
- We can not the the reference once it is initialized but we can where a pointer is pointing after it is declared.

# Dynamic memory allocation
It lets you request memory during runtime meaning when you do not know the required sizeat complie time or when memory must persist longer than a function's scope.
## Operators
- **new**: Allocates memory on the heap (for single object)
- **delete**: Frees memory allocated with new
- **new []**: Allocates memory for an array on the heap
- **delete []**: Frees memory allocated for an array

**Syntax**<br>
int* ptr = new int;<br>
*ptr = 42;<br>
...<br>
delete ptr;<br>
ptr = nullptr; //good practiceto avoid dangling pointers

int size;<br>
std::cin >> size;<br>
int* arr = new int[size];<br>
...<br>
delete[] arr;<br>
arr = nullptr;
