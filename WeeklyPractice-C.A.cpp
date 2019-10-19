#include <cstdio>
#include <algorithm>
using namespace std;
int gcd(int a,int b);
int main(){
	int* arrayA;
	int* arrayB;
	int* arrayLog;
	int* arrayX;
	int* arrayY;
	int numInLines = 0;
	int i,j;
	while(scanf("%d",&numInLines) != EOF){
		if(numInLines == 0){
			break;
		}
		arrayA = (int*)calloc(numInLines,sizeof(int));
		arrayB = (int*)calloc(numInLines,sizeof(int));
		arrayLog = (int*)calloc(numInLines,sizeof(int));
		arrayX = (int*)calloc(numInLines,sizeof(int));
		arrayY = (int*)calloc(numInLines,sizeof(int));
		for(i = 0; i < numInLines; i++){
			scanf("%d %d",&arrayA[i],&arrayB[i]);
			if(i != 0){
				for(j = i - 1; j >= 0; j--){
					//源数据去重
					if(arrayA[i] == arrayA[j] && arrayB[i] == arrayB[j]){
						i--;
						numInLines--;
						break;
					}
				}
			}
		}
		//X轴数据相等记录
		for(i = 0; i < numInLines; i++){
			if(i == 0){
				arrayX[0] = 1;
				continue;
			}
			for(j = i - 1; j >= 0; j--){
				if(arrayA[i] == arrayA[j]){
					arrayX[i] = arrayX[j] + 1;
					break;
				}
			}
			if(arrayX[i] == 0){
				arrayX[i] = 1;
			}
		}
		//Y轴数据相等记录
		for(i = 0; i < numInLines; i++){
			if(i == 0){
				arrayY[0] = 1;
				continue;
			}
			for(j = i - 1; j >= 0; j--){
				if(arrayB[i] == arrayB[j]){
					arrayY[i] = arrayY[j] + 1;
					break;
				}
			}
			if(arrayY[i] == 0){
				arrayY[i] = 1;
			}
		}
		//斜线GCD
		for(i = 0; i < numInLines; i++){
			if(arrayA[i] == 0 && arrayB[i] != 0){
				arrayB[i] = 1;
				continue;
			} else if(arrayB[i] == 0 && arrayA[i] != 0){
				arrayA[i] = 1;
				continue;
			} else if(arrayA[i] == arrayB[i]){
				arrayA[i] = 0;
				arrayB[i] = 0;
				continue;
			} else{
				int ex = gcd(arrayA[i],arrayB[i]);
				arrayA[i] /= ex;
				arrayB[i] /= ex;
			}
		}
		//斜线数据相等记录
		for(i = 0; i < numInLines; i++){
			if(i == 0){
				arrayLog[0] = 1;
				continue;
			}
			for(j = i - 1; j >= 0; j--){
				if(arrayA[i] == arrayA[j] && arrayB[i] == arrayB[j]){
					arrayLog[i] = arrayLog[j] + 1;
					break;
				}
			}
			if(arrayLog[i] == 0){
				arrayLog[i] = 1;
			}
		}
		//寻找最大值
		int max = 0;
		for(i = 0; i < numInLines; i++){
			if(arrayLog[i] > max){
				max = arrayLog[i];
			} else if(arrayX[i] > max){
				max = arrayX[i];
			} else if(arrayY[i] > max){
				max = arrayY[i];
			}
		}
		if(max == 1 && numInLines > 1){
			max = 2;
		}
		printf("%d\n",max);
	}
}
int gcd(int a,int b){
	return !b ? a : gcd(b,a % b);
}