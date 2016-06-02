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
    //calculate the pivot
    unsigned long long pivot = nCr(m+n-1, n);
    //ok now we have the pivot we know at the largest bit of the binary string turns from 0 to 1
    //so now we try to find out whether kth largest bit is 0 or 1
    if (k<=pivot) {
        //first bit is 0!
        cout << '0';
        //go to 0 case:
        kth(m-1, n, k);
    }else{
        //first bit is 1!
        cout << '1';
        //go to 1 case
        //k needs to be reindexed because the problem is smaller
        k = k-pivot;
        kth(m, n-1, k);
    }
 
    
    
    
//    unsigned long long i, ones, accum;
//    i = 0;
//    while (k > 0) {
//        accum = i;
//        ones = 0;
//        while (accum > 0) {
//            ones += accum %2;
//            accum /= 2;
//        }
//        if (ones == n) k--;
//        i++;
//    }
//    i--;
//    k = (unsigned long long)1 << (m+n-1);
//    while (k > 0) {
//        if ((k&i) > 0) cout << '1';
//        else cout << '0';
//        k /= 2;
//    }
}



