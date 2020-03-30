//
//  main.c
//  algorithm
//
//  Created by 司航航 on 2020/3/30.
//  Copyright © 2020 Si. All rights reserved.
//

#include <stdio.h>
#include "reverse.h"

void reverse(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    reverse();
    
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
