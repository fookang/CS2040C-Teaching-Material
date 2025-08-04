<!-- markdownlint-disable MD033 -->

# Time complexity Practice

---

## Question 1

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = i; j < n; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `i` to `n - 1` → `n - i` iterations for each `i`.
>
> So, the total number of calls to `foo()` is:
>
> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}(n-i)=n+(n-1)+(n-2)+...+1=\frac{n(n+1)}{2}>)
>
> **Time Complexity**
>
> - ![Solution](<https://latex.codecogs.com/svg.image?O(n^2)>)

</details>

---

## Question 2

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 0; j < i; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `0` to `i` → `i` iterations for each `i`.
>
> So, the total number of calls to `foo()` is:
>
> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}i=0+1+2+...+(n-1)=\frac{n(n+1)}{2}>)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n^2)>)

</details>

---

## Question 3

> **What is the time complexity of this code?**

```C++
for(int i = 1; i < n; i*=2)
  for(int j = 0; j < n; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs $i = 1, 2, 4, 8, ... , 2^k$ and stops when `i >= n`
>
> $2^{k+1} \geq n$ → $x = \lfloor\log_2{n-1}\rfloor \approx log_2{n}$
>
> - The outer loops runs `log n` times
> - The inner loop runs `j` from `0` to `n-1` → `n` iterations for each `i`.
>
> So, the total number of calls to `foo()` is:
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 4

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 1; j < n; j*=2)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs `i` from `0` to `n-1` → `n` iterations
> - The inner loop runs $j = 1, 2, 4, 8, ... , 2^k$ and stops when `j >= n`
>
> $2^{k+1} \geq n$ → $x = \lfloor\log_2{n-1}\rfloor \approx log_2{n}$
>
> - The inner loops runs `log n` times
>
> So, the total number of calls to `foo()` is:
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 5

> **What is the time complexity of this code?**

```C++
for(int i = 1; i < n; i*=2)
  for(int j = 1; j < n; j*=2)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs `i = 1, 2, 4, 8` and stops when `i >= n`
>
> ![](https://latex.codecogs.com/svg.image?&space;i=2^k=>n\leq&space;2^k) <br> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)
>
> - The outer loops runs `log n` times
> - The inner loop runs `j = 1, 2, 4, 8` and stops when `j >= n`
>
> ![](https://latex.codecogs.com/svg.image?&space;j=2^k=>n\leq&space;2^k) <br> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)
>
> - The inner loops runs `log n` times
>
> So, the total number of calls to `foo()` is:
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}=\log_2n\cdot&space;\log_2n)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log^2n)>)

</details>

---

## Question 6

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`
>
> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k}) <br> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})
>
> - When loop terminates
>
> ![](https://latex.codecogs.com/svg.image?k=\log_{2}{n}+1)
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}\approx\log{n})
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log{n})>)

</details>

---

## Question 7

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  for(int j = i; j < n; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - From question 6, we know that the outer loop run for &nbsp;&nbsp;![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log{n})>)
> - The inner loop runs from `j = i` to `n−1`, performing `(n−i)` iterations each time., where i = n, n/2, n/4, ... , 1
> - Hence, we derive this formula
>   ![](<https://latex.codecogs.com/svg.image?T(n)=\sum_{i=n,\frac{n}{2},\frac{n}{4},...,1}{}{(n-i)}>)
> - From question 6, We know that &nbsp;&nbsp;![](https://latex.codecogs.com/svg.image?i=\frac{n}{2^k}) &nbsp;&nbsp; and k ranges from `0` to `logn`
> - We can therefore simplify the formula to
>   ![](<https://latex.codecogs.com/svg.image?&space;T(n)=\sum_{k=0}^{\log&space;n}\left(n-\frac{n}{2^k}\right)=n\sum_{k=0}^{\log&space;n}\left(1-\frac{1}{2^k}\right)>) <br> ![](<https://latex.codecogs.com/svg.image?T(n)=n\sum_{k=0}^{\log&space;n}{1}-n\sum_{k=0}^{\log&space;n}{\frac{1}{2^k}}>)
>
> For the first part of the equation
> ![](<https://latex.codecogs.com/svg.image?T(n)=n\sum_{k=0}^{\log&space;n}{1}=n\cdot(\log&space;n+1)>)
>
> For the second part of the equation
> ![](https://latex.codecogs.com/svg.image?n\sum_{k=0}^{\log&space;n}{\frac{1}{2^k}}\leq&space;n\cdot&space;2)
>
> Hence we can safely ignore the second part of the equation and conclude that
> ![](<https://latex.codecogs.com/svg.image?T(n)=n\cdot\log&space;n&space;>)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 8

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  for(int j = n; j > 0; j/=2)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`
>
> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k}) <br> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})
>
> - Hence the outer loop run for approximately &nbsp; ![](https://latex.codecogs.com/svg.image?log_2n) &nbsp; times
> - For the inner loop, it is the same as the outer loop
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}=\log_2n\cdot&space;\log_2n)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log^2n)>)

</details>

---

## Question 9

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  for(int j = 0; j < n; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The loop runs i = n, n/2, n/4, n/8 and stops when i == 0
>
> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k}) <br> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})
>
> - Hence the outer loop run for approximately &nbsp; ![](https://latex.codecogs.com/svg.image?log_2n) &nbsp; times
> - The inner loop runs for n iteration for each outer loop
>
> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 10

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  for(int j = i; j > 0; j/=2)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`
>
> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k})
>
> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})
>
> - Hence the outer loop run for approximately &nbsp; ![](https://latex.codecogs.com/svg.image?log_2n) &nbsp; times
>
> - For the inner loop, j starts at i and was half each time. Hence the inner loop run for approximately &nbsp; ![](https://latex.codecogs.com/svg.image?log_2i) &nbsp;
>
> - We can thus form the equation for time complexity
>   ![](<https://latex.codecogs.com/svg.image?T(n)=\sum_{\text{outer&space;iteraration}}log_2i>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=log_2n+log_2\frac{n}{2}+log_2\frac{n}{4}+...+log_21>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=log_2n+(log_2n-log_22)+(log_2n-log_22^2)+...+0>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=log_2n+(log_2n-1)+(log_2n-2)+...+0>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=\sum_{0}^{log_2n}{(log_2n-k)}>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=\sum_{0}^{log_2n}{log_2n}-\sum_{0}^{log_2n}{k}>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)={log_2n}\cdot{log_2n}-{log_2n}\cdot\frac{(log_2n+1)}{2}>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)={log_2n}\cdot{log_2n}-\frac{log_2n}{2}\cdot(log_2n+1)>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)=\frac{log_2n\cdot&space;log_2n}{2}-\frac{log_2n}{2}>)
>
> ![](<https://latex.codecogs.com/svg.image?T(n)\approx&space;O(\log{n}\cdot\log{n})>)
>
> **Time Complexity**
>
> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log^2n)>)

</details>

---

## Question 11

> **What is the time complexity of this code?**

```C++
for(int i = 1; i < n; i*=3)
  for(int j = 0; j < i; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The first loop runs from $i = 1,3,9,27,...,3^x$ and stop when $i \geq n$ → $log_3{n}$ iterations
> - The second loop runs from $j = 0$ to $j < i$ → $i$ iterations for each value of $i$
>
> - The first loop generates values: i = 1, 3, 9, 27, ..., $3^x$ where $3^x$ is the largest power of 3 less than n.
>
> - Since the loop terminates when i >= n, we have:
>
> - $3^{x+1} \geq n$ → $x = \lfloor\log_3{n-1}\rfloor$ <br><br>
> - $\text{Total iterations} = 1 + 3 + 9 + 27 + ... + 3^x$
>
> - By GP formula, we get
>   $\text{Total iterations} = \frac{1(3^{x+1} - 1)}{3-1} = \frac{3^{x+1} - 1}{2}$ <br><br>
> - Since $x = \lfloor\log_3{n-1}\rfloor$, we have $x+1 \approx log_3n$
> - Therefore $3^{x+1} = 3^{log_3n} = n$
>
> - However, since x is defined as the floor of $log_3{n-1}$,
>   $3^{x+1} \leq 3n$
> - so $\text{Total iterations} = \frac{3^{x+1} - 1}{2} \leq \frac{3n-1}{2}$
>
> **Time Complexity**
>
> - $O(n)$

</details>

---

## Question 12

> **What is the time complexity of this code?**

```C++
for(int i = n; i < 10000; i++)
  foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The loop runs for exactly 10000-n iterations
>
> - However, since the upper bound is fixed at a constant, 10000, time complexity will be `O(1)`
>
> **Time Complexity**
>
> - $O(1)$

</details>

---

## Question 13

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < 10000; i++)
  for(int j = 0; j < n; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loops runs from `i = 0 to i < 10000` → `10000` iterations
> - The inner loop runs from `j = 0 to j < n` → `n` iterations.
> - So, the total number of calls to foo() is:
>   $\text{Total iteration}=10000 \cdot n$
>
> **Time Complexity**
>
> - $O(n)$

</details>

---

## Question 14

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < 10000; i++)
  for(int j = 0; j < n/3; j++)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loops runs from `i = 0 to i < 10000` → `10000` iterations
> - The inner loop runs from `j = 0 to j < n/3` → `n/3` iterations.
> - So, the total number of calls to foo() is:
>   $\text{Total iteration}=10000 \cdot \frac{n}{3}$
>
> **Time Complexity**
>
> - $O(n)$

</details>

---

## Question 15

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < 10000; i++)
  for(int j = n; j > n/7; j--)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loops runs from `i = 0 to i < 10000` → `10000` iterations
> - The inner loop runs from `j = n` down to `j < n/7` → approximately `6n/7` iterations.
> - So, the total number of calls to foo() is:
>   $\text{Total iteration}=10000 \cdot \frac{6n}{7}$
>
> **Time Complexity**
>
> - $O(n)$

</details>

---

## Question 16

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < 10000; i++)
  for(int j = n; j > 10000; j--)
    foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The outer loops runs from `i = 0 to i < 10000` → `10000` iterations
> - The inner loop runs from `j = n` down to `j > 10000` → `n-10000` iterations, but only if `n > 10000`
> - If `n <= 10000`, inner loop will not run
> - So, the total number of calls to foo() is:
>   $\text{Total iterations}=\begin{cases} 10000\times(n-10000), & n>10000\\ 0, & n\leq10000 \end{cases}$
>
> - Since we are only interested in the worst case, number of iterations will be
>   $\text{Total iteration}=10000n-100000000$
>
> **Time Complexity**
>
> - $O(n)$

</details>

---

## Question 17

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++)
    for(int k = 0; k < n; k++)
      foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The first loops runs from `i = 0` to `i < n` → `n` iterations
> - The second loop runs from `j = 0` to `j < n` → `n` iterations
> - The third loop runs from `k = 0` to `k < n` → `n` iterations
> - So, the total number of calls to foo() is:
>   $\text{Total iterations}=n \cdot n \cdot n$
>
> **Time Complexity**
>
> - $O(n^3)$

</details>

---

## Question 18

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 1; j < n; j*=2)
    for(int k = 0; k < j; k++)
      foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The first loop runs from `i = 0` to `i < n` → `n` iterations
> - The second loop runs from `j = 1, 2, 4, 8` and stops when `j >= n` → $\log_2 n$ iterations
> - The third loop runs from `k = 0` to `k < j` → `j` iterations for each value of j
> - For each iteration of the first loop, we need to count how many times the inner loops execute `foo()`
> - The second loop generates values: j = 1, 2, 4, 8, ..., $2^x$ where $2^x$ is the largest power of 2 less than n.
> - Since the loop terminates when j >= n, we have:
>
>   - $2^{x+1} \geq n$ → $x = \lfloor\log_2{n-1}\rfloor$
>
> - For each outer loop iteration, the total inner iterations are: <br> $\text{Total} = 1 + 2 + 4 + 8 + ... + 2^x$ iterations
> - By GP formula, we get
>   $\text{Sum} = \frac{1(2^{x+1} - 1)}{2-1} = 2^{x+1} - 1$
> - Since $x = \lfloor\log_2{n-1}\rfloor$, we have $x+1 \approx log_2n$
> - Therefore $2^{x+1} = 2^{log_2n} = n$
>
> - However, since x is defined as the floor of $log_2{n-1}$,
>   $2^{x+1} \leq 2n$
> - so $\text{Sum} = 2^{x+1} - 1 \leq 2n-1$
>
> - We can finally conclude that for each iteration of first loop, the inner loop runs for approximately $O(n)$
> - $\text{Total iteration} = n \times O(n) $
>
> **Time Complexity**
>
> - $O(n^2)$

</details>

---

## Question 19

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 1; j < n; j*=5)
    for(int k = 0; k < j; k++)
      foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - This question is very similar to the previous question
> - The first loop runs from `i = 0` to `i < n` → `n` iterations
> - The second loop runs from `j = 1, 5, 25, 125` and stops when `j >= n` → $\log_5 n$ iterations
> - The third loop runs from `k = 0` to `k < j` → `j` iterations for each value of j
> - For each iteration of the first loop, we need to count how many times the inner loops execute `foo()`
> - The second loop generates values: j = 1, 5, 25, 125, ..., $5^x$ where $5^x$ is the largest power of 5 less than n.
> - Since the loop terminates when j >= n, we have:
>
>   - $5^{x+1} \geq n$ → $x = \lfloor\log_5{n-1}\rfloor$
>
> - For each outer loop iteration, the total inner iterations are: <br> $\text{Total} = 1 + 5 + 25 + 125 + ... + 5^x$ iterations
> - By GP formula, we get
>   $\text{Sum} = \frac{1(5^{x+1} - 1)}{5-1} = \frac{5^{x+1} - 1}{4}$
> - Since $x = \lfloor\log_5{n-1}\rfloor$, we have $x+1 \approx log_5n$
> - Therefore $5^{x+1} = 5^{log_5n} = n$
>
> - However, since x is defined as the floor of $log_5{n-1}$,
>   $5^{x+1} \leq 5n$
> - so $\text{Sum} = \frac{5^{x+1} - 1}{4} \leq \frac{5n-1}{4}$
>
> - We can finally conclude that for each iteration of first loop, the inner loop runs for approximately $O(n)$
> - $\text{Total iteration} = n \times O(n) $
>
> **This question demonstrates that for this specific nested loop pattern, changing the multiplication factor (from 2 to 5) doesn't affect the Big O time complexity, as both geometric series sum to O(n), resulting in the same overall O(n²) complexity.**
>
> **Time Complexity**
>
> - $O(n^2)$

</details>

---

## Question 20

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 0; j < i; j++)
    for(int k = 0; k < j; k++)
      foo();
```

<details>
<summary><span style="font-size:1.3em;"><strong>Solution</strong></span></summary>

> **Analysis**
>
> - The first loop runs from `i = 0` to `i < n` → `n` iterations
> - The second loop runs from `j = 0` to `j < i` → `i` iterations
> - The third loop runs from `k = 0` to `k < j` → `j` iterations
> - Hence the total iterations is given by
>   $\sum_{i=0}^{n-1}\sum_{j=0}^{i-1}\sum_{k=0}^{j-1}1$
>
> $\sum_{k=0}^{j-1}1 = j$
>
> $\sum_{j=0}^{i-1}j = \sum_{j=1}^{i-1}j = \frac{(i-1)(1+i-1)}{2} = \frac{1}{2}(i^2-i)$
>
> $\sum_{i=0}^{n-1}\frac{(i^2-i)}{2} = \frac{1}{2}\sum_{i=0}^{n-1}(i^2-i) = \frac{1}{2}(\sum_{i=1}^{n-1}i^2 - \sum_{i=1}^{n-1}i)$
>
> $\sum_{i=1}^{n-1}i^2 = \frac{(n-1)(n-1+1)(2(n-1)+1)}{6} = \frac{(n-1)n(2n-1)}{6}$ [Proof of identity by MathsSmart](https://www.youtube.com/watch?v=aI0M4XRiz4I)
>
> $\sum_{i=1}^{n-1}i = \frac{(n-1)(n)}{2}$
>
> $\text{Total iteration} = \frac{1}{2}(\sum_{i=1}^{n-1}i^2 - \sum_{i=1}^{n-1}i)$
>
> $= \frac{1}{2}[\frac{(n-1)n(2n-1)}{6} - \frac{(n-1)(n)}{2}]$
>
> $ = \frac{n(n-1)}{2}[\frac{2n-1}{6} - \frac{1}{2}]$
>
> $ = \frac{n(n-1)}{2}[\frac{2n-1}{6} - \frac{3}{6}]$
>
> $ = \frac{n(n-1)}{2}[\frac{n-2}{3}]$
>
> $ = \frac{n(n-1)(n-2)}{6}$
>
> **Time Complexity**
>
> - $O(n^3)$

</details>

---
