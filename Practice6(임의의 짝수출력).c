    // 6. 2부터 20 사이의 10개의 짝수 중에서 임의로 하나를 선택하여 출력하는 프로그램을 작성하시오.
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
