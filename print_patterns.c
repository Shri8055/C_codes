#include<stdio.h>
void main(){
    int i,j;
    
    /*
        *
        * * 
        * * *
        * * * *
    */
    
        // for(i=1;i<=4;i++){
        //     for(j=0;j<i;j++){
        //         printf("* ");
        //     }
        //     printf("\n");
        // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
        1
        1 2
        1 2 3
        1 2 3 4
    */

        // for(i=1;i<=4;i++){
        //     for(j=1;j<=i;j++){
        //         printf("%d ",j);
        //     }
        //     printf("\n");
        // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
        1
        2 2
        3 3 3
        4 4 4 4
    */

        // printf("\n\n");
        // for(i=1;i<=4;i++){
        //     for(j=0;j<i;j++){
        //         printf("%d ",i);   
        //     }
        //     printf("\n");
        // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
        1
        2 3
        4 5 6
        7 8 9 10
    */

        // printf("\n\n");
        // int z=1;
        // for(i=1;i<5;i++){
        //     for(j=1;j<=i;j++){
        //         printf("%d ",z++);
        //     }
        //     printf("\n");
        // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
           1
          2 3
         4 5 6
        7 8 9 10
    */

        // printf("\n\n");
        // int k,space,t=1;
        // space=5+4-1;
        // for(i=1;i<5;i++){
        //     for(k=space;k>=1;k--){
        //         printf(" ");
        //     }
        //     for(j=1;j<=i;j++){
        //         printf("* ");
        //     }
        //     printf("\n");
        //     space--;
        // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
           1
          2 2
         3 3 3
        4 4 4 4
    */

    //     int i,j,space;
    // printf("\n\n");
    // space=5-1;
    // for(i=1;i<=4;i++){
    //     for(j=space;j>=1;j--){
    //         printf(" ");
    //     }
    //     for(j=0;j<i;j++){
    //         printf("%d ",i);   
    //     }
    //     printf("\n");
    //     space--;
    // }

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
        9 99 999 9999 99999 ... ... ... ... Nth & add them.
    */

        // int a,n=9,sum=0,q=9;
        // printf("Enter Nth term:   ");
        // scanf("%d",&a);
        // for(i=1;i<=a;i++){
        //     printf(" %d",q);
        //     sum+=q;
        //     q=q*10+9;
        // }
        // printf("\n sum of all 9 till Nth element is : %d",sum);
    

//////\/\/\/\/\/\/\/\/\/\/\/\/\/\/\///////
    
    /*
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
    */

        // int p,q,d;
        // printf("Enter nth term:  ");
        // scanf("%d",&d);
        // for(i=1;i<=d;i++){
        //     if(i%2==0){
        //             p=1;
        //             q=0;
        //         }
        //         else{
        //             p=0;
        //             q=1;
        //         }
        //         for(j=1;j<=i;j++){
        //             if(j%2==0){
        //                 printf("%d ",p);
        //             }
        //             else{
        //                 printf("%d ",q);
        //             }
        //         }    
        //    printf("\n");
        //}
}