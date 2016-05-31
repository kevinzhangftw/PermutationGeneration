//
//  nCr.cpp
//  CMPT307PermutationGeneration
//
//  Created by Kai Zhang on 2016-05-31.
//  Copyright (c) 2016 Kai Zhang. All rights reserved.
//

#include "nCr.h"
// Computes gcd using Euclidean Algorithm
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (a > b) return gcd(b,a);
    if (a == 0) return b;
    return gcd(b%a, a);
}

// Computes n!/(r! (n-r)!)
unsigned long long nCr(int n, int r) {
    unsigned long long ret = 1;
    unsigned long long g;
    int i = 0;
    if ((n-r) < r) r = n-r;
    while (r-i > 0) {
        i++;
        g = gcd((unsigned long long)i, (unsigned long long)n);
        ret = ret / ((unsigned long long)i/g) * ((unsigned long long)n/g);
        n--;
    }
    return ret;
}