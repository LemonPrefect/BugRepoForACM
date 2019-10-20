#include <cstdio>
#include <iostream>
#include <cstdlib>
int main(){
    int numCurriculum = 0;
    int *scoreDiffArray;
    float scoreToBe = 0.0;
    float scoreInput = 0.0;
    int i,j;
    scanf("%d\n",&numCurriculum); 
    scoreToBe = 4.5 * numCurriculum;
    scoreDiffArray = (int*)calloc(numCurriculum,sizeof(int));
    for(i = 0;i < numCurriculum;i++){
        scanf("%d",&scoreDiffArray[i]);
        scoreInput += scoreDiffArray[i];
        scoreDiffArray[i] = 5 - scoreDiffArray[i];
    }
    for(i = 0;i < numCurriculum;i++){
        for(j = 0;j < numCurriculum - 1;j++){
            if(scoreDiffArray[j] < scoreDiffArray[j + 1]){
                int ex = scoreDiffArray[j];
                scoreDiffArray[j] = scoreDiffArray[j + 1];
                scoreDiffArray[j + 1] = ex;
            }
        }
    }
    if(scoreInput >= scoreToBe){
        printf("0\n");
        return 0;
    }else{
        for(i = 0,j = 0;scoreInput < scoreToBe;i++){ 
            if(scoreDiffArray[i] != 0){
                scoreInput += scoreDiffArray[i];
                j++;
            }
		} 
        i++;
        printf("%d\n",j);
        return 0;
    }
}
