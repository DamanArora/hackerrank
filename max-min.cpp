#include<iostream>
#include<cstdio>

using namespace std;


int main(){
    long int a[5],sum=0;
    long int temp;
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
	printf("%ld %ld",a[0],a[4]);
}

