//CodeForces 1173A
#include <stdio.h>
int main(){
    int approvalVote = 0,disapprovalVote = 0,undefinedVote = 0;
    scanf("%d %d %d",&approvalVote,&disapprovalVote,&undefinedVote);
    if(approvalVote + undefinedVote > disapprovalVote && disapprovalVote + undefinedVote < approvalVote){
        printf("+\n");
    }else if(approvalVote +undefinedVote < disapprovalVote && disapprovalVote + undefinedVote > approvalVote){
        printf("-\n");
    }else if(approvalVote == disapprovalVote && undefinedVote == 0){
        printf("0\n");
    }else{
        printf("?\n");
    }
    return 0;
}
