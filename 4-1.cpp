/*
本题要求实现一个常用圆形体体积的计算器。计算公式如下：
球体体积 V= 3/4πr^3，其中r是球体半径。
圆柱体体积 V=πr^2h，其中r是底圆半径，h是高。
圆锥体体积 V= 3/1*πr^2h，其中r是底圆半径，h是高。

输入格式：
在每次计算之前，要求输出如下界面：
1-Ball
2-Cylinder
3-Cone
other-Exit
Please enter your command:
然后从标准输入读进一个整数指令。

输出格式：
如果读入的指令是1或2或3，则执行相应的体积计算；如果是其他整数，则程序结束运行。
当输入为1时，在计算球体体积之前，打印Please enter the radius:，然后读入球体半径，完成计算；
当输入为2时，在计算圆柱体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算；
当输入为3时，在计算圆锥体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算。
计算结果在一行内输出，保留小数点后两位。

输入样例：
1
2
3
2.4 3
0

输出样例：
1-Ball
2-Cylinder
3-Cone
other-Exit
Please enter your command:
Please enter the radius:
33.51
1-Ball
2-Cylinder
3-Cone
other-Exit
Please enter your command:
Please enter the radius and the height:
18.10
1-Ball
2-Cylinder
3-Cone
other-Exit
Please enter your command:

*/

#include <stdio.h>
#include <math.h>
int main() {
    double x=3.14159265358979;
    double sum,r,h;
    int num;
    while (~(scanf("%d",&num))) {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        if (num==1) {
            printf("Please enter the radius:");
            scanf("%lf",&r);
            sum = (4*x*pow(r,3))/3;
            printf("\n%.2lf\n",sum);
        }
        if (num==2) {
            printf("Please enter the radius and the height:");
            scanf("%lf %lf",&r,&h);
            sum = x*pow(r,2)*h;
            printf("\n%.2lf\n",sum);
        }
        if (num==3) {
            printf("Please enter the radius and the height:");
            scanf("%lf %lf",&r,&h);
            sum = (x*pow(r,2)*h)/3;
            printf("\n%.2lf\n",sum);
        }
    }

}



