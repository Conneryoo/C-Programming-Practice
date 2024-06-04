    // 13. 국어, 영어, 수학, 과학 점수를 입력 받아 평균과 합격/불합격을 출력하는 프로그램.
    //평균이 60점 이상이면 '합격', 60점 미만이면 '불합격'
    //단, 한 과목이라도 40점 미만이면 '불합격(과락)' 이라고 출력함.



int main(void){
    int a, b, c, d;
    int avg;
    printf("국어, 영어, 수학, 과학 점수를 차례로 입력하세요 : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    avg = (a + b + c + d) / 4;
    
    if(avg>=60){
        if(a<40){
            printf("평균은 %d이며\n", avg);
            printf("불합격(과락)입니다");
        }
        else if(b<40){
            printf("평균은 %d이며\n", avg);
            printf("불합격(과락)입니다");
        }
        else if(c<40){
            printf("평균은 %d이며\n", avg);
            printf("불합격(과락)입니다");
        }
        else if(d<40){
            printf("평균은 %d이며\n", avg);
            printf("불합격(과락)입니다");
        }
        else{
            printf("평균은 %d이며\n", avg);
            printf("합격입니다");
        }
    }
    else if(avg<60){
        printf("평균은 %d이며\n", avg);
        printf("불합격입니다");
    }
}
