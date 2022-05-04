#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    

    int number,guess;
    char choice;

    
    
    
        printf("\n\nBata khele ga kya ye game (y/n)\t");
        scanf("%c",&choice);

        
        game:
        
        srand(time(0));
        number=rand()%100+1;

        int  nguess=7;
        char nchoice;

        if(choice=='y' || choice=='Y')

        {
            
            printf("\nYOU HAVE ONLY 7 ATTEMPT\n\n");

            do{
        
                printf(" chal tere pass %d attempt baki h:\t\n",nguess);
                printf("\nChal bata vo number jo maine socha h 1 or 100 k beech m:\t");
                scanf("%d",&guess);

            if(guess>number)
                {
                printf("\njyada hogaya thoda kam kar yaar\n\n");
                }

            else if(guess<number)
                {
                printf("choti soch chota number hatt!! jyada kar isse NOOB\n\n");
                }   

            else if(guess==number)
            {   
                printf("AREEEEEEEEEEE.... LAUNDEEEEEEEEE JEET GAYA LADKA!! APNA HE BHAI H TU :)\n");
                break;
            }

        

            nguess--;

            if(nguess==0 && guess!=0)
                {
                printf("\nAre yaar ye number tha vo %d chee bee NOOB\t",number);
                printf("\nHar gaya NOOB KUTTA khai k THUUU!!\n");
                break;
                }
            
        
            }while(number!=guess );
            
                printf("\nBaski h to aaja fir se aaja (y/n)\t");
                scanf(" %c",&nchoice);

                if(nchoice=='y' || choice=='Y')
                {
                goto game;

                }

                else if(nchoice=='n' || nchoice=='N')
                    {
                    exit(2);
                    }

            }

       

        else

        {
            printf("\n Pata tha tujse nahi hoga noob khai k baski nahi iss liye chala gaya THUUU THUUU!! \n");
        }

        
return 0;

    

}