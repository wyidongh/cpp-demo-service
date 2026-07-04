#include <iostream>

int main()
{
    int* p = nullptr;
    *p = 10;   // 故意错误
    std::cout << "Hello CI/CD World" << std::endl;
    return 0;
}
