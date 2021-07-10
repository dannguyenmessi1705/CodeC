#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double x1,y1,x2,y2,x3,y3;
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double c1=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
		double c2=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		double c3=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
		if((c3+c2>c1)&&(c2+c1>c3)&&(c1+c3>c2)&&c1!=0&&c2!=0&&c3!=0){
			double S,P;
			P=(double)(c1+c2+c3)/2;
			S=(double)sqrt(P*(P-c1)*(P-c2)*(P-c3));
			printf("%.2lf\n",S);
		}else{
			printf("INVALID\n");
		}
	}
	return 0;}