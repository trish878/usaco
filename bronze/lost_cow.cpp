//
// Created by Madhuri Devidi on 6/26/25.
//
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("lostcow.out", "w", stdout);
    int x,y;
    cin>>x>>y;
    int pos[abs(x-y)*9];
    pos[0]=x;
    int curr_pos_max = x;
    int curr_pos_min = x;

    int count = 1;
    int ex = 0;
    int sign = 0;
    if (x<y){

        while(curr_pos_max<y){
            if (sign == 0){
                pos[count]= x+pow(2,ex);
                sign =1;
                curr_pos_max = pos[count];
            }
            else if(sign ==1){
                pos[count]= x-pow(2,ex);
                sign =0;

            }
            if (curr_pos_max>y){
                pos[count]=y;
            }
            ex++;
            count++;

        }

    }
    else if(x>y){
        while(curr_pos_min>y){
            if (sign == 0){
                pos[count]= x+pow(2,ex);
                sign =1;
            }
            else if(sign ==1){
                pos[count]= x-pow(2,ex);
                sign =0;
                curr_pos_min = pos[count];

            }
            if (curr_pos_min<y){
                pos[count]=y;
            }
            ex++;
            count++;
        }

    }
    int dist_sum=0;



    for (int i=0; i<sizeof(pos)-1; i++){
        if(pos[i+1]==y){
            dist_sum+=abs(pos[i]-pos[i+1]);
            break;
        }
        dist_sum+=abs(pos[i]-pos[i+1]);

    }
    cout<<dist_sum;




}
