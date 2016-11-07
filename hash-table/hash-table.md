# Hash Table

## 散列函数：H(key)

当key是整数时，常用的散列函数有：

直接地址法（恒等变换）：H(key) = key
线性变换：H(key) = a * key + b
除留余数法：H(key) = key % mod

## 哈稀冲突：

## 哈稀冲突的解决办法：

1. 线性探查法（Linear probing）
2. 平方探查法（quadratic probing）
3. 链地址法（拉链法）

## 字符串hash

字符串hash 是指将一个字符串S映射为一个整数。
