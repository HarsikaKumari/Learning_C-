#include<stdio.h>
 void find_gst(float gst);
 void find_gst(){
    float amount;
    printf("Tell the amount on which you want to find the gst: \n");
    scanf("%f",&amount)
    gst = (amount*18)/100;
    printf("The gst on your amount is %f\n",gst);
 }
 void main(){
 find_gst();
 return 0;
 }