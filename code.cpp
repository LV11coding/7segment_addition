#include <iostream>
using namespace std;

int main () {
    int i = 0, j = 0, x = 0, y = 0;
    int numbers [10][7] = {1, 2, 3, 4, 5, 6, 0,
                            2, 3, 0, 0, 0, 0, 0,
                            1, 2, 5, 7, 4, 0, 0,
                            1, 2, 7, 3, 4, 0, 0,
                            6, 7, 2, 3, 0, 0, 0,
                            1, 6, 7, 3, 4, 0, 0,
                            1, 6, 5, 4, 3, 7, 0,
                            1, 2, 3, 0, 0, 0, 0,
                            1, 2, 3, 4, 5, 6, 7,
                            1, 2, 3, 4, 6, 7, 0};
    int obshto = 0;
    bool win = false;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            for (x = 0; x < 10; x++) {
                for (y = 0; y < 7; y++) {
                    if (numbers[i][j] == numbers[x][y]) {
                        win = false;
                        break;
                    }
                    win = true;
                }
                if (win) {
                    cout << i << " matches with " << x << endl;
                }
            }
        }
    }
    return 0;
}
