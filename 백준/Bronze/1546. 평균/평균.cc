#include <stdio.h>

int arr[1001] = { 0,};
double arr_d[1001] = { 0,};

int main(void)
{
        int num;
        double max = 0;
        double sum = 0;
        double average;
        scanf("%d", &num);

        for(int i = 0; i<num; i++)
        {
                scanf("%d", &arr[i]);
        }

        for(int i = 0; i<num; i++)
        {
                if (max < arr[i])
                        max = arr[i];
        }

        for(int i = 0; i < num; i++)
        {
                arr_d[i] = arr[i] * 100. / max;
        }

        for (int i = 0; i < num; i++)
        {
                sum += arr_d[i];
        }
        average = sum/(double)num;
        printf("%.14lf", average);

        return 0;
}