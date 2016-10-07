# Combination | 组合

[TOC]

组合问题：

从n个元素中选择r个进行组合，其组合数量的数学表达为：
$$
\binom{r}{n} = \frac{\textrm{P}_n^r}{r!} = \frac{n!}{r! \times (n-r)!}
$$

## 组合相关的属性

性质：
$$
\textrm{C}_n^r = \tbinom{r}{n} = \tbinom{n-r}{n}
$$
递推公式：
$$
\textrm{C}_n^r = \textrm{C}_{n-1}^{r-1} + \textrm{C}_{n-1}^{r}
$$

## 求组合的算法思路

