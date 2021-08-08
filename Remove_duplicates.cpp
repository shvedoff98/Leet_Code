
#include <iostream>

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    { 
        ListNode res;
        ListNode* tail = &res;
        
        int temp {0};
        while (head)
        {
            if (temp != head->val)
            {
                temp = head->val;
                tail->next = head;
                tail = tail->next;
                std::cout << temp << " ";
            }
            
            head = head -> next;
        }        
        std::cout << "\n";
        return res.next;
    }
};

int main(int argc, char* argv[])
{
    Solution sln;
    ListNode* head;

    int i;
    while (std::cin >> i)
    {

        head = new ListNode(i);   
        head = head -> next;     
    }

    sln.deleteDuplicates(head);

    while (head) 
    {
        std::cout << head->val << " ";
        head = head -> next;

    }
    std::cout << "\n";
}