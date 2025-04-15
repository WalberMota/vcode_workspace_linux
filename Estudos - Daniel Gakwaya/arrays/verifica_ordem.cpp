#include <iostream>

int data[]{1, 2, 4, 5, 8, 12, 13, 16, 71, 92};

int collection_size{std::size(data)};
bool sorted;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < collection_size; i++)
    {
        if (data[i] < data[1 + 1])
            sorted = true;
        else
            sorted = false;
            break;
    }

    if (sorted==true)
        std::cout <<"array is sorted in incrementing order.";
        else
        std::cout <<"array is not sorted in incrementing order.";
    return 0;
}
