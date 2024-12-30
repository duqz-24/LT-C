#include <stdio.h>
#include <stdlib.h>

int **tao_ma_tran(int hang, int cot) {
    int **matran = (int **)malloc(hang * sizeof(int *));
    for (int i = 0; i < hang; i++) {
        matran[i] = (int *)malloc(cot * sizeof(int));
    }

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }

    return matran;
}

int main() {
    int hang, cot;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);

    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);

    int **matran = tao_ma_tran(hang, cot);

    printf("Ma tran vua tao:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < hang; i++) {
        free(matran[i]);
    }
    free(matran);

    return 0;
}