#include <ranges>
#include <iostream>

int main(int argc, char* argv[])
{
    std::vector<int> numbers{1, 2, 3, 4, 5, 6};

    auto even = numbers | std::views::filter([](int i) { return i % 2 == 0; });
    auto squared = even | std::views::transform([](int i) { return i * i; });
    std::ranges::copy(squared, std::ostream_iterator<int>(std::cout, " "));
}