#include <iostream>
using namespace std;

int main () {
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
    bool win = false;
    for (int i = 0; i < 10; i++) {
        for (int x = i + 1; x < 10; x++) {
            win = false;
            for (int j = 0; j < 7; j++) {
                for (int y = 0; y < 7; y++) {
                    if (numbers[i][j] == numbers[x][y] && numbers[i][j] != 0) {
                        win = false;
                        break;
                    }
                    win = true;
                }
                if (win == false) {
                    break;
                }
            }
            if (win) {
                cout << "Row " << i << " matches with row " << x << endl;
            }
        }
    }
    return 0;
}