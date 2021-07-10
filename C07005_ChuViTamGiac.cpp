#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		float x1,y1,x2,y2,x3,y3;
		scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
		float c1=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
		float c2=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		float c3=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
		if((c3+c2>c1)&&(c2+c1>c3)&&(c1+c3>c2)){
			printf("%.3f\n",c1+c2+c3);
		}else{
			printf("INVALID\n");
		}
	}
	return 0;
}