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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* head;
        ListNode* tail;
        head = tail;
        
        while (l1 != nullptr && l2 != nullptr)
        {
            std::cout << l1->val << " " << l2->val << "\n";

            if (l2->val < l1->val)
            {
                if (tail == nullptr)
                {
                    tail = new ListNode (l2->val);
                    continue;
                }
                
                tail->next = new ListNode (l2->val);
                tail = tail->next;
                l2 = l2->next;
                
            }
            
            else if (l1->val < l2->val)
            {
                if (tail == nullptr)
                {
                    tail = new ListNode (l1->val);
                    continue;
                }
                
                tail->next = new ListNode (l1->val);
                tail = tail->next;
                l1 = l1->next;
            }
            
            else
            {
                if (tail == nullptr)
                {
                    tail = new ListNode (l1->val);
                    tail->next = new ListNode (l2->val);
                    tail = tail->next;
                }
                else
                {
                    tail->next = new ListNode (l1->val);
                    tail->next->next = new ListNode (l2->val);
                    tail = tail->next->next;
                    R
                }
                
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
        }
        return head;
    }
};

int main(int argc, char* argv[])
{
    Solution sln;
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(2);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    ListNode* res = sln.mergeTwoLists(l1, l2);

    while (res != nullptr) 
    {
        std::cout << res->val << " ";
        res = res->next;
    }
    std::cout << "\n";
}