#include<stdio.h>
#include<stdlib.h>
//taking inp as input, using y to perform modulus operation to remove biggest digit for next step and using ans to show output
void main(){
    int inp;
    int y;
    int ans;
    printf("Enter an integer: ");
    scanf("%d",&inp);
    inp=abs(inp);
    
    if (inp/100000000!=0){
        ans=inp/100000000;
        printf("%d\n",ans);
    }
    //Reducing number of 0's in denominator to move from highest place value to lowest plce value and using modulus to remove highest place value
    if (inp/10000000!=0){
        y=inp%100000000;
        ans=y/10000000;
        printf("%d\n",ans);
    }
    if (inp/1000000!=0){
        y=inp%10000000;
        ans=y/1000000;
        printf("%d\n",ans);
    }
    if (inp/100000!=0){
        y=inp%1000000;
        ans=y/100000;
        printf("%d\n",ans);
    }
    if (inp/10000!=0){
        y=inp%100000;
        ans=y/10000;
        printf("%d\n",ans);
    }
    if (inp/1000!=0){
        y=inp%10000;
        ans=y/1000;
        printf("%d\n",ans);
    }
    if (inp/100!=0){
        y=inp%1000;
        ans=y/100;
        printf("%d\n",ans);
    }
    if (inp/10!=0){
        y=inp%100;
        ans=y/10;
        printf("%d\n",ans);
    }
    if (inp/1!=0){
        y=inp%10;
        ans=y/1;
        printf("%d\n",ans);
    }
}
