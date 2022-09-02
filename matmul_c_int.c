//NOTE: Input is : time ./filename size ex: time ./a.out 256

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	
	clock_t sp,ep,meat_s,meat_e;
	sp=clock();
	
	//printf( "You have entered %d arguments:\n",argc);
  	/*
    for (int i = 0; i < argc; ++i)
        printf("%s\n",argv[i]);
	*/
    int n=atoi(argv[1]);
    //printf("temp is: %d\n",n);
    //static int  a[n][n],b[n][n],c[n][n];
     //long long int  a[n][n],b[n][n],c[n][n];
     
     int *a = malloc((n * n) * sizeof(int));
     int *b = malloc((n * n) * sizeof(int));
     int *c = malloc((n * n)* sizeof(int));
     int i,j,k;
     
    
    //printf("Enter the value of N (N <= 10): ");
    //scanf("%d",&(*p);
    //printf(" %d %d %d: \n",*a,*(b),*c);
    \
    for(i=0;i<n*n;i++)
    {
            a[i]=rand();
      
    }
    
    for(i=0;i<n*n;i++)
    {
            b[i]=rand();
      
    }
    meat_s=clock();
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	//printf("%d ",a[i*n +j]);
            c[i*n +j]=0;
            for(k=0;k<n;k++)
            {
                c[i*n +j]+=a[i*n +k]*b[k*n +j];
            }
        }
    }
    meat_e=clock();
    /*
    printf(" a\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i * n + j]);
        printf("\n");
    }
    printf(" b\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", b[i * n + j]);
        printf("\n");
    }
   printf(" c\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", c[i * n + j]);
        printf("\n");
    }
     */
    ep=clock();
    double t=((double)(ep-sp))/CLOCKS_PER_SEC;
    double meat_t=((double)(meat_e-meat_s))/CLOCKS_PER_SEC;
    printf("Time taken by whole program is: %f \n",t);
    printf("Time taken by meat portion of program is: %f",meat_t);
    return 0;

}
 /*
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=rand();
        }
    }
    
    //printf("Matrix-B: \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=rand();
        }
    }
    */

/*
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    */



  /*
    printf("The product of the two matrices is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    */












