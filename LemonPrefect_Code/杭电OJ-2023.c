//杭电OJ 2023
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int curriculum = 0;
    int student = 0;
    int i,j;
    int studentExcellent;
    int conditionLog;
    double scoreArray[100][100];
    double studentAverage[100];
    double curriculumAverage[100];
    while(scanf("%d %d",&student,&curriculum) != EOF){
        studentExcellent = 0;
        memset(scoreArray,0,sizeof(scoreArray));
        memset(studentAverage,0,sizeof(studentAverage));
        memset(curriculumAverage,0,sizeof(curriculumAverage));
        //construct the Array of scores divided by student
        for(i = 0;i < student;i++){
            for(j = 0;j < curriculum;j++){
                scanf("%lf",&scoreArray[i][j]);
            }
        }
        //calculate the average of every student and construct an Array
        for(i = 0;i < student;i++){
            for(j = 0;j < curriculum;j++){
                studentAverage[i] += scoreArray[i][j];
            }
            studentAverage[i] = studentAverage[i] / (double)curriculum;
        }
        //calculate the average of every curriculum and construct an Array
        for(i = 0;i < curriculum;i++){
            for(j = 0;j < student;j++){
                curriculumAverage[i] += scoreArray[j][i];
                
            }
            curriculumAverage[i] = curriculumAverage[i] / (double)student;
        }
        //sort the students excellent
        for(i = 0;i < student;i++){
            conditionLog = 0;
            for(j = 0;j < curriculum;j++){
                if(scoreArray[i][j] < curriculumAverage[j]){
                    continue;
                }
                if(scoreArray[i][j] >= curriculumAverage[j]){
                    conditionLog++;
                }
            }
            if(conditionLog == curriculum){
                studentExcellent++;
            }
        }
        //output the result
       
        for(i = 0;i < student;i++){
            if(i == student - 1){
                printf("%.2lf\n",studentAverage[i]);
            }else{
                printf("%.2lf ",studentAverage[i]);
            }
        }
         for(i = 0;i < curriculum;i++){
            if(i == curriculum - 1){
                printf("%.2lf\n",curriculumAverage[i]);
            }else{
                printf("%.2lf ",curriculumAverage[i]);
            }
        }
        printf("%d\n\n",studentExcellent);
    }
    return 0;
}
