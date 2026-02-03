#include<stdio.h>
long converd(long h,long m,long s);
void main(){
	long hour,min,sec;
	scanf("%ld %ld %ld",&hour,&min,&sec);
	converd(hour,min,sec);
}
long converd(long h,long m,long s){
	long sum = 0;
	int i;
	if(h > 0){
		for(i=1;i<=h;i++){
			sum += 3600; 
	    } 
	}
	if(m > 0){
		for(i=1;i<=m;i++){
			sum += 60;
		}
	}
	if(s > 0){
		sum += s;
	}
	printf("%ld\n",sum);
}
