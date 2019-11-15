#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int SortCompareByTimeStartAlignTimeEnd(const void *tvProgA,const void *tvProgB);
typedef struct tvProgram{
        int timeStart;
        int timeEnd;
    }tvProg;
int main(){
    int numProg = 0;
    tvProgram *programs;
    while(scanf("%d",&numProg) != EOF){
        if(numProg == 0){
            break;
        }
        programs = (tvProg*)calloc(numProg,sizeof(tvProgram));
        for(int i = 0;i < numProg;i++){
            scanf("%d %d",&programs[i].timeStart,&programs[i].timeEnd);
        }
        qsort(programs,numProg,sizeof(programs[0]),SortCompareByTimeStartAlignTimeEnd);
        int tvProgWatched = 0;
        int endPoint = programs[0].timeEnd;
        tvProgWatched++;
        for(int i = 0;i < numProg;i++){
            if(programs[i].timeEnd == endPoint){
                continue;
            }
            if(programs[i].timeStart >= endPoint){
                tvProgWatched++;
                endPoint = programs[i].timeEnd;
            }
        }
        printf("%d\n",tvProgWatched);
        free(programs);
    }
    return 0; 
}

int SortCompareByTimeStartAlignTimeEnd(const void *tvProgA,const void *tvProgB){
    tvProgram pA = *(tvProg*)tvProgA;
    tvProgram pB = *(tvProg*)tvProgB;
    if(pA.timeEnd == pB.timeEnd){
        if(pA.timeStart > pB.timeStart){
            return -1;
        }else if(pA.timeStart < pB.timeStart){
            return 1;
        }else{
            return 0;
        }
    }else if(pA.timeEnd > pB.timeEnd){
        return 1;
    }else if(pA.timeEnd < pB.timeEnd){
        return -1;
    }
// -1 : pA在pB前
// 1：pA在pB后 
// 0：不定
}