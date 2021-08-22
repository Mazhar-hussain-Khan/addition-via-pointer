/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
#include<stdio.h>
float summing(float *ptr,float *ptr1){
	float sum=*ptr+*ptr1;
	return sum;
}
int main(){
	//pointers are used to save variables address and its value we can access both by using pointers//
	float num1,num2;
	printf("enter two numbers\n");
	scanf("%f%f",&num1,&num2);
	float *ptr1=&num1;//using pointer to save address and value of variable//
	float *ptr2=&num2;//using pointer to save address and value of variable//
	float sum=summing(ptr1,ptr2);
	float *ptr3=&sum;//using pointer to save address and value of variable//
	printf("%p is address of pointer3 \n",ptr3);//displaying address //
	printf("%f is sum of two numbers\n",*ptr3);//displaying sum///
	return 0;
}
