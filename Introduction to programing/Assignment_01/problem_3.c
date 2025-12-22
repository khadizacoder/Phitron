#include<stdio.h>
int main (){
    int N;
    scanf("%d", &N);
    if(N / 3 * 3 == N){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}