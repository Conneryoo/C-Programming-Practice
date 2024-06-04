    // 14. 별로 이루어진 삼각형 출력


int main(void){
    int i, j, k;
    for (i= 1; i<=10; i++){
        for(k=10; k>=i; k--){
            printf(" ");
        }
        for(j=1; j<=2*(i-1)+1; j++){
            printf("*");
        }
        printf("\n");
    }

    
}
