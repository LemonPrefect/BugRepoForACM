#include <cstdio>
int main(){
    int studentTotal = 0;
    int studentVisitBD = 0;
    int studentVisitBK = 0;
    int studentVisitBDnBK = 0;
    int studentStayAtHome = 0;
    scanf("%d %d %d %d",&studentVisitBD,&studentVisitBK,&studentVisitBDnBK,&studentTotal);
    studentStayAtHome = studentTotal - studentVisitBDnBK - (studentVisitBK - studentVisitBDnBK) - (studentVisitBD - studentVisitBDnBK);
    if(studentStayAtHome >= 1 && studentVisitBK - studentVisitBDnBK >= 0 && studentVisitBD - studentVisitBDnBK >= 0){
        printf("%d\n",studentStayAtHome);
    }else{
        printf("-1\n");
    }
    return 0;
}
