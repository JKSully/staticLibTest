#include <iostream>
#include <vector>
#include <numeric>

#include "library.h"
int main() {
    std::vector<int> test(7);
    std::iota(test.begin(), test.end(), 0);
    scale(test.begin(), test.end(), 3);

    for (int const t: test) {
        std::cout << t << ' ';
    }
    std::cout << std::endl;

    return 0;
}
