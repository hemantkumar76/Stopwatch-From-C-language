//Hemant Code For Stop Watch With C language 
#include <stdio.h>
#include <time.h>

void main()
{
    printf("tap any key to start the watch and for stopping it press 'p' to stop\n");
    getch();
    system("cls");

    clock_t s, n;
    s = clock();

    while(1){
        while(1){

            n=clock();
            printf("\r");
            printf("Time-\t %d : %d : %d ", ((n-s)/1000)/60, ((n-s)/1000)%60, (n-s)%1000);
            if(kbhit()) break;
        }

        if(getch()=='p')
        {
            printf("\rTime-\t %d : %d : %d ", ((n-s)/1000)/60, ((n-s)/1000)%60, (n-s)%1000);
            getch();
        }
        else break;

        s=s+(clock()-n); 
    }

    printf("\rTime-\t %d : %d : %d ", ((n-s)/1000)/60, ((n-s)/1000)%60, (n-s)%1000);

    getch(); getch();

}
