#include <stdio.h>

void calculatePaperSize(int n, int width, int height) {
    printf("A%d: %d mm x %d mm\n", n, width, height);
}

int main() {
    // Dimensions of A0 paper
    int width = 1189;
    int height = 841;

    // Print A0
    calculatePaperSize(0, width, height);

    // Calculate and print A1 to A8
    for (int n = 1; n <= 8; ++n) {
        // A(n) is obtained by halving the shorter side of A(n-1)
        if (width > height) {
            width = height / 2;
        } else {
            height = width / 2;
        }

        calculatePaperSize(n, width, height);
    }

    return 0;
}
