#include <vector>

#include "swap.h"

int main(int argc, char* argv[])
{
    std::vector<int> v = {1, 2, 3};
    std::vector<int> w = {4, 5, 6};
    my_swap::swap(v, w);
    return 0;
}