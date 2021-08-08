#include <iostream>
#include <string>
#include <vector>


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

    }
};

int main(int argc, char* argv[])
{
    Solution app;
    ListNode* res = app.deleteDuplicates()
}
