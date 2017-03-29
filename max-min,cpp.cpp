#include<iostream>
#include<cstdio>

using namespace std;


int main(){
    long int a[5],sum=0;
    int temp;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
    	sum=sum+a[i];
	}
	for(int i=0;i<5;i++){
		a[i]=sum-a[i];
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d %d",a[0],a[4]);
}
	/*
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(sum[i]>sum[j]){
                temp=sum[j];
                sum[j]=sum[i];
                sum[i]=temp;
            }
        }
    }
    printf("%d %d",sum[0],sum[4]);
    return 0;
}*/

