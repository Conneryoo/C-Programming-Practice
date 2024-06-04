    // 5. 4개의 숫자 a, b, c, d에 대한 산술 평균 A와 기하 평균 G는 다음 식에 의해 얻어진다.
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
