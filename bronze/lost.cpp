#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstdio>
#include <cmath>


using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("speeding.out", "w", stdout);

    int free_buckets = 0;
    int n;
    int start[n];
    int end[n];
    int bucketers[n];
    int buckets = 0;
    for (int i = 0; i < n; i++) {
        free_buckets = 0;
        for (int j=0; j<n; j++) {
            if (!end[j]<start[i] && !start[j]>end[i]) {
                if (bucketers[n]>free_buckets) {
                    buckets +=bucketers[n]-free_buckets;
                }


            }
        }
    }



}
