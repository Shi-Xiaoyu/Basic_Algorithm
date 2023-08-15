#include<stdio.h>

int main(){
    
        int a = 1;
        char b = '*';
        //输入的数字和字符

        int spot = 1; //参与组成沙漏的点数，默认参与为一个点
        int temp = 1; //每一行的点数
        int count = 1; //确定三角形的行数
        int remain = 0; //余下未使用的点

        scanf("%d %c",&a,&b);
        
        while (spot < a && a >= spot + (temp + 2)*2 ){ //如果使用点数是比输入的点数少且比总点数加下一行的点数大，则执行循环
            count ++ ; //有多少行
            temp += 2; //这一行点数加2
            spot += temp*2; //把这一行点数*2之后在和目前统计的点数相加
        }

        remain = a - spot;//用输入的点数减去统计的点数得到多余的点数

        for(int i1 = count ; i1 > 1 ; i1--){

            for (int i2 = 0 ; i2 < count - i1 ; i2++ ){
                printf(" ");
            }
            for (int i3 = 0 ; i3 < i1*2-1 ; i3 ++){
                printf("%c",b);
            }
            printf("\n");
        }

        for(int i1 = 1 ; i1 <= count ; i1 ++){
            for (int i2 = 0 ; i2 < count - i1 ; i2++ ){
                printf(" ");
            }
            for (int i3 = 0 ; i3 < i1*2-1 ; i3 ++){
                 printf("%c",b);
            }

            if(i1 != count) {
                printf("\n");
            }
        }
            printf("\n");
            printf("%d",remain);
    
}
