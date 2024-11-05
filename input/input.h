#pragma once

#include <iostream>

void InfiniteLoop()
{
    int c;

    while (true)
    {

        std::cin >> c;
        std::cout << "Loop" << std::endl;
        std::cout << "Input: " << c << std::endl;

        if (c == 10)
        {
            break;
        }
    }
}