#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

namespace util
{
    struct ListNode
    {
	int val;
	ListNode* next;

	ListNode() : val(0)
	{}

	ListNode(int val) : val(val), next(nullptr)
	{}

	ListNode(int val, ListNode* next) : val(val), next(next)
	{}
    };

    inline void print_list(const ListNode* list)
    {
	while (list)
	    std::cout << std::exchange(list, list->next)->val << ' ';
	std::cout << '\n';
    }

    inline void delete_list(ListNode* list)
    {
	while (list)
	    delete std::exchange(list, list->next);
    }

    inline ListNode* make_list(const std::vector<int>& vec)
    {
	ListNode* head = nullptr;
	ListNode* it = nullptr;
	for (int n : vec) {
	    auto* node = new ListNode(n);
	    if (!head)
		it = head = node;
	    else
		std::exchange(it, node)->next = node;
	}

	return head;
    }
};
