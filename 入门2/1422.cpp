/*=============================================================================
# 
#LiZeCheng
#L2763404373@hotmail.com
#https://github.com/LiZeCheng-tony
# Last modified: 2020-08-18 21:44
# Filename: 1422.cpp
=============================================================================*/
#include <stdio.h>

#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a <= 150) {
        printf("%.1f", 0.4463 * a);
    } else if (a >= 151 && a <= 400) {
        printf("%.1f", 0.4463 * 150 + 0.4663 * (a - 150));
    } else if (a >= 401) {
        printf("%.1f", 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (a - 400));
    }
    return 0;
}
