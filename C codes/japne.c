#include<stdio.h>

void main()

{

    int n1, n2, choice, num, temp, sum, cube, rem, limit, i, j, count, reverse=0;



    printf("\n Press 1 for Armstrong No.");

    printf("\n Press 2 for Prime No.");

    printf("\n Press 3 for Reverse");

   

    printf("\n Enter your choice to continue: ");

    scanf("%c", &choice);



    switch(choice)

    {
        case '1': printf("Armstrong No.");




                  printf("\n Enter limit=");

                  scanf("%d", &limit);



                  for(num=1;num<=limit;num++)

                  {

                     temp=num;

                     sum=0;



                    while(temp!=0)

                    {

                        rem=temp%10;

                        cube=rem*rem*rem;

                        sum=sum+cube;

                        temp=temp/10;

                    }



                    if(sum==num)

                    {

                        printf("\n %d is an armstrong no.", num);

                    }

                   }
                   case '2': printf("Prime No.");



                  printf("Enter limit:");

                  scanf("%d", &limit);

                  printf("Prime numbers are:");



                  for(i=1;i<=limit;i++)

                  {

                    count=0;

                    for(j=1;j<=limit;j++)

                    {

                        if(i%j==0)

                        {

                            count++;

                        }

                    }

                    if(count==2)

                    {

                        printf("\n %d", i);

                    }

                  }
                  case '3': printf("Reverse");



                  printf("Enter num:");

                  scanf("%d", &num);



                  temp=num;



                  while(temp!=0)

                  {

                    rem=temp%10;

                    reverse=reverse*10+rem;

                    temp=temp/10;

                  }

                  printf("\n Reverse of %d is %d", num,reverse);                  

    }



}
