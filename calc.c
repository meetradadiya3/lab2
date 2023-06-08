
#include<stdio.h>
calc(int n)

{
	int i,a,b;
	do{
		if(n==6)
		{
			printf("Exit...\n");
		}
		else if(n>6)
		{
			printf("plz properchoice enter.\n");
	    }
	    else if(n<6)
	    {
	    	switch(n)
	    	{
	    		case 1 :
	    			printf("Enter value A=");
	    			scanf("%d",&a);
	    			printf("Enter value b=");
	    			scanf("%d",&b);
	    			printf("Addition of  A+B=%d",a+b);
	    			break;
	    			
	         	case 2 : 
	    			printf("Enter value A=");
	    			scanf("%d",&a);
	    			printf("Enter value b=");
	    			scanf("%d",&b);
	    			printf("substraction of  A-B=%d",a-b);
	    			break;
	    			
	    			
	    		case 3 :
	    			printf("Enter value A=");
	    			scanf("%d",&a);
	    			printf("Enter value b=");
	    			scanf("%d",&b);
	    			printf("multiplication of  A*B=%d",a*b);
	    				break;
	    			
	    		case 4 :
	    			printf("Enter value A=");
	    			scanf("%d",&a);
	    			printf("Enter value b=");
	    			scanf("%d",&b);
	    			printf("division of  A/B=%d",a/b);
						break;	
	    			
	    		case 5 :
	    			printf("Enter value A=");
	    			scanf("%d",&a);
	    			printf("Enter value b=");
	    			scanf("%d",&b);
	    			printf("moduls of  A%B=%d",a%b);
	    				break;
			}
		}
		
	}while(n<6);
	
	
	}
	
main()
{
	int  n;
	printf("press 1 to addition\n");
	printf("press 2 to substraction\n");
	printf("press 3 to multiplication\n");
	printf("press 4 to division\n");
	printf("press 5 to moduls\n");
	printf("press 6 to exit\n");
	printf("enter your choice=");
	scanf("%d",&n);
	calc(n);
}

