#include <iostream>

void* smalloc(size_t size);

int main() {
    std::cout << "Hello, World!" << std::endl;
    smalloc(100);
    return 0;
}
