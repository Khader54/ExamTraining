#include <stdio.h>



int main(void)
{

    int arry[] = {10,15,16,18,19,20,25,30,39,80,90,100,102,201,215,980,1000};
    int idx;
    int n = sizeof(arry)/sizeof(arry[0])-1;
    printf("this is n: %d\n",n);
    int begin = 0, end = n;
    int mid = (begin + end)/2;
    int x;


    x = 1;
    printf("begin: %d | end: %d | mid: %d\n", begin,end,mid);

    while(end > begin)
    {
        if (arry[mid] > x)
        {
            end = mid-1;
            mid = (begin + end)/2;
        }
        else if (arry[mid] < x)
        {
            begin = mid+1;
            mid = (begin + end)/2;
        }
        else
        {
            printf("last one: \n");
        }
        printf("begin: %d | end: %d | mid: %d\n", begin,end,mid);
    }


    if(arry[mid] < x && arry[mid+1] > x)
    {
        idx = mid+1;
    }
    else
    {
        idx = mid;
    }


    printf("%d", idx);





    return 0;


}





