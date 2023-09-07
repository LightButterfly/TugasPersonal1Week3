// konversi X dalam KM ke dalam M & CM
// MHD. AL-HAFIDZ ABD. AZIZ KURNIAWAN
// 2702369882

#include <stdio.h>

int main(){
    float KM, M, CM;
    printf("inputkan nilai kilometer: ");
    scanf("%f", &KM);

    M = KM * 1000;
    CM = M * 100;

    printf("\nHasil konversi dari KM ke M: %.2f", M);
    printf("\nHasil konversi dari KM ke CM: %.2f", CM);
    
    return 0;
}