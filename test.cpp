#include <string_view>
#include <iostream>

int main() {
    std::string str = "Hello";
    std::string_view sv = str;
    std::cout << sv << std::endl;
    for (int i = 0; i < 24; ++i) {
        std::cout << str.size() << ' ' << sv << std::endl;
        str.push_back('a');
    }
}
