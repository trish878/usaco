#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("speeding.out", "w", stdout);
    int n,m;
    cin>>n>>m;
    int speed_lim[n+1];
    int speeds[n];
    int speeds_ex[100];
    int speed_lim_c[m+1];
    int speeds_c[m];
    int speeds_ex_c[100];
    speed_lim[0]=0;
    speed_lim_c[0]=0;
    int temp;
    for (int i=1; i<n+1;i++) {
        cin>>temp;
        cin>>speeds[i-1];
        speed_lim[i] = speed_lim[i-1]+temp;

    }

    for (int i=1; i<m+1;i++) {
        cin>>temp;
        cin>>speeds_c[i-1];
        speed_lim_c[i] = speed_lim_c[i-1]+temp;

    }

    int sum=1;
    int curr_i_l = 0;
    int curr_i_c = 0;
    for (int i=0; i<100; i++) {
        if (sum>speed_lim[curr_i_l]) {
            curr_i_l++;
        }
        speeds_ex[i]=speeds[curr_i_l-1];
        if (sum>speed_lim_c[curr_i_c]) {
            curr_i_c++;
        }
        speeds_ex_c[i]=speeds_c[curr_i_c-1];
        sum++;
    }

    int over = 0;

    for (int i=0; i<100; i++) {
        if (speeds_ex_c[i]- speeds_ex[i]>over) {
            over = speeds_ex_c[i]- speeds_ex[i];
        }
    }
    cout<<over<<endl;

}
