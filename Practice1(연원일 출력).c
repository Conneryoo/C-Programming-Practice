// 1.연월일과 시간이 다름과 같은 형식으로 입력된다.
    //    2021/03/15 12:26
    //    이러한 입력을 받아서 다음과 같이 출력하는 프로그램을 작성하시오.
    //    2021년 3월 15일 12시 26분
    /*
int main(void){
     
        int year, month, day, hour, min;

        printf("Enter time: ");
        scanf("%d/%d/%d %d:%d", &year, &month, &day, &hour, &min);

        printf("%d년 %d월 %d일 %d시 %d분", year, month, day, hour, min);
    
        return 0;
}
