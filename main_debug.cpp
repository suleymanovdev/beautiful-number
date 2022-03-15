#include <iostream>

int main() {
    int N, M;

    std::cin >> N >> M;

    int d[N], r[M];

    std::cout << "______________________\n";

    for (int i = 0; i < N; i++) {
        std::cin >> d[i];
	std::cout << d[i] << std::endl;
    }

    std::cout << "______________________\n";

    for (int j = 0; j < M; j++) {
        std::cin >> r[j];
	std::cout << r[j] << std::endl;
    }

    std::cout << "______________________\n";

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
        std::cout << rmin << "a" << std::endl;
    }
    else if (rmin > dmin) {
	std::cout << dmin << rmin << "b" << std::endl;
    }
    else {
        std::cout << rmin << dmin << "c" << std::endl;
    }

    return 0;
}
