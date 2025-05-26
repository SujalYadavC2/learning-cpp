#include <iostream>

void Increment(int& num)
{
    ++num;
}

int main()
{
    int count;

    std::cout << "Input your count: "<< "\n";
    std::cin >> count;

    void (*func)(int&); //this is function pointer. the pointer func point to Increment function.

    func = Increment;

    std::cout << "Count before function: " << count << "\n";

    func(count);

    std::cout << "Count after function: " << count << "\n";

    return 0;
}
