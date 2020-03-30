//
//  merge.c
//  algorithm
//
//  Created by 司航航 on 2020/3/30.
//  Copyright © 2020 Si. All rights reserved.
//

#include "merge.h"


void list_merge(int a[], int aLen, int b[], int bLen, int result[]) {
    int p = 0;
    int q = 0;
    int i = 0;
    while (p < aLen && q < bLen) {
        if (a[p] <= b[q]) {
            result[i] = a[p];
            p++;
        } else {
            result[i] = b[q];
            q++;
        }
        i++;
    }
    while (p < aLen) {
        result[i] = a[p];
        p++;
        i++;
    }
    while (q < bLen) {
        result[i] = b[q];
        q++;
        i++;
    }
}
