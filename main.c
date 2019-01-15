#include <stdio.h>

int main(){
    int qian=0;
    printf("yinhangxitong\n");
    while(1){
        printf("1----cunqian\n");
        printf("2----quqian\n");
        printf("3----yue\n");
        printf("4----tuichu\n");

        printf("xiangyingbianhao\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("qingshurucunrujine:\n");
            int cun;
            scanf("%d",&cun);
            qian += cun;
            printf("cunruchenggong,jixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }

        if(code == 2){
            printf("shuruquchujine\n");
            int qu;
            scanf("%d",&qu);
            if(qu < qian){
                qian -= qu;

            printf("quchuchenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            }
            else{
                printf("yuebuzu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }

        if(code == 3){
            
        }

        if(code == 4){
            
        }
    }
    return 0;
}