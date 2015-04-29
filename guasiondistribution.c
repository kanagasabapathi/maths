#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
	float var[3],mean[3],f[3],f1[3],f2[3],x;
	int i;
	printf("Enter X value : ");
	scanf("%f",&x);

	for(i=0;i<3;i++){
  		printf("Enter the value --> Var, Mean\n");
		scanf(" %f %f",&var[i],&mean[i]);
		f1[i]=1/(sqrt(2*pi*var[i]));
		f2[i]=exp((pow((x-mean[i]),2))/(2*var[i]));
	
		f[i]=f1[i]*f2[i];

		printf("\nresult : %f\n",f[i]);
	}

}
