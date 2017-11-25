#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

int main()
{
    // start with an empty JSON Pointer
    json::json_pointer ptr;
    std::cout << ptr.to_string() << '\n';

    // add reference tokens and print JSON Pointer
    ptr.push_back("foo");
    std::cout << ptr.to_string() << '\n';
    ptr.push_back("bar");
    std::cout << ptr.to_string() << '\n';
    ptr.push_back("baz");
    std::cout << ptr.to_string() << '\n';
    ptr.push_back("1");
    std::cout << ptr.to_string() << '\n';
    ptr.push_back("42");
    std::cout << ptr.to_string() << '\n';
    ptr.push_back("something");
    std::cout << ptr.to_string() << std::endl;
}
