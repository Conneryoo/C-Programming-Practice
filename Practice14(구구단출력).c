    // 14. 원하는 단수를 입력 받아 3*3줄로 구구단을 출력하는 프로그램

int main(void){
    int i;
    printf("원하는 단수를 입력하세요 : ");
    scanf("%d", &i);
    for (int j=1; j<4; j++){
        printf("%d X %d = %d ", i, j, i*j);
    }
    printf("\n");
    for (int j=4; j<7; j++){
        printf("%d X %d = %d ", i, j, i*j);
    }
    printf("\n");
    for (int j=7; j<10; j++){
        printf("%d X %d = %d ", i, j, i*j);
    }
    printf("\n");
}
