#include<stdio.h>

int main() {
    int n, m, p, aux = 0;
    scanf("%d %d %d", &n, &m, &p);
    int cp[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cp[i][j] = 0;
        }
    }
    cp[0][0] = 1;
    cp[n - 1][m - 1] = 1;
    for(int o = 0; o < n; o++) {
        for(int p = 0; p < m; p++) {
            //printf("%d ", cp[o][p]);
        }
        //printf("\n");
    }
    int pa, pb, i = 0, j = 0, k = n - 1, l = m - 1;

    for(int passo = 1; passo <= p; passo++) {
        scanf("%d %d", &pa, &pb);
        switch (pa)
        {
            case 1:
                i++;
                break;
            case 2:
                i--;
                break;
            case 3:
                j++;
                break;
            case 4:
                j--;
                break;
            default:
                break;
        }
        switch (pb)
        {
            case 1:
                k++;
                break;
            case 2:
                k--;
                break;
            case 3:
                l++;
                break;
            case 4:
                l--;
                break;
            default:
                break;
        }
        if (i == k && j == l) {
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", n - i, m - j, passo);
            aux = 1;
            cp[i][j]++;
            cp[k][l]++;
        }
        else if ((i < 0 || i >= n || j < 0 || j >= m) && !aux) {
            printf("PA saiu na posicao (%d,%d) no passo %d\n", n - i, m - j, passo);
            aux = 1;
        }
        else if ((k < 0 || k >= n || l < 0 || l >= m) && !aux) {
            printf("PB saiu na posicao (%d,%d) no passo %d\n", n - k, m - l, passo);
            aux = 1;
        }
        else{
            cp[i][j]++;
            cp[k][l]++;
        }
        for(int o = 0; o < n; o++) {
            for(int p = 0; p < m; p++) {
                //printf("%02d ", cp[o][p]);
            }
            //printf("\n");
        }
    }
    if(!aux) {
        printf("Nao se encontraram\n");
    }
}
