#include <stdio.h>
#include <stdlib.h>
#include<math.h>



double permutation(int x, int y)
{
        // 全排列 A x y A2 5
        double result;
        // long int result;
        int i, j;
        i = 0;
        result = 1;
        if (x > y)
        {
                printf("A参数输入错误\n");
                return -1;
        }
        while (i < x)
        {
                result = (y - i) * result;
                i++;
        }




        return result;
}
double combination(int x, int y)
{
        // 组合数 C x y C 2 5
           double result;
        int i, j;
        i = 0;
        result = 1;
        if (x > y)
        {
                printf("C参数输入错误\n");
                return -1;
        }
        while (i < x)
        {
                result = (y - i) * result / (i + 1);
                i++;



        }
        return result;
}

double bernoulliMaxProbability ( int n, double p  )

{
        //伯努利试验概率最大的时候
        double MaxProbability = 0, temp = 0;
        int k = 0;
        double p_ = 1 - p;
        int i = 0;
        i = 45;


        for (i = 0; i < n + 1; i++)
        {
                temp = combination(i, n) * pow(p, i) * pow(p_, n - i);
                if (temp > MaxProbability)
                {
                        MaxProbability = temp;
                        k = i;


                }
        }

        printf(" P %d = %lf ", k, MaxProbability);
        return MaxProbability ;

}


int main()
{
        /*    double x = 0;

            int i = 5;
            int n = 20;

            x = combination(i, n) * pow(0.2, i) * pow(0.8, n - i);
            printf(" c = %lf ", x);
        */

        int n;
        double p ;
        n = 20;
        p = 0.2;
        bernoulliMaxProbability(n, p);


        printf("over\n");
        return 0;
}
