#include<stdio.h>
main()
{
	int choice,r,l,b,base,height;
	printf("\n press 1 for find Area of circle");
	printf("\n press 2 for find Area of Rectangle");
	printf("\n press 3 for find Area of tiangle");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n Enter the radius");
			scanf("%d",&r);
			printf("\n area of cirlce=%f",(3.14*r*r));
		break;
		case 2:
			printf("\n Enter len and breadth");
			scanf("%d %d",&l,&b);
			printf("\n area of rectangle=%d",l*b);
		break;
		case 3:
			printf("\n Enter base and height");
			scanf("%d %d",&base,&height);
			printf("\n area of triangle=%f",(float)(base*height));
		break;
		default:
			printf("\n wrong choice");
		break;			
	}		
}
