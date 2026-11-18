#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int find_kth_from_end(struct Node* list, int k) {
    struct Node *fast = list->next;
    struct Node *slow = list->next;

    if (k <= 0) return 0;
    for (int i = 0; i < k; i++) {
        if (fast == NULL) return 0;
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    printf("%d\n", slow->data);
    return 1;
}

int main() {
    struct Node head = {0, NULL};  // 头结点
    struct Node *tail = &head, *p;
    int n, k, value, result;

    // 输入：结点个数、各结点的值、k
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data = value;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
    scanf("%d", &k);
    result = find_kth_from_end(&head, k);
    printf("返回值：%d\n", result);

    p = head.next;
    while (p != NULL) {
        struct Node *temp = p;
        p = p->next;
        free(temp);
    }
    return 0;
}
