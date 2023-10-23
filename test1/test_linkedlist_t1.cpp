#include "gtest/gtest.h"
#include "linkedlist_t1.cpp"
#include <vector>
#include <iostream>
using namespace std;

void printList(ListNode* head){
    while(head){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

TEST(linklist_t1Test, test1) {
    Solution sol;
    ListNode* head = new ListNode(1);

    cout << "original linked list : ";
    printList(head);

    ListNode* result = sol.linkedlist_t1(head);

    cout << "modified linked list : ";
    printList(result);    
}

TEST(linklist_t1Test, test2) {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    cout << "original linked list : ";
    printList(head);

    ListNode* result = sol.linkedlist_t1(head);

    cout << "modified linked list : ";
    printList(result);    
}

TEST(linklist_t1Test, test3) {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    cout << "original linked list : ";
    printList(head);

    ListNode* result = sol.linkedlist_t1(head);

    cout << "modified linked list : ";
    printList(result);    
}

TEST(linklist_t1Test, test4) {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "original linked list : ";
    printList(head);

    ListNode* result = sol.linkedlist_t1(head);

    cout << "modified linked list : ";
    printList(result);    
}

TEST(linklist_t1Test, test5) {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);

    cout << "original linked list : ";
    printList(head);

    ListNode* result = sol.linkedlist_t1(head);

    cout << "modified linked list : ";
    printList(result);    
}

int main(int argc, char **argv) {
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}