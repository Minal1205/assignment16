#include<stdio.h>
//to find the row with maximum number of 1s.
int main(){
    int a[3][3],count=0,maxcount=0,index=0,i,j;
  printf("Enter Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }  
     for (i = 0; i < 3; i++)
    {
      count=0;
        for (j = 0; j < 3; j++)
        {
          if(a[i][j]==1){
            count++;
          }
           if(count>maxcount){
        maxcount=count;
        index=i+1;

    }
        }
    }  
   
printf("Row with maximum number of 1's is %d",index);

    return 0;
}