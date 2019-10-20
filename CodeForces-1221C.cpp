#include <cstdio>
#include <cmath>
int main(){
    int stuMathematician = 0;
    int stuCoder = 0;
    int stuNoSpecialization = 0;
    int numTeam = 0;
    int timesToRun = 0;
    int i,j;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        scanf("%d %d %d",&stuCoder,&stuMathematician,&stuNoSpecialization);
        stuNoSpecialization += abs(stuCoder - stuMathematician);
        if(stuMathematician > stuCoder){
            stuMathematician -= stuMathematician - stuCoder;
        }else{
            stuCoder -= stuCoder - stuMathematician;
        }
        if(stuNoSpecialization >= stuMathematician){
            printf("%d\n",stuMathematician);
            continue;
        }else{
           stuMathematician = (stuMathematician + stuNoSpecialization + stuCoder) / 3;
           printf("%d\n",stuMathematician);
           continue;
        }
    }
}