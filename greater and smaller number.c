#include<stdio.h>
 int main()
 
 {
 	int x ,y, z;
 	void maximum(int,int,int);
 	void minimum(int,int,int);
 	printf("Enter the three number");
 	scanf("%d %d %d" ,&x ,&y ,&z);
 	 	maximum( x,y,z);
         minimum(x,y,z);
	 
    }
 	 void maximum(int a, int b,int c)
 	 {
	  
 	 if(a>b)
 	 {
 	 	if(a>c)
 	 	{
 	 		printf("\nMaximum value is %d " ,a);
 	 		
		  }
 	 	
 	 	 		
	  }
 	
 	 if(b>a)
 	 {
 	 	
 	 	if(b>c)
 	 	{
 	 		
 	 		printf("\nMaxium value is %d", b);
 	 	

		  }
 	 	
 	 	 	

	  }
 	

 	if(c>a)
 	{
 		
 		if(c>b)
 		{
 			printf("\nMaxium value is %d" ,c);

		 }
 	
	  		   	
	
	 }
 	
 }
 
 void minimum(int a,int b, int c)
 {
 	if(a<b)
 	{
 		if(a<c)
 		{
 			printf("\nMinimum valueis %d" ,a);
 			
		 }
 	
	 }
 	
 	if(b<a)
 	{
 		if(b<c)
 		{
 			printf("\nMinimum value is %d" ,b);
 			
		 }
 		
 		
 		
	 }
 	if(c<a)
 	{
 		if(c<b)
 		{
 			printf("\nMinimum value is %d",c);
 			
 			
		 }
 		
 		
 		
	 }
 	
 	
 	
 }
 
 
 
 
 
