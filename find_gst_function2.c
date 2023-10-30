#include<stdio.h>
float cal_gst(float amount);
 
int main() {
    float amount,gst,final_amount;

    printf("Enter your amount:");
    scanf("%f",&amount);
    gst = cal_gst(amount);
    printf("GST on your amount: %.2f",gst);

    final_amount = amount + gst;
    printf("\nYour amount after GST: %.2f", final_amount);
    return 0;
}
float cal_gst(float amount) {
    float gst;

    gst = (amount)*18/100;
    return gst;
}