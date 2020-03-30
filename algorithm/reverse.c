//
//  reverse.c
//  algorithm
//
//  Created by 司航航 on 2020/3/30.
//  Copyright © 2020 Si. All rights reserved.
//

#include "reverse.h"

/**
 链表反转
 */
struct Node* list_reverse(struct Node* head) {
    struct Node* p = head;
    struct Node* result = NULL;
    while (p != NULL) {
        struct Node* nextNode = p->next;
        p->next = result;
        result = p;
        p = nextNode;
    }
    return result;
}

/**
 创建链表
 */
struct Node* constructList(void) {
    struct Node* head = NULL;
    struct Node* cur = NULL;
    for (int i = 0; i < 5; i++) {
        struct Node* node = malloc(sizeof(struct Node));
        node->data = i;
        node->next = NULL;
        if (head == NULL) {
            head = node;
        } else {
            cur->next = node;
        }
        cur = node;
    }
    return head;
}

/**
 打印链表数据
 */
void printList(struct Node* head) {
    while (head != NULL) {
        printf("Node data is: %d\n", head->data);
        head = head->next;
    }
}
