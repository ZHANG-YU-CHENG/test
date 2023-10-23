#include <vector>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* linkedlist_t1(ListNode* head) {

        if(!head->next || !head->next->next) return head;

        ListNode* D1 = new ListNode(0, head);
        ListNode* D2 = new ListNode(0, head->next);
        ListNode* odd = D1;
        ListNode* even = D2;

        while(D2->next){

            while(odd->next || even->next){

                if(odd->next){
                    odd = odd->next;
                    if(odd->next) odd->next = odd->next->next;
                }
                if(even->next){
                    even = even->next;
                    if(even->next) even->next = even->next->next;
                }
            }

            if(D2->next){
                odd->next = D2->next;
                if(!D2->next->next){
                    break;
                }
                D2->next = D2->next->next;
                even = D2;
            }

        }

        return D1->next;
    }
};




