#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	int b,c;
	double s=0;
    for(int i=1;;i++){
    	s+=1.0/i; //设计为浮点数除法
    	if(s>a){
    		printf("%d",i);
    		break;
		}
	}
	return 0; 
} 

