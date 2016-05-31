//
//  kth.cpp
//  CMPT307PermutationGeneration
//
//  Created by Kai Zhang on 2016-05-31.
//  Copyright (c) 2016 Kai Zhang. All rights reserved.
//

#include <iostream>
#include "nCr.h"
#include "kth.h"


using namespace std;



/***************************************
 You will replace the following routine
 with the correct solution ..........
 ***************************************/
void kth(int m, int n, unsigned long long k) {
    unsigned long long i, ones, accum;
    i = 0;
    while (k > 0) {
        accum = i;
        ones = 0;
        while (accum > 0) {
            ones += accum %2;
            accum /= 2;
        }
        if (ones == n) k--;
        i++;
    }
    i--;
    k = (unsigned long long)1 << (m+n-1);
    while (k > 0) {
        if ((k&i) > 0) cout << '1';
        else cout << '0';
        k /= 2;
    }
}



