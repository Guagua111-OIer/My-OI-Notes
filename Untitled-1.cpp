#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string H[5], E[5], L[5], O[5], s[5];

int main() {
    H[0] = ".#...#";
    H[1] = ".#...#";
    H[2] = ".#####";
    H[3] = ".#...#";
    H[4] = ".#...#";

    E[0] = ".#####";
    E[1] = ".#....";
    E[2] = ".#####";
    E[3] = ".#....";
    E[4] = ".#####";

    L[0] = ".#....";
    L[1] = ".#....";
    L[2] = ".#....";
    L[3] = ".#....";
    L[4] = ".#####";

    O[0] = ".######";
    O[1] = ".#....#";
    O[2] = ".#....#";
    O[3] = ".#....#";
    O[4] = ".######";
    for (int i = 0; i < 5; i++) {
        s[i] = H[i] + E[i] + L[i] + L[i] + O[i];
    }
    for (int i = 0; i < 5; i++) {
        int R = 0;
        for (int j = 0; j < s[i].size(); j++) {
            if (s[i][j] == '.') {
                cout << "  ";
                R += 6;
            } else {
                printf("\033[48;2;%d;0;255m \033[0m", R);
                R += 3;
                printf("\033[48;2;%d;0;255m \033[0m", R);
                R += 3;
            }
        }
        cout << '\n';
    }
    string ss = "Powered by Guagua111";
    int R = 0, B = 255;
    for (int i = 0; i < ss.size(); i++) {
    	printf("\033[38;2;%d;0;%dm%c\033[0m", R, B, ss[i]);
    	R += 12;
    	B -= 12;
	}
    return 0;
}


