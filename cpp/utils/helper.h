#pragma once

#include <iostream>

namespace util
{
    template<typename container> void output_container(const container& c)
    {
	auto b = begin(c);
	auto e = end(c);
	while (b != e)
	    std:: cout << *b++ << (b == e ? "\n" : " ");
    }
};
