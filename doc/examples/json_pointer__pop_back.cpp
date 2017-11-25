#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

int main()
{
    // start with a JSON Pointer
    json::json_pointer ptr("/foo/bar/baz/1/42/something");
    std::cout << ptr.to_string() << '\n';

    // remove reference tokens
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << '\n';
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << '\n';
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << '\n';
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << '\n';
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << '\n';
    std::cout << ptr.pop_back() << " -> " << ptr.to_string() << std::endl;

    // calling pop_back on an empty JSON Pointer yields an exeption
    try
    {
        ptr.pop_back();
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << std::endl;
    }
}
