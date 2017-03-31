# Floating point

Basic and interchange formats

|            |                     |      |        |               |              |              |                |         |         |           |
| ---------- | ------------------- | ---- | ------ | ------------- | ------------ | ------------ | -------------- | ------- | ------- | --------- |
| Name       | Common name         | Base | Digits | Decimaldigits | Exponentbits | DecimalE max | Exponentbias   | E min   | E max   | Notes     |
| binary16   | Half precision      | 2    | 11     | 3.31          | 5            | 4.51         | 24−1 = 15      | −14     | +15     | not basic |
| binary32   | Single precision    | 2    | 24     | 7.22          | 8            | 38.23        | 27−1 = 127     | −126    | +127    |           |
| binary64   | Double precision    | 2    | 53     | 15.95         | 11           | 307.95       | 210−1 = 1023   | −1022   | +1023   |           |
| binary128  | Quadruple precision | 2    | 113    | 34.02         | 15           | 4931.77      | 214−1 = 16383  | −16382  | +16383  |           |
| binary256  | Octuple precision   | 2    | 237    | 71.34         | 19           | 78913.2      | 218−1 = 262143 | −262142 | +262143 | not basic |
| decimal32  |                     | 10   | 7      | 7             | 7.58         | 96           | 101            | −95     | +96     | not basic |
| decimal64  |                     | 10   | 16     | 16            | 9.58         | 384          | 398            | −383    | +384    |           |
| decimal128 |                     | 10   | 34     | 34            | 13.58        | 6144         | 6176           | −6143   | +6144   |           |

double 是64位的浮点数。

其由三部分组成：
- 值 (value, aka Fraction/Mantissa/Significant/Coefficient)，52位， 0-51
- 幂（Exponent），11位，52-62
- 符号（Sign，正负性），1位63, 0：正，1，负

## 大小端
大端：
小端：

## FAQ

  1. 既然 0.1，0.2，0.3 等都不能精确表示为二进制，为什么 `0.1` 打印出来是 `0.1`，`0.1 + 0.2` 是 `0.30000000000000004`

# Appendix
  1. [floating point of IEEE_754-2008](https://en.wikipedia.org/wiki/IEEE_floating_point)