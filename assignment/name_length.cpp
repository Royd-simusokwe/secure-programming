#include <iostream>

int main()
{
    const size_t name_length{15};

    char members[][name_length]{
        {'J', 'o', 'h', 'n'},
        {
            'S',
            'a',
            'm',
            'u',
            'e',
            'l',
        },
        {'R', 'o', 'd', 'r', 'i', 'g', 'e', 'z'},
        {'R', 'a', 's', 'h', 'i', 'd'}};
    for (size_t i = 0; i < std::size(members); i++)
    {
        for (size_t m = 0; m < std::size(members[i]); m++)
        {
            std::cout << members[i][m] << " ";
        }
    }

    return 0;
}