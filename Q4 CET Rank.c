#include<stdio.h>
void main()
{
    int rank;
    printf("Enter your rank ");
    scanf("%d",&rank);
    if(rank<=3250)
    printf("You can get admission in any branch(CSE, ISE, EandC, MEC");
    else if(rank>3250 && rank<=6505)
    printf("You can get admission in ISE or EandC or MEC");
    else if(rank>6505 && rank<=12012)
    printf("You can get admission in EandC or MEC");
    else if(rank>12012 && rank<=22340)
    printf("You can get admission in MEC");
    else
    printf("You cannot get admission in RNSIT");
}