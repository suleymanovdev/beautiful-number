#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    if (1 <= N <= 9 && 1 <= M <= 9) {
        int d[N], r[M];

        for (int i = 0; i < N; i++) {
            std::cin >> d[i];
        }

        for (int j = 0; j < M; j++) {
            std::cin >> r[j];
        }

        int dmin = d[0];
        int rmin = r[0];

        for (int i = 1; i < N; i++) {
            if (dmin > d[i]) {
                dmin = d[i];
            }
            else if (dmin == d[i]) {
                dmin = d[i];
            }
            else {
                continue;
            }
        }
        for (int j = 1; j < M; j++) {
            if (rmin > r[j]) {
                rmin = r[j];
            }
            else if (rmin == r[j]) {
                rmin = r[j];
            }
            else {
                continue;
            }
        }

        if (rmin == dmin) {
            std::cout << rmin;
        }
        else if (rmin > dmin) {
            std::cout << dmin << rmin;
        }
        else {
            std::cout << rmin << dmin;
        }
    }

    return 0;
}
