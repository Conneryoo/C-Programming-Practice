    // 4. 시간을 분 단위로 입력하여 몇 시간 몇 분인지를 계산하는 프로그램을 작성하시오.
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
