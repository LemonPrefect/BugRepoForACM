#include <cstdio>
#include <cstdlib>
#include <algorithm>
//#define ARRAYLENGTH 1000010
using namespace std;
typedef struct warehouse{
    double ratio;
    double javaBean;
    double catFood;
} house;
int compareSortByRatioAlignJavabean(const void *houseA,const void *houseB);

int main(){
    house *houses;
    double catFoodHad = 0;
    int room = 0;
    while(scanf("%lf %d",&catFoodHad,&room) != EOF){
        if(catFoodHad == -1 && room == -1){
            break;
        }
        houses = (house*)calloc(room,sizeof(warehouse));
        for(int i = 0;i < room;i++){
            scanf("%lf %lf",&houses[i].javaBean,&houses[i].catFood);
            houses[i].ratio = houses[i].javaBean / houses[i].catFood; //how much can the mouse get by one pound catFood
        }
        qsort(houses,room,sizeof(houses[0]),compareSortByRatioAlignJavabean);
        double javaBeansGot = 0;
        for(int i = 0;i < room;i++){
            if(catFoodHad == 0.0){
                break;
            }
            if(catFoodHad >= houses[i].catFood){
                javaBeansGot += houses[i].javaBean;
                catFoodHad -= houses[i].catFood;
                continue;
            }else{
                javaBeansGot += catFoodHad * houses[i].ratio;
                catFoodHad = 0;
            }
        }
        printf("%.3lf\n",javaBeansGot);
        free(houses);
    }
}
int compareSortByRatioAlignJavabean(const void *houseA,const void *houseB){
    house pA = *(house*)houseA;
    house pB = *(house*)houseB;
    if(pA.ratio == pB.ratio){
        if(pA.javaBean > pB.javaBean){
            return -1;
        }else if(pA.javaBean < pB.javaBean){
            return 1;
        }else{
            return 0;
        }
    }else if(pA.ratio > pB.ratio){
        return -1;
    }else if(pA.ratio < pB.ratio){
        return 1;
    }
}