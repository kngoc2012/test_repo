#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,denta,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if ((a==0)) {
    if ((b==0)&&(c==0)) {
        printf("Phuong trinh vo so nghiem");
    }
    if ((b==0)&&(c!=0)) {
        printf("Phuong trinh vo nghiem");
    }
    if (b!=0){
           double t= -c/b;
           printf("%lf",t);
        }
    }
    if (a!=0){
       denta= b*b - 4*a*c;
       if (denta==0) {
        printf("%lf",(-b/(2*a)));
       }
       if (denta<0) {
        printf("Phuong trinh vo nghiem");
       }
       if (denta>0){
           x1= (-b + sqrt(denta))/(2*a);
           x2= (-b - sqrt(denta))/(2*a);
           printf ("%lf %lf",x1,x2);
       }
    }
   return 0;
}
   
