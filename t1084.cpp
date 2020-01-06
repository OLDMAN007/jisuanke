//
// Created by OLD MAN on 2020/1/6.
//
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);//体力、战斗力、能量元素
    //如果刚开始他的战斗力大于m ，那么战斗m天凑不够n天，所以他的战斗力值不会增加
    //循环体中,能量减少（m/n向上取整），战斗力增加（m/n向下取整），直到能量用完。
    while(n<=m&&x)
    {
        x-=ceil( ((double)m)/n);
        if(x<0) break;
        n+=floor(((double)m)/n);
    }
    printf("%d\n",n);
}
