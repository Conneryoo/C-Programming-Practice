    // 11. 3개의 정수를 입력 받아 MAX min 출력하기


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
