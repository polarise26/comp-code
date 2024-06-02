#include <iostream>
#include <vector>

int main() {
    std::vector<int> input = { -1, 0, 1, 2, -1, -4 }; 
    std::cout << "sizeof(input): " << sizeof(input) << std::endl;             // Size of the vector object itself
    std::cout << "sizeof(input[0]): " << sizeof(input[0]) << std::endl;       // Size of a single element
    std::cout << "input.size(): " << input.size() << std::endl;               // Correct number of elements
    return 0;
}