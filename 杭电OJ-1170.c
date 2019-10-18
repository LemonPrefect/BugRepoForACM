//杭电OJ 1170
#include <stdio.h>
int main(){
    int timesToRun = 0;
    int i;
    char operatorChar;
    int numA = 0,numB = 0;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%c %d %d",&operatorChar,&numA,&numB);
        getchar();
        switch (operatorChar)
        {
        case '+':
            printf("%d\n",numA + numB);
            break;
        case '-':
            printf("%d\n",numA - numB);
            break;
        case '*':
            printf("%d\n",numA * numB);
            break;
        case '/':
            printf((numA % numB == 0)?("%.0lf\n"):("%.2lf\n"),(double)numA / (double)numB);
            break;   
        }
    }
    return 0;
}
