#include <stdio.h>

int multSoma(int a, int b, int res){
    if(b == 0) return res;
    res += a;
    return multSoma(a, b -1, res);
}

int main(){
    int res = multSoma(3,4, 0);
    printf("%d\n", res);
}