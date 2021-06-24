#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>


class ListNode
{


public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode*  add (int&& val)
    {
	ListNode* new_node = new ListNode();
	this -> next = new_node;
	new_node -> val = val;
	return new_node;
    }
    ~ListNode() 
    {
	//while (this != nullptr)
//	{
//	    ListNode* to_remove = this;
//	    delete to_remove;
//	    to_remove = this -> next;
//	}
	delete next;
	delete this;
    }
};

class Solution
{
    public:
    ListNode* addTwoNumbers (ListNode* l1, ListNode* l2)
    {
	int NUMBER {0};
	std::string str_1;
	std::string str_2;
	ListNode* head = nullptr;
	ListNode* tail = nullptr;

	while (l1 != nullptr || l2 != nullptr)
	{
	    if (l1 != nullptr)
	    {
		str_1 += std::to_string(l1->val);
		l1 = l1 -> next;
	    }
	    if (l2 != nullptr) 
	    {
		str_2 += std::to_string(l2->val);
		l2 = l2 -> next;
	    }
	}

	std::reverse(str_1.begin(), str_1.end());
	std::reverse(str_2.begin(), str_2.end());


	NUMBER = std::stoi (str_1) + std::stoi (str_2);


	do
	{
	    int to_add = NUMBER % 10;
	    if ( head == nullptr)
	    {
		head = new ListNode(to_add);
		tail = head;
		continue;
	    }
	    else if ( head == tail ) 
	    {
		ListNode* new_node = new ListNode;
		head -> next = new_node;
		tail = new_node;
		tail -> val = to_add;
		continue;
	    }
	    else 
	    {
		ListNode* new_node = new ListNode;
		new_node -> val = to_add;
		tail -> next = new_node;
		tail = tail -> next;
		continue;
	    }

	} while ( NUMBER /= 10 );
	
	return head;
    }

};

int main(int argc, char* argv[])
{
    Solution sln;

    ListNode* lst_1 = new ListNode();
    lst_1 -> val = 9;
    ListNode* lst_1_1 = lst_1 -> add (9);
    lst_1_1->add (9);

    ListNode* lst_2 = new ListNode();
    lst_2 -> val = 9;

    std::cout << "\n";


    ListNode* res = sln.addTwoNumbers (lst_1, lst_2);

    while (res != nullptr)
    {
	std::cout << res -> val << " ";
	res = res -> next;
    }
    std::cout << "\n";

}

