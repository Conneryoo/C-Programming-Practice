//
//  Practice.c
//  Epiphany
//
//  Created by Conner Yoo on 2021/03/22.
//

#include "Practice.h"

//#pragma warning(disable: 4996)
    
    

    
    // 1. 다음 문장을 화면에 출력해보자.
    //     'Customer price' has icnreased by 1/10. It corresponds to 10%.
    /*
int main(void){
        printf("\'Consumer price\' has increased by 1/10. It corresponds to 10%%\n");
        
        return 0;
}
     
    */
    
    
    // 2.연월일과 시간이 다름과 같은 형식으로 입력된다.
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
    */
    
   
    
    
    // 3. scanf를 써서 영문 이름 이니셜을 입력받고, 그걸 아래와 같이 출력하는 프로그램을 작성해보자.
    //   >>LNY
    //   >>Initials of your name are L, N and Y.
    //   문자형 변수 사용
    /*
int main(void){
     
        char ini1, ini2, ini3;
        printf("Enter initals of your name: ");
        scanf("%c%c%c", &ini1, &ini2, &ini3);
        printf("Initials of your name are %c, %c and %c.\n", ini1, ini2, ini3);
        return 0;
}
     */
    
    // 4. 네 정수를 입력하여 네 정수의 평균을 계산하여 출력하는 프로그램을 작성하시오.
    //    평균은 실수가 되도록 계산하시오.
    /*
int main(void){
        int a, b, c, d;
        double average;
        printf("Enter four integers.: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        average = (a + b + c + d) / (double)4;
        printf("The average of %d, %d, %d, %d is %.2lf", a, b, c, d, average);
        return 0;
}
     */
    
    // 5. 시간을 분 단위로 입력하여 몇 시간 몇 분인지를 계산하는 프로그램을 작성하시오.
    //    예를 들어서 320분은 5시간 20분이다.
    /*
int main(void){
        int minutes, hours;
        printf("Enter minutes: ");
        scanf("%d", &minutes);
        hours = minutes / 60;
        minutes = minutes % 60;
        printf("It is %d 시간 %d분", hours, minutes);
        int sec, min;
        printf("Enter seconds: ");
        scanf("%d", &sec);
        hours = sec / 3600;
        min = (sec % 3600) / 60;
        sec = (sec % 3600) % 60;
        printf("It is %d시간 %d분 %d초", hours, min, sec);
        
     
        return 0;
}
     
     */
    
    
    // 6. 4개의 숫자 a, b, c, d에 대한 산술 평균 A와 기하 평균 G는 다음 식에 의해 얻어진다.
    //    4개의 실수를 입력받아서 산술 평균과 기하평균을 계산하는 프로그램을 작성하시오.
    /*
#include <math.h>
int main(void){
        float a, b, c, d;
        float avg, gm;    //기하평균: geometric mean
        printf("Enter four intergers: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);
        avg = (a + b + c + d) / 4;
        gm = pow(a * b * c * d, 1/4);
        printf("산술 평균: %f, 기하평균: %f", avg, gm);

        return 0;
}
     */

    // 7. 2부터 20 사이의 10개의 짝수 중에서 임의로 하나를 선택하여 출력하는 프로그램을 작성하시오.
    /*
#include <stdlib.h>
#include <time.h>
int main(void){
        int a;
        srand(time(NULL));
        a = 1 + rand() % 10;    //1부터 10까지 난수 발생
        printf("발생한 랜덤 짝수: %d\n", a * 2);
    
        return 0;
}
    */

    // 8. 정수를 하나 입력받아, 짝수인지 홀수인지 판별하는 프로그램.(06분반 했음)
    /*
int main(void){
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if ((num % 2) == 0) {
        printf("%d는 짝수 입니다.\n", num);
    }else printf("%d는 홀수 입니다.\n", num);
    return 0;
}
     
    */

    // 9. 연도를 입력 받아서 평년과 윤년을 판단하는 프로그램
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
     */

    // 10. 나이를 입력 받아 나이에 따른 놀이동산 입장료를 계산하는 프로그램
    // :입장료 정가 : 2만원
    // :1-6세 미만 : 무료, 6-60세미만 : 정가, 60세 이상 50%

/*

int main(void){
    int age;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    if(age<=5)
        printf("무료입니다");
    else if(age<=60)
        printf("2만원입니다");
    else
        printf("1만원입니다");
    
    return 0;
}
     */

    // 11. 가위바위보 프로그램
    // : 1, 2, 3 중 하나를 입력 받아서 1은 '가위', 2는 '바위', 3은 '보'로 취급하여
    //   컴퓨터가 랜덤( rand()함수 사용)하게 선택한 가위바위보와 대결 (if문 사용) 하는 프로그램.


    /*
#include<stdlib.h>
#include<time.h>

int main(void){
    int user_num;
    int com_num;
    
    printf("1: 가위, 2: 바위, 3: 보:  ");
    scanf("%d", &user_num);
    srand(time(NULL));
    com_num = rand() % 3 + 1; // 1-3까지 중 하나 >> 0, 1, 2 중 하나
    
    if(user_num ==1){
        if(com_num==1) printf("Draw\n");
        else if(com_num==2) printf("Lose\n");
        else printf("User Win\n");
    }
    else if(user_num ==2){
        if(com_num==2) printf("Draw\n");
        else if(com_num==3) printf("Lose\n");
        else printf("User Win\n");
    }
    else if(user_num ==3){
        if(com_num==3) printf("Draw\n");
        else if(com_num==1) printf("Lose\n");
        else printf("User Win\n");
    }
    else{
        printf("잘못 입력하셨습니다");
    }
    return 0;
}
     */
     

    // 12. 3개의 정수를 입력 받아 MAX min 출력하기

/*
int main(void){
    int num1, num2, num3;
    
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1>=num2){
        if(num1>=num3){
            if(num2>=num3){
                printf("Max=%d\n", num1);
                printf("MIN=%d", num3);
            }
            else if(num2<num3){
                printf("Max=%d\n", num1);
                printf("MIN=%d", num2);
            }
        }
        else if(num1<num3){
            printf("MAX=%d\n", num3);
            printf("MIN=%d", num2);
            
        }
    }
    else if(num1<num2){
        if(num2>=num3){
            if(num1>=num3){
                printf("Max=%d\n", num2);
                printf("Min=%d", num3);
            }
            else if(num1<num3){
                printf("Max=%d\n", num2);
                printf("Min=%d", num1);
            }
        
        }
        else if(num2<num3){
            printf("Max=%d\n", num3);
            printf("Min=%d", num1);
        }
        
    }
    else if(num2>=num3){
        if(num2>=num1){
            if(num3>=num1){
                printf("Max=%d\n", num2);
                printf("Min=%d", num1);
            }
            else if(num3<num1){
                printf("Max=%d\n", num2);
                printf("Min=%d", num3);
            }
        }
        else if(num2<num1){
            printf("Max=%d\n", num1);
            printf("Min=%d", num3);
        }
    }
    else if(num2<num3){
        if(num3>=num1){
            if(num2>=num1){
                printf("Max=%d\n", num3);
                printf("Min=%d", num1);
            }
            else if(num2<num1){
                printf("Max=%d\n", num3);
                printf("Min=%d", num2);
            }
            
        }
        else if(num3<num1){
            printf("Max=%d\n", num1);
            printf("Min=%d", num2);
        }
    }
    
}
*/

    // 13. 국어, 영어, 수학, 과학 점수를 입력 받아 평균과 합격/불합격을 출력하는 프로그램.
    //평균이 60점 이상이면 '합격', 60점 미만이면 '불합격'
    //단, 한 과목이라도 40점 미만이면 '불합격(과락)' 이라고 출력함.
/*
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
*/



    // 14. 별로 이루어진 삼각형 출력
/*
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
*/

    // 15. 원하는 단수를 입력 받아 3*3줄로 구구단을 출력하는 프로그램
/*
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
*/
