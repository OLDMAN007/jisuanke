# [计蒜客](https://www.jisuanke.com/)

## [信息学题库](https://nanti.jisuanke.com/oi)

### [t1002 输出马里奥](t1002.cpp)
输出马里奥

### [t1003 输出字符菱形](t1003.cpp)
输出字符菱形

### [t1006 对齐输出](t1006.cpp)
为了能够更清晰整齐地看到输出结果，我们可以去控制输出的格式。

读入三个整数，按每个整数占 8 个字符的宽度，右对齐输出它们。

输入格式\
只有一行，包含三个int范围内的整数，整数之间以一个空格分开。

输出格式\
只有一行，按照格式要求依次输出三个整数，之间以一个空格分开。

### [t1015 输出保留十二位小数的浮点数](t1015.cpp)
输出保留十二位小数的浮点数

### [t1016 打印ASCII码](t1016.cpp)
打印输入字符的ASCII码

### [t1046 判断闰年](t1046.cpp)
判断闰年

### [t1047 点和正方形的关系](t1047.cpp)
有一个正方形，四个角的坐标 (x,y)分别是 (1, -1),(1,1),(-1,-1),(-1,1)，x 是横轴，y 是纵轴。
小蒜蒜想让你写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。

输入格式 \
输入一行，包括两个整数 x、y，以一个空格分开，表示坐标 (x,y)，−10≤x,y≤10。

输出格式 \
输出一行，如果点在正方形内，则输出"yes"，否则输出 "no"。

### [t1049 苹果和虫子2](t1049.cpp) 
蒜头君买了一箱 n 个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每 x 小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过 y 小时你还有多少个完整的苹果？

输入格式 \
输入仅一行三个整数 n,x,y (1≤n,x,y≤1000)。

输出格式 \
输出也仅一行，剩下的苹果个数。

### [t1050 求平均年龄](t1050.cpp)
小蒜蒜的班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。

输入格式 \
        第一行有一个整数 n(1 <= n <= 100)，表示学生的人数。
其后 n 行每行有 1 个整数，表示每个学生的年龄，取值为 15 到 25。

输出格式 \
       输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。

### [t1051 财务管理](t1051.cpp)
蒜头君今年毕业并找到了一份工作。他赚很多钱，但似乎总是不够。蒜头君认为他需要控制他的投资以解决自己的财务问题。蒜头君拿到了自己的银行账户详单，想看看自己有多少钱。

请帮助蒜头君写一个程序，通过过去 12 个月中每月的月末结余，计算平均结余。

输入格式 \
        输入包含 12 行，每行包含一个浮点数，为某个月的结余。

每个数都是不大于 1,000,000 的正数，保留两位小数。

输出格式 \
        输出一个数，为这 12 个月的平均月末结余，保留到小数点后第二位，并在最前面加一个'$'符。

### [t1052 均值](t1052.cpp)
蒜术师给了你一组样本数据，请帮助他计算这组数据的均值。

输入格式 \
        输入有两行，第一行包含一个整数 n(1≤n<100)，代表样本容量；

第二行包含 n 个绝对值不超过 1000 的浮点数，代表各个样本数据。

输出格式 \
        输出一行，包含一个浮点数，表示均值，精确到小数点后 4 位。
        
### [t1053 求整数的和与均值](t1053.cpp)
蒜头君有 n(1≤n≤10000) 个整数，请求出它们的和与均值。

输入格式 \
输入第一行是一个整数 n，表示有 n 个整数。

第 2 ~ n+1 行每行包含 1 个整数。每个整数的绝对值均不超过 10000。

输出格式 \
输出一行，先输出和，再输出平均值（保留到小数点后 5 位），两个数间用单个空格分隔。

### [t1054 最好的分数](t1054.cpp)
蒜头君老师讲授的《计算概论》这门课期中考试刚刚结束，他想知道考试中取得的最高分数。

因为人数比较多，他觉得这件事情交给计算机来做比较方便。你能帮蒜头君老师解决这个问题吗？

输入格式 \
输入两行，第一行为整数 n(1≤n<100)，表示参加这次考试的人数。

第二行是这 n 个学生的成绩，相邻两个数之间用单个空格隔开。所有成绩均为 0 到 100 之间的整数。

输出格式 \
输出一个整数，即最高的成绩。

### [t1055 整数序列的元素最大跨度值](t1055.cpp)
小蒜蒜有一个长度为 n 的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。

输入格式 \
一共 2 行，第一行为序列的个数 n(1≤n≤1000)。

第二行为序列的 n 个不超过 1000 的非负整数，整数之间以一个空格分隔。

输出格式 \
输出一行，表示序列的最大跨度值。

### [t1056 蒜厂奖牌计数](t1056.cpp)
在一次运动会上，蒜厂的运动员参与了 n 天的决赛项目 (1≤n≤17)。

现在要统计一下蒜厂所获得的金、银、铜牌数目及总奖牌数。

输入格式\
输入 n + 1 行，第 1 行是蒜厂参与决赛项目的天数 n。

其后 n 行，每行三个用空格分开的不超过 30 的非负整数，表示蒜厂某一天获得的金、银、铜牌数目。

输出格式\
输出 1 行，包括 4 个整数，为蒜厂所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。

### [t1057 多边形内角和](t1057.cpp)
在欧几里德几何中，n 边形的内角和是 (n-2)\times 180(n−2)×180°。

小蒜蒜已经知道其中 (n−1) 个内角的度数，请编写一个程序，计算出剩下的一个未知内角的度数。

输入格式\
第 1 行只有一个整数 n (3≤n≤20)。

第 2 行有 (n-1) 个正整数，是每个已知内角的度数。相邻两个整数之间用单个空格隔开。

数据保证给定多边形合法。

输出格式\
一个正整数，为未知内角的度数。

### [t1058 奇数求和](t1058.cpp)
蒜术师：计算非负整数 m 到 n（包括 m 和 n）之间的所有奇数的和，其中，m 不大于 n，且 n 不大于 300。例如 m=3，n=12，其和则为：3+5+7+9+11=35。

输入格式\
两个数 m 和 n，两个数以一个空格分开，其中 0≤m≤n≤300。

输出格式\
输出一行，包含一个整数，表示 m 到 n（包括 m 和 n）之间的所有奇数的和。

### [t1059 满足条件的数累加](t1059.cpp)
蒜头君喜欢 17 这个数字，他想知道正整数 m 和 n 之间（包括 m 和 n）能被 17 整除的数累加的结果是多少。其中，0<m<n<1000。

输入格式\
一行，包含两个整数 m 和 n，以一个空格间隔。

输出格式\
输出一行，包行一个整数，表示累加的结果。

### [t1060 整数的个数](t1060.cpp)
蒜头君给了你 k(1<k<100) 个正整数，其中每个数都是大于等于 1，小于等于 10 的数。写程序计算给定的 k 个正整数中，1，5 和 10 出现的次数。

输入格式\
输入有两行：第一行包含一个正整数 k，第二行包含 k 个正整数，每两个正整数用一个空格分开。

输出格式\
输出有三行，第一行为 1 出现的次数，第二行为 5 出现的次数，第三行为 10 出现的次数。

### [t1061 与指定数字相同的数的个数](t1061.cpp)
输出蒜头君的整数序列中与指定数字相同的数的个数。

输入格式\
输入包含 2 行：

第 1 行为 N (1≤N≤100) 和 m (1≤m≤1000)，表示整数序列的长度和指定的数字，中间用一个空格分开；

第 2 行为 N 个整数，整数之间以一个空格分开，在 [1,1000] 范围内。

输出格式\
输出为 N 个数中与 m 相同的数的个数。

### [t1062 乘方计算](t1062.cpp)
小蒜蒜给出了一个整数 a 和一个正整数 n，求乘方 a^n

输入格式\
一行，包含两个整数 a 和 n。−1000000≤a≤1000000，0≤n≤10000。

输出格式\
一个整数，即乘方结果。题目保证最终结果的绝对值不超过 1000000。

### [t1063 人口增长问题](t1063.cpp)
我国现有 x 亿人口，蒜头君想知道按照每年 0.1\% 的增长速度，n 年后将有多少人？

输入格式\
一行，包含两个整数 x 和 n，分别是人口基数和年数，以单个空格分隔。

输出格式\
输出最后的人口数，以亿为单位，保留到小数点后四位。1≤x≤100, 1≤n≤100。

### [t1064 银行利息](t1064.cpp)
蒜头君在去年赚了一大笔钱！他想要把这些钱用于投资，并对自己能得到多少收益感到好奇。

已知投资的复合年利率为 R（0 到 20 之间的整数）。蒜头君现有总值为 M 的钱（100 到 1,000,000 之间的整数）。他清楚地知道自己要投资 Y 年（范围 0 到 400）。

请帮助他计算最终他会有多少钱，并输出它的整数部分。数据保证输出结果在 32 位有符号整数范围内。

输入格式 \
        一行包含三个整数 R，M，Y，相邻两个整数之间用单个空格隔开。

输出格式 \
        一个整数，即蒜头君最终拥有多少钱（整数部分）。
        
### [t1065 买房子](t1065.cpp)
蒜头君从现在开始工作，年薪 N 万。他希望在蒜厂附近买一套 60 平米的房子，现在价格是 200 万。假设房子价格以每年百分之 K 增长，并且蒜头君未来年薪不变，且不吃不喝，不用交税，每年所得 N 万全都积攒起来，问第几年能够买下这套房子？（第一年年薪 N 万，房价 200 万）

输入格式\
一行，包含两个正整数 N(10≤N≤50)，K(1≤K≤20)，中间用单个空格隔开。

输出格式\
如果在第 20 年或者之前就能买下这套房子，则输出一个整数 M，表示最早需要在第 M 年能买下；否则输出"Impossible"。

### [t1066 斐波那契数列](t1066.cpp)
小蒜蒜最近学习了菲波那契数列。

菲波那契数列是指这样的数列：数列的第一个和第二个数都为 1，接下来每个数都等于前面 2 个数之和。

给出一个正整数 k，要求菲波那契数列中第 k 个数是多少。

输入格式 \
        输入一行，包含一个正整数 k。（1 ≤ k ≤ 46）

输出格式 \
        输出一行，包含一个正整数，表示菲波那契数列中的第 k 个数。
        
### [t1067 鸡尾酒疗法](t1067.cpp)
鸡尾酒疗法，原指 “高效抗逆转录病毒治疗”（HART），由美籍华裔科学家何大一于 1996 年提出，是通过三种或三种以上的抗病毒药物联合使用来治疗艾滋病。
 该疗法的应用可以减少单一用药产生的抗药性，最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，从而延缓病程进展，延长患者生命，提高生活质量。
 人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式进行。
 假设鸡尾酒疗法的有效率为 x，新疗法的有效率为 y，如果 y−x 大于 5%，则效果更好，如果 x−y 大于 5%，则效果更差，否则称为效果差不多。

下面蒜头君给出 n 组临床对照实验，其中第一组采用鸡尾酒疗法，其他 n−1 组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。

输入格式 \
        第一行为整数 n(1<n≤20)；

其余 n 行每行两个整数，第一个整数是临床实验的总病例数(小于等于 10000)，第二个疗效有效的病例数。

这 n 行数据中，第一行为鸡尾酒疗法的数据，其余各行为各种改进疗法的数据。

输出格式 \
        有 n−1 行输出，分别表示对应改进疗法的效果：

如果效果更好，输出"better"；
如果效果更差，输出"worse"；
否则输出"same"。

### [t1068 救援](t1068.cpp)
救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及每个屋顶的坐标和人数都将由输入决定，求出所有人都到达大本营并登陆所用的时间。

在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将人送回大本营。坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表示。

救生船每次从大本营出发，以速度 50 米/分钟驶向下一个屋顶。达到一个屋顶后，救下其上的所有人，每人上船 1 分钟。然后船原路返回，回到大本营，每人下船 0.5 分钟。假设原点与任意一个屋顶的连线不穿过其它屋顶。

输入格式 \
第一行，一个整数，表示屋顶数 n (1≤n≤100)。

接下来依次有 n 行输入，每一行前两个实数表示屋顶相对于大本营的平面坐标位置 (x,y)（单位是米）、然后一个表示人数的整数r，数之间以一个空格分开。0≤x,y≤100,1≤r≤100。

输出格式 \
一行，救援需要的总时间，精确到分钟 (向上取整)。

### [t1069 球弹跳高度的计算](t1069.cpp)
蒜头君让一个球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。编程计算气球在第 10 次落地时，共经过多少米？第 10 次反弹多高？

输入格式 \
        输入一个整数 h (1≤h≤100)，表示球的初始高度。

输出格式 \
        输出包含两行：

第 1 行：到球第 10 次落地时，一共经过的米数。

第 2 行：第 10 次弹跳的高度。

注意：结果可能是实数，结果用double类型保存。

提示：输出时不需要对精度特殊控制，用cout << ANSWER，或者printf("%g", ANSWER)即可。

### [t1070 角谷猜想](t1070.cpp)
蒜头君：所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘 3 加 1，如果是偶数，则除以 2，得到的结果再按照上述规则重复处理，最终总能够得到 1。如，假定初始整数为 5，计算过程分别为 16、8、4、2、1。

程序要求输入一个整数，将经过处理得到 1 的过程输出来。

输入格式 \
一个正整数 N(N≤2,000,000)。

输出格式 \
从输入整数到 1 的步骤，每一步为一行，每一部中描述计算过程。最后一行输出"End"。如果输入为 1，直接输出"End"。

数据保证中途计算不会超过int范围。

### [t1071 计分程序](t1071.cpp)
蒜头君是一位高中电脑老师，这学期正在教学生写 C++ 程序。他的评分标准是依照每一位学生在蒜厂 OJ 上解出的题数，去计算出对应的得分。为了不让分数落差太大，因此他并不是采取每一题固定得分的方式，而是随着题数增加而调整每题的得分。规则如下：

答对题数在 0 ~ 10 者，每题给 6 分。
题数在 11 ~ 20 者，从第 11 题开始，每题给 2 分。(前 10 题还是每题给 6 分)
题数在 21 ~ 40 者，从第 21 题开始，每题给 1 分。题数在 40 以上者，一律 100 分。
如此一来，只要写 10 题，就可以得到 60 分，写 20 题，就可以得到 80 分，不过要得到满分 100 分，则是要写到 40 题，所以同学们分数的差距就大大地减少了。

不过问题来了，虽然学生们因为这样的计分程序而大大地提升了及格率，但因为蒜头君有 600 多位学生，一个一个去计算真的是一件很吃重的工作，所以现在想请你帮他写个程序解决这个问题。

输入格式\
        一个测试点包含多组测试数据，一共不超过 10 组。

每组测试数据只有一个整数 N(0≤N≤100)，代表学生在蒜厂 OJ 上解出的题数。

输出格式\
        输出该位同学的得分。

### [t1072 药房管理](t1072.cpp)
随着信息技术的蓬勃发展，医疗信息化已经成为医院建设中必不可少的一部分。计算机可以很好地辅助医院管理医生信息、病人信息、药品信息等海量数据，使工作人员能够从这些机械的工作中解放出来，将更多精力投入真正的医疗过程中，从而极大地提高了医院整体的工作效率。

对药品的管理是其中的一项重要内容。现在药房的管理员希望使用计算机来帮助他管理。假设对于任意一种药品，每天开始工作时的库存总量已知，并且一天之内不会通过进货的方式增加。每天会有很多病人前来取药，每个病人希望取走不同数量的药品。如果病人需要的数量超过了当时的库存量，药房会拒绝该病人的请求。管理员希望知道每天会有多少病人没有取上药。

输入格式\
        共 3 行。

第一行是每天开始时的药品总量 m (1≤m≤1000)；

第二行是这一天取药的人数 n(0<n≤100)；

第三行共有 n 个正整数，分别记录了每个病人希望取走的药品数量（按照时间先后的顺序，不超过 1000），两数之间以空格分隔。

输出格式\
        只有一行，为这一天没有取上药品的人数。

### [t1079 开关灯](t1079.cpp)
假设有 N 盏灯（N 为不大于 50005000 的正整数），从 1 到 N 按顺序依次编号，初始时全部处于开启状态；有 M 个人（M 为不大于 N 的正整数）也从 1 到 M 依次编号。

第一个人（1 号）将灯全部关闭，第二个人（2 号）将编号为 2 的倍数的灯打开，第三个人（3 号）将编号为 3 的倍数的灯做相反处理（即，将打开的灯关闭，将关闭的灯打开）。依照编号递增顺序，以后的人都和 3 号一样，将凡是自己编号倍数的灯做相反处理。

请问：当第 M 个人操作之后，哪几盏灯是关闭的，按从小到大输出其编号，其间用逗号间隔。

输入格式\
输入正整数 N 和 M，以单个空格隔开，M≤N。

输出格式\
顺次输出关闭的灯的编号，其间用逗号间隔。

### [t1084 雇佣兵](t1084.cpp)
雇佣兵的体力最大值为 M，初始体力值为 0、战斗力为 N、拥有 X 个能量元素。

当雇佣兵的体力值恰好为 M 时，才可以参加一个为期 M 天的战斗期，战斗期结束体力值将为 00。在同一个战斗期内，雇佣兵每连续战斗 N 天，战斗力就会上升 1 点，N 为当前战斗期开始时的战斗力。

一个战斗期结束后，雇佣兵需要用若干个能量元素使其体力恢复到最大值 M，从而参加下一个战斗期。每个能量元素恢复的体力值不超过当前的战斗力。每个能量元素只能使用一次。

请问：雇佣兵的战斗力最大可以到达多少。

说明：只在战斗期结束后可以使用能量元素，可以使用多个能量元素。

输入格式\
一行包括三个整数 M、N、X，相邻两个整数之间用单个空格隔开。M、N、X 均为不超过 10000 的正整数。

输出格式\
输出一个整数，为雇佣兵的最大战斗力。

### [t1096 剪刀石头布](t1096.cpp)
石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。

一天，小 A 和小 B 正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，就是以“石头-布-石头-剪刀”为周期不断循环的。请问，小 A 和小 B 比了 N 轮之后，谁赢的轮数多？

输入格式\
输入包含三行。

第一行包含三个整数：N，NA，NB，分别表示比了 N 轮，小 A 出拳的周期长度，小 B 出拳的周期长度。0<N,NA,NB<100。

第二行包含 NA 个整数，表示小 A 出拳的规律。

第三行包含 NBNB 个整数，表示小 B 出拳的规律。

其中，0 表示“石头”，2 表示“剪刀”，5 表示“布”。相邻两个整数之间用单个空格隔开。

输出格式\
输出一行，如果小 A 赢的轮数多，输出"A"；如果小 B 赢的轮数多，输出"B"；如果两人打平，输出 "draw"。

提示
对于测试数据，猜拳过程为：

A：0 2 5 0 2 5 0 2 5 0\
B：0 5 0 2 0 5 0 2 0 5

A 赢了 4 轮，B 赢了 2 轮，双方打平 4 轮，所以 A 赢的轮数多。

### [t1098 大整数加法](t1098.cpp)
求两个不超过 200 位的非负整数的和。

输入格式\
有两行，每行是一个不超过 200 位的非负整数，可能有多余的前导 0。

输出格式\
一行，即相加后的结果。结果里不能有多余的前导 0，即如果结果是 342，那么就不能输出为 0342。

### [t1073 正常血压](t1073.cpp)
监护室每小时测量一次病人的血压，若收缩压在 90−140 之间并且舒张压在 60−90 之间（包含端点值）则称之为正常。现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

输入格式\
        第一行为一个正整数 n，n<100；

其后有 n 行，每行 2 个正整数，分别为一次测量的收缩压和舒张压（都在 [1,200] 范围内），中间以一个空格分隔。

输出格式\
        输出仅一行，血压连续正常的最长小时数。

### [t1074 统计满足条件的4位数的个数](t1074.cpp)
小蒜给了若干个四位数，请求出其中满足以下条件的数的个数：

个位数上的数字减去千位数上的数字，再减去百位数上的数字，再减去十位数上的数字的结果大于零。

输入格式\
        输入为两行，第一行为四位数的个数 n，第二行为 n 个的四位数，数与数之间以一个空格分开。(n≤100)

输出格式\
        输出为一行，包含一个整数，表示满足条件的四位数的个数。

### [t1075 0和1](t1075.cpp)
小蒜上了他的第一堂计算机概论，老师说计算机内部是由很多的小开关来组成：1 代表开、0 代表关。于是聪明的小蒜便了解了，原来我们平常使用电灯开关就是把 1 变成 0、0 变成 1 嘛！

输入格式\
        输入只有一行，含有一个为 0 或 1 的整数。

输出格式\
        输入为 0 则输出 1；

输入为 1 则输出 0。

### [t1076 分离整数的各个数位](t1076.cpp)
小蒜给了你一个整数，要求从个位开始分离出它的每一位数字。

输入格式\
输入一个整数，整数在 1 到 10^8 之间。

输出格式\
从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开。


### [t1077 数字反转](t1077.cpp)
给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例 2）。

输入格式\
        输入共 1 行，一个整数 N。

−1,000,000,000≤N≤1,000,000,000。

输出格式\
        输出共 1 行，一个整数，表示反转后的新数。
        
### [t1078 含k个3的数](t1078.cpp)  
蒜头君有两个正整数 m 和 k，其中 1<m<100000，1<k<5，判断 m 能否被 19 整除，且各位数字中恰好含有 k 个 3。如果满足条件，则输出"YES"，否则，输出"NO"。

输入格式\
        m 和 k 的值，中间用单个空格间隔。

输出格式\
        满足条件时输出"YES"，不满足时输出"NO"。      