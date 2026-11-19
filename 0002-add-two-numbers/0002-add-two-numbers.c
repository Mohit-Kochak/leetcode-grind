/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* getnode() {
    struct ListNode* node;
    node = (struct ListNode*)malloc(sizeof(struct ListNode));

    if (node == NULL) {
        return NULL;
    } else {
        return node;
    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode *dummy, *dummyt, *current;
    int flag, valu1, valu2, sum, carry, ans;

    dummy = NULL;

    carry = 0;

    while ((l1 != NULL) || (l2 != NULL) || (carry!=0) ) {
        valu1 = 0;
        valu2 = 0;
        sum = 0;

        if (l1 != NULL) {
            valu1 = l1->val;
        }
        if (l2 != NULL) {
            valu2 = l2->val;
        }
        sum = (valu1 + valu2) + carry;

        carry = 0;

        if (sum > 9) {
            carry = sum / 10;
            ans = sum % 10;

        } else {
            ans = sum;
        }

        current = getnode();
        current->val = ans;
        if (dummy == NULL) {
            dummy = current;
            dummyt = current;
        } else {
            dummyt->next = current;
            dummyt = current;
        }
        if (l1 != NULL) {
            l1 = l1->next;
        }
        if (l2 != NULL) {
            l2 = l2->next;
        }
    }

    // if(carry!=0){
    //      current = getnode();
    //     current->val = carry;
    //     if (dummy == NULL) {
    //         dummy = current;
    //         dummyt = current;
    //     } else {
    //         dummyt->next = current;
    //         dummyt = current;
    //     }

    // }

    dummyt->next = NULL;

    return dummy;
}
