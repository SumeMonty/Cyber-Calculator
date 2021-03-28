#include<stdio.h>

int main()
{
	int i;
	printf("-------\n\n");
	printf("created by___________Harshit Raheja\n");
	printf("-------\n\n");
	printf("WELCOME TO GEOMETRY SOFTWARE\n");
	printf("-------\n\n");
	printf("MADE FOR 10th STANDARD ONLY\n");
	printf("\n\n\n");
	printf("SELECT YOUR CHAPTER\n\n");
	printf("[1] SIMILARITY\n\n");
	printf("[2] PYTHAGORAS THEOREM\n\n");
	printf("[3] CO-ORDINATE GEOMETRY\n\n");
	printf("[4] MENSURATION\n\n");
	printf("INPUT CHAPTER NUMBER HERE: ");
	scanf("%d",&i);
	if(i == 1)//SIMILARITY
	{
		int b;
		int h;
		int j;
		printf("\n\n");
		printf("-------\n\n");
		printf("[1] SIMILARITY\n\n");
		printf("Area of Triangle\n\n\n");
		printf("Enter BASE of TRIANGLE: \n");
		scanf("%d",&b);
		printf("Enter HEIGHT of TRIANGLE: \n");
		scanf("%d",&h);
		printf("final answer is %f\n\n",0.5*b*h);
	}
		if(i == 2)//PYTHAGORAS THEROEM 
	{
		int s1;
		int s2;
		int h;
		printf("\n\n");
		printf("-------\n\n");
		printf("[2] PYTHAGORAS THEROEM\n\n");
		printf("To find HYPOTENUSE(h)\n\n\n");
		printf("Enter FIRST SIDE of RIGHT ANGLE TRIANGLE: \n");
		scanf("%d",&s1);
		printf("Enter SECOND SIDE of RIGHT ANGLE TRIANGLE: \n");
		scanf("%d",&s2);
		printf("HYPOTENUSE(h)^2 is %d\n\n",s1*s1+s2*s2);
	}
		if(i == 3)//CO-ORDINATE GEOMETRY
	{
		int z;
		printf("\n\n");
		printf("-------\n\n");
		printf("[3] CO-ORDINATE GEOMETRY\n\n");
		printf("SELECT ANY ONE\n\n\n");
		printf("-------\n\n");
		printf("[1] MIDPOINT FORMULA\n\n");
		printf("-------\n\n");
		printf("INPUT: ");
		scanf("%d",&z);
		if (z == 1)//CO-ORDINATE GEOMETRY-MID POINT FORMULA
		{
			int X1;
			int X2;
			int Y1;
			int Y2;
			printf("[1] MIDPOINT FORMULA\n\n");
			printf("Enter the value of X1: ");
			scanf("%d",&X1);
			printf("Enter the value of X2: ");
			scanf("%d",&X2);
			printf("Enter the value of Y1: ");
			scanf("%d",&Y1);
			printf("Enter the value of Y2: ");
			scanf("%d",&Y2);
			printf("Answer coordinate x = %d\n",(X1+X2)/2);
			printf("Answer coordinate y = %d\n",(Y1+Y2)/2);
		}
	}
	
	if (i == 4)//MENSURATION
	{
		int k;
		printf("[4] MENSURATION\n\n");
		printf("-------\n\n");
		printf("[1] CUBOID\n\n");
		printf("[2] CUBE\n\n");
		printf("[3] CYLINDER\n\n");
		printf("[4] CONE\n\n");
		printf("[5] SPHERE\n\n");
		printf("[6] HEMISPHERE\n\n");
		printf("-------\n\n");
		printf("INPUT: ");
		scanf("%d",&k);
		if(k == 1)//MENSURATION-CUBOID
		{
		int l;
		int b;
		int h;	
		printf("-------\n");
		printf("[1] CUBOID\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF LENGTH(l):");
		scanf("%d",&l);
		printf("ENTER THE VALUE OF BREATH(b):");
		scanf("%d",&b);
		printf("ENTER THE VALUE OF HEIGHT(h):");
		scanf("%d",&h);
		printf("LATERAL SURFACE AREA OF CUBOID IS = %d\n\n:",2*h*(l+b));
		printf("TOTAL SURFACE AREA OF CUBOID IS = %d:\n\n",2*(l*b+b*h+h*l));
		printf("VOLUME OF CUBOID IS = %d:\n\n",l*b*h);
		}
		if(k == 2)//MENSURATION-CUBE
		{
		int l;
		printf("-------\n");
		printf("[2] CUBE\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF LENGTH(l):");
		scanf("%d",&l);
		printf("LATERAL SURFACE AREA OF CUBE IS = %d\n\n:",4*(l*l));
		printf("TOTAL SURFACE AREA OF CUBE IS = %d\n\n",6*(l*l));
		printf("VOLUME OF CUBE IS = %d\n\n",l*l*l);
		}
		if(k == 3)//MENSURATION-CYLINDER
		{
		int h;
		int r;
		printf("-------\n");
		printf("[3] CYLINDER\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF HEIGHT(h):");
		scanf("%d",&h);
		printf("ENTER THE VALUE OF RADIUS(r):");
		scanf("%d",&r);
		printf("CURVED SURFACE AREA OF CYLINDER IS = %f\n\n",2*3.14*r*h);
		printf("TOTAL SURFACE AREA OF CYLINDER IS = %f\n\n",2*3.14*r*r+h);
		printf("VOLUME OF CYLINDER IS = %f\n\n",3.14*r*r*h);
		}
		if(k == 4)//MENSURATION-CONE
		{
		int h;
		int r;
		int l;
		printf("-------\n");
		printf("[4] CONE\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF HEIGHT(h):");
		scanf("%d",&h);
		printf("ENTER THE VALUE OF RADIUS(r):");
		scanf("%d",&r);
		printf("ENTER THE VALUE OF LENGTH(l):");
		scanf("%d",&l);
		printf("CURVED SURFACE AREA OF CONE IS = %f\n\n",3.14*r*l);
		printf("TOTAL SURFACE AREA OF CONE IS = %f\n\n",3.14*r*r+h);
		printf("VOLUME OF CONE IS = %f\n\n",1/3*3.14*r*r*h);
		}
		
		if(k == 5)//MENSURATION-SPHERE
		{
		int r;
		printf("-------\n");
		printf("[5] SPHERE\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF RADIUS(r):");
		scanf("%d",&r);
		printf("SURFACE AREA OF SPHERE IS = %f\n\n",4*3.14*r*r);
		printf("VOLUME OF HEMISPHERE IS = %f\n\n",4/3*3.14*r*r);
		}
		if(k == 6)//MENSURATION-HEMISPHERE
		{
		int r;
		printf("-------\n");
		printf("[6] HEMISPHERE\n");
		printf("-------\n");
		printf("ENTER THE VALUE OF RADIUS(r):");
		scanf("%d",&r);
		printf("SURFACE AREA OF HEMISPHERE IS = %f\n\n",2*3.14*r*r);
		printf("VOLUME OF HEMISPHERE IS = %f\n\n",2/3*3.14*r*r*r);
		}
		
	}
	getch();
}