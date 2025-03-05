#include <stdio.h>

int multSoma(int a, int b, int res){
    if(b == 0) return res;
    res += a;
    return multSoma(a, b -1, res);
}

int somas(int a, int b){
    if(a == 0 && b == 0) return;
    else if (a == 0 && b != 0) return 1 + somas(a, b-1);
    else if (a!=0 && b == 0) return 1 + somas(a-1, b);
    else return 1 + 1 + somas(a-1,b-1);
}

double somasSobreN(int a, float b){
    if (a < b) return;
    return 1/b + somasSobreN(a, b+1);
}

int main(){
    int res = multSoma(3,4, 0);
    printf("mult = %d\n", res);
    res = somas(1,4);
    printf("somas = %d\n", res);
    printf("Soma /n: %.2f\n", somasSobreN(2,1));

}