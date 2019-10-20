//杭电OJ 2629
#include <stdio.h>
int main(){
    int timesToRun = 0;
    int i;
    char id[20];
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%s",id);
        getchar();
        if(id[0] == '3' && id[1] == '3'){
            printf("He/She is from Zhejiang,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '1' && id[1] == '1'){
            printf("He/She is from Beijing,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '7' && id[1] == '1'){
            printf("He/She is from Taiwan,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '8' && id[1] == '1'){
            printf("He/She is from Hong Kong,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '8' && id[1] == '2'){
            printf("He/She is from Macao,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '5' && id[1] == '4'){
            printf("He/She is from Tibet,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '2' && id[1] == '1'){
            printf("He/She is from Liaoning,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }else if(id[0] == '3' && id[1] == '1'){
            printf("He/She is from Shanghai,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
        }
    }
    return 0;
}
