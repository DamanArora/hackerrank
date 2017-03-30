#include<stdio.h>
int main(){
	int n,i;
	long long int count=0,val=0,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&val);
		if(val>a){
			a=val;
			count=1;
		}
		else if(val==a){
			count++;
		}
	}
	printf("%lld",count);
	return 0;
}
