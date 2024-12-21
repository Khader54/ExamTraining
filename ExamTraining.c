#include <stdio.h>



int main(void)
{

    int arr[] = {1,2,3,4,5,1,1,1,1,1,1};
    int hist[10] = {0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k, maxHist = 0, minHist;

    for (int i=0; i < n; i++)
    {
        hist[arr[i]]++;
    }



    minHist = hist[0];
    for(int i=0; i < 10; i++)
    {
        if(maxHist < hist[i])
        {
            maxHist = hist[i];
        }
        if(minHist > hist[i])
        {
            minHist = hist[i];
        }
    }

    k = (maxHist + maxHist) /2;

    for(int i=0; i < 10; i++)
    {
        if(hist[i] == k)
        {
            printf("the number is: %d\n",i);
            printf("the k is: %d\n",k);
        }
    }

    return 0;
}





