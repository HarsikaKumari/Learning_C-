#include <stdio.h>

/*data_type func_name(parameter_type parametername)
 {
     return value_of_type_data_type;
 }*/
 int glo = 44;
 void newprint(int char1)
{
    printf("the value is %d\n",char1);
}
// int sum(int a,int b)
// {
//     return a+b;
// }

// float average(float a,float b)
// {
//     return (a+b)/2;
// }

int main()
{
//    printf(" the average of the given two numbers is %.2f\n",average(100,397));

    newprint(glo);

    return 0;
}