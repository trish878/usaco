#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("shuffle.out", "w", stdout);
    int n;
    cin>> n;
    int shuffle[n];
    int ids[n];
    int one[n];
    int two[n];
    int three[n];
    for (int i=0; i<n; i++) {
        cin>>shuffle[i];
    }
    for (int i=0; i<n; i++) {
        cin>>ids[i];
    }
    int order[n];
    for (int j=0; j<3; j++) {
        for (int i=0; i<n; i++) {
            order[i]=ids[shuffle[i]-1];

        }
        for (int i=0; i<n; i++) {
            ids[i]=order[i];

        }


    }

    for (int i=0; i<n; i++) {
        cout<<order[i]<<endl;

    }









    /*for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (shuffle[j]==i+1) {
                two[i]=one[j];
                cout<<two[i]<<endl;

            }
        }
    }


    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (shuffle[j]==i+1) {
                three[i]=two[j];
                cout<<three[i]<<endl;
            }
        }
    }*/




}
