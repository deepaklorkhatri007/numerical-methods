#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int main()

{   int X;
    cout<<"How many unknowns :";
    cin>>X;
    float x[X][X+1],a[X], ae, max,t,s,e;
    int i,j,r,mxit;
    for(i=0;i<X;i++) a[i]=0;
    puts(" Eneter the elemrnts of augmented matrix rowwise\n");
    for(i=0;i<X;i++)
    {
    for(j=0;j<X+1;j++)
    {
    scanf("%f",&x[i][j]);
    }
    }
    printf(" Eneter the allowed error and maximum number of iteration: ");
    scanf("%f%d",&ae,&mxit);
    printf("Iteration\tx[1]\tx[2]\n");
    for(r=1;r<=mxit;r++)
    {
        max=0;
        for(i=0;i<X;i++)
        {
            s=0;
            for(j=0;j<X;j++)
            if(j!=i) s+=x[i][j]*a[j];
            t=(x[i][X]-s)/x[i][i];
            e=fabs(a[i]-t);
            a[i]=t;
        }
        printf(" %5d\t",r);
        for(i=0;i<X;i++)
        printf(" %9.4f\t",a[i]);
        printf("\n");
    
    }
    return 0;}