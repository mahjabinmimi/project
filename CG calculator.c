#include<stdio.h>
#include<math.h>




int main(){
    int C_N;
double C_result[C_N],T_result=0,credits_per_C[C_N],t_Credits=0;
printf("Input How many course do you have current semester: ");
scanf("%d",&C_N);
printf("Enter the course credit Number-\n");
for(int i=0;i<C_N;i++){
    printf("course %d credit no:",i+1);
    scanf("%lf",&credits_per_C[i]);
    t_Credits=t_Credits+credits_per_C[i];
    printf("Course %d GPA -",i+1);
    scanf("%lf",&C_result[i]);
    T_result=T_result+(C_result[i]*credits_per_C[i]);
}

printf("Your total credit  is :%lf \n",t_Credits);
printf("Your total result  is :%f",T_result);
printf("Your GPA is:%.2f",T_result/t_Credits);

}
