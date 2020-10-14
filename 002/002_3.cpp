//任务三(挑战级) ：
//输入年、月、日，格式：2020 - 10 - 06,
//输出这一天是该年的第几天（编号 1, 2, ..., 365或366）、第几周(1, 2, ...52)。

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int leapYear(int a){

    if ((a%4 == 0 && a%100 != 0) || a%400 == 0) { //闰年判断条件
        return 1; //是闰年返回1
    }else{
        return 0; //不是闰年返回0
    }

}

int calculateDate(int year, int month, int day){

    int sum = 0,i;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //数组a存放平年每月的天数
    int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; //数组b存放闰年每月的天数

    if (leapYear(year) == 1) { //判断是否为闰年
        for (i = 0; i < month - 1; i++) {
            sum += b[i];  //是闰年累加数组b前month - 1个月的天数
        }
    }else{
        for (i = 0; i < month - 1; i++) {
            sum += a[i]; //不是闰年，累加数组a前month - 1个月的天数
        }
    }

    sum += day;  //根据前面累加的结果加上日期，求出总天数
    return sum;

}
int main(int argc, const char * argv[]) {

    int year,month,day,result;
    printf("请输入年月日\n");
    scanf("%d%d%d",&year,&month,&day);  //输入年月日
    result = calculateDate(year, month, day); //调用计算天数函数
    printf("第%d天\n",result);

    /*
     请输入年月日
     2017 2 26
     第57天
     */
    return 0;
}
