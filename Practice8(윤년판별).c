    // 8. 연도를 입력 받아서 평년과 윤년을 판단하는 프로그램
    /*
int main(void)
{
    int year;
    int isleap;
    
    printf("연도는?");
    scanf("%d", &year);
    isleap=(year%4 ==0) && (year%100 !=0) || (year%400==0);
    if(isleap)
        printf("%d년은 윤년입니다. \n", year);
    else
        printf("%d년은 평년입니다. \n", year);
    
    return 0;
}
