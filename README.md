软件工程作业2(单元测试)
===
# 测试项目
最大连续子数组和（最大子段和）<br> 
# 问题背景
给定n个整数（可能为负数）组成的序列a[1],a[2],a[3],…,a[n],求该序列如a[i]+a[i+1]+…+a[j]的子段和的最大值。当所给的整数均为负数时定义子段和为0，依此定义，所求的最优值为： Max{0,a[i]+a[i+1]+…+a[j]},1<=i<=j<=n
例如，当（a[1],a[2],a[3],a[4],a[5],a[6]）=(-2,11,-4,13,-5,-2)时，最大子段和为20。<br>
测试样例：
			{ -5,-4,-3,-2,-1 },{ 1,2,3,4,-1 };<br>
两个样例即可完成判断/条件覆盖<br>
# 运行环境
Visual Studio 2022
# 测试框架
使用本机 Microsoft CppUnitTest 框架编写单元测试。<br>

# 核心测试代码：
```
TEST_METHOD(TestMethod1)

{
	int sum = 0;
	int n = 5; 
	int str1[5] = { -5,-4,-3,-2,-1 };
	Assert::AreEqual(sum, Ziduanhe(n, str1));

}
TEST_METHOD(TestMethod2)

{
	int sum = 10;
	int n = 5;
	int str2[5] = { 1,2,3,4,-1 };
	Assert::AreEqual(sum, Ziduanhe(n, str2));

}
```

