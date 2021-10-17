#include <iostream>

int Square(int x) {
    return x * x;
}

int main() {
    int val = 5;
    int result = Square(val);

    std::cout << result << std::endl;
    return 0;
}
