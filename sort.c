#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *data;
	int m,n,o,p,q,r,s,t,u,v;
	printf("%s%c%c\n",
	"Content-Type:text/html;charset=iso-8859-1",13,10);
	printf("<TITLE>Sorting Array elements</TITLE>\n");
	printf("<H3>Sorting Array elements</H3>\n");
	data = getenv("QUERY_STRING");
	if(data == NULL)
  		printf("<P>Error! Error in passing data from form to script.");
	else if(sscanf(data,"m=%d&n=%d&o=%d&p=%d&q=%d&r=%d&s=%d&t=%d&u=%d&v=%d",&m,&n,&o,&p,&q,&r,&s,&t,&u,&v)!=10)
  		printf("<P>Error! Invalid data. Data must be numeric.");
	else
	{
		int i, j,k, a, number[10];
		number[0]=m;
		number[1]=n;
		number[2]=o;
		number[3]=p;
		number[4]=q;
		number[5]=r;
		number[6]=s;
		number[7]=t;
		number[8]=u;
		number[9]=v;

    

	     	for (i = 0; i < 10; i++)
	    	{
	        	for (j = i + 1; j < 10; j++)
	        	{
	            		if (number[i] > number[j])
	            		{
			                a =  number[i];
			                number[i] = number[j];
			                number[j] = a;
			        }
		     	}
	    	}
	
		printf("The numbers arranged in ascending order are given below \n");
		for (k=0;k<10;k++)
		{	
			printf("%d\n",number[k]);
			
		}
	}		
	return 0;
}
