    // 10. 가위바위보 프로그램
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
