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
