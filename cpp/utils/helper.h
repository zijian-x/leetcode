#pragma once

#include <array>
#include <limits>
#include <queue>
#include <memory>
#include <map>
#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <optional>

#include <fmt/core.h>

#include "TreeNode.h"
#include "ListNode.h"

namespace util
{
    template<typename container> void print_container(const container& c)
    {
	auto b = begin(c);
	auto e = end(c);
	while (b != e)
	    std:: cout << *b++ << (b == e ? "\n" : " ");
    }
};
