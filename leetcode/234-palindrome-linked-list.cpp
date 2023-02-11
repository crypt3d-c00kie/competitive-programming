bool isPalindrome(ListNode* head) {
        // storing every node in a vector and checkin if its palindrome
        vector<ListNode*> store;
        while(head){                                      
            store.push_back(head);
            head=head->next;
        }
        int j = store.size()-1;
        for(int i=0;i<store.size()/2;i++){                 
            if(store[i]->val!=store[j]->val) return false;
            j--;
        }
        return true;
    }