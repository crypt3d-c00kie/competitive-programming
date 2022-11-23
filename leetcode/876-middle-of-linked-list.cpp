#include<bits/stdc++.h>
using namespace std;

ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    // by the time fast pointer reaches the end, the slow pointer would reach the middle
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;  
    }    
    return slow;
}
