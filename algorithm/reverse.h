//
//  reverse.h
//  algorithm
//
//  Created by 司航航 on 2020/3/30.
//  Copyright © 2020 Si. All rights reserved.
//

#ifndef reverse_h
#define reverse_h

struct Node {
    int data;
    struct Node* next;
};

#include <stdio.h>
#include <stdlib.h>

/**
 链表反转
 */
struct Node* list_reverse(struct Node* head);

/**
 创建链表
 */
struct Node* constructList(void);

/**
 打印链表数据
 */
void printList(struct Node* head);

#endif /* reverse_h */
