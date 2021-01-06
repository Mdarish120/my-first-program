#include<stdio.h>
 void main()
 
 {
 	int x ,y;
 	void add(int, int);
 	printf("Enter a number");
 	scanf("%d %d" ,&x ,&y  );
 	add(x, y);
 	
 }
 
 void add( int a ,int b)
 {
 	
 	int c;
 	c=a+b;
 	printf(" sum is %d" ,c);
 	
 	
 	
 	
 }
