#include <fstream>
#include <string>
using namespace std;

int main() {
    int m, n, k;
    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");

    fin >> m >> n >> k;
    string curr_row;

    for (int i = 0; i < m; i++) {
        fin >> curr_row;
        for (int j = 0; j < k; j++) {  // Repeat row k times (vertical stretch)
            for (int l = 0; l < n; l++) {
                for (int m = 0; m < k; m++) {  // Repeat character k times (horizontal stretch)
                    fout << curr_row[l];
                }
            }
            fout << endl;
        }
    }

    fin.close();
    fout.close();
    return 0;
}
