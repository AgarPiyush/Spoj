#include<stdio.h>
#include<math.h>
int main()
{
double ab,ad,ac,bd,bc,cd,vol;
long long int t;
scanf("%lld",&t);
while(t>0)
{
scanf("%lf%lf%lf%lf%lf%lf",&ab,&ac,&ad,&bc,&bd,&cd);
ab=ab*ab;bc=bc*bc;ac=ac*ac;bd=bd*bd;cd=cd*cd;ad=ad*ad;
vol=(sqrt((4*ab*ac*ad)-((ab)*(ad+ac-cd)*(ad+ac-cd))-((ad)*(ab+ac-bc)*(ab+ac-bc))-((ac)*(ad+ab-bd)*(ad+ab-bd))+((ad+ac-cd)*(ab+ac-bc)*(ad+ab-bd)))/12);
printf("%lf",vol);
t--;
}
return 0;
}

