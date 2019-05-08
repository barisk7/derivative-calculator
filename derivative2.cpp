#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int func(int dizi[],int derece,int p){
	int toplam2=1;
	int toplam=0;
	for(int i= derece;i>=0;i--){
		for(int a=i;a>=0;a--){
			if (a!=0){
				toplam2=toplam2*p;
			}
		}
		toplam+=dizi[i]*toplam2;
	}
	return toplam;

	
}

int main() {
    int derece;
    


    printf("Welcome to the Derivative Program\n\n");
    printf("The term with the force of 0 is the stabile number\n\n");
    printf("Enter the force of the equation:");
    scanf("%d",&derece);
    printf("\n\n");
 
 	int dizi[derece];
 	int dizi2[derece-1];
    int i;


    for (i=derece;i>=0;i--) {

        printf("Enter the coefficient that belongs to the term with the force of %d  :",i);
        scanf("%d",&dizi[i]);
    }
    printf("\n\n\n");
    printf("Function : \n\n");

    for (i=derece;i>=0;i--){
	
        if (i!=0){
		
            printf("(%dx^%d)+",dizi[i],i);
        }

        
        else {
		
        printf("(%dx^%d)",dizi[i],i);
    }
    
} 

        

    
    printf("\n\n\n");

    printf("Derivatived Function::\n\n");

    for (i=derece-1;i>=0;i--) {
        if(i!=0) {
            printf("(%dx^%d)+",(dizi[i+1]*(i+1)),i);
        }
        else { printf("(%dx^%d)",(dizi[i+1]*(i+1)),i);
        }
    }
    int p,q;

		printf("\n\n");
	   	for(i=derece-1;i>=0;i--){
	   
	  	 printf("Enter the coefficient that belongs to the term with the force of %d for Derivatived Function:",i);
	  	 scanf("%d",&dizi2[i]); 	   
}
 	
	printf("\n\n");
	printf("Enter the value that you want to find for both functions:");
    scanf("%d",&p);
    

	printf("\n\n");
	printf("f(%d)=%d\n\n",p,func(dizi,derece,p));
	printf ("f'(%d)=%d",p,func(dizi2,derece-1,p));
	
	printf ("\n\n");
	
	if(func(dizi2,derece-1,p)>0) {
	
	printf("Your function is an increasing function at the point of %d ",p);
}

	else { printf("Your function is a decreasing function at the point of %d",p);
	}
	
	printf("\n\n\nCalculation done..");
	
	

return 0;

    }
