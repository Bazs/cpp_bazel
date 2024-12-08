#include <iostream>

namespace my_swap {

template <typename T>
void swap(T &v, T &w)
{
    std::cout << "Swapping" << std::endl;
    auto temp = std::move(v);
    v = std::move(w);
    w = std::move(temp);
}

} // namespace my_swap