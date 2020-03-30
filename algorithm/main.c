//
//  main.c
//  algorithm
//
//  Created by 司航航 on 2020/3/30.
//  Copyright © 2020 Si. All rights reserved.
//

#include <stdio.h>
#include "reverse.h"
#include "merge.h"

/**
 链表反转
 */
void reverse(void);

/**
 有序数组合并
 */
void merge(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    reverse();
    merge();
    
    return 0;
}

/**
 链表反转
 */
void reverse(void) {
    struct Node* node = constructList();
    printf("------原始链表数据:------\n");
    printList(node);
    printf("------反转链表数据:------\n");
    struct Node* reverseNode = list_reverse(node);
    printList(reverseNode);
}

/**
 有序数组合并
 */
void merge(void) {
    int list1[] = {1,3,5,7};
    int list2[] = {2,4,6,8,10,11,12};
    int result[11];
    list_merge(list1, 4, list2, 7, result);
    printf("------有序数组合并:------\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ",result[i]);
    }
    printf("\n");
}
