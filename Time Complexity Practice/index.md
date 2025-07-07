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

> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `i` to `n - 1` → `n - i` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}(n-i)=n+(n-1)+(n-2)+...+1=\frac{n(n+1)}{2}>)

> **Time Complexity**

> - ![](<https://latex.codecogs.com/svg.image?O(n^2)>)

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

> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `0` to `i` → `i` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}i=0+1+2+...+(n-1)=\frac{n(n+1)}{2}>)

> **Time Complexity**

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

> - The outer loop runs `i = 1, 2, 4, 8` and stops when `i >= n`

> ![](https://latex.codecogs.com/svg.image?&space;i=2^k=>n\leq&space;2^k) > ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The outer loops runs `log n` times
> - The inner loop runs `j` from `0` to `n-1` → `n` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)

> **Time Complexity**

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

> - The outer loop runs `i` from `0` to `n-1` → `n` iterations
> - The inner loop runs `j = 1, 2, 4, 8` and stops when `j >= n`

> ![](https://latex.codecogs.com/svg.image?&space;j=2^k=>n\leq&space;2^k) > ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The inner loops runs `log n` times

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)

> **Time Complexity**

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

> - The outer loop runs `i = 1, 2, 4, 8` and stops when `i >= n`

> ![](https://latex.codecogs.com/svg.image?&space;i=2^k=>n\leq&space;2^k) > ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The outer loops runs `log n` times
> - The inner loop runs `j = 1, 2, 4, 8` and stops when `j >= n`

> ![](https://latex.codecogs.com/svg.image?&space;j=2^k=>n\leq&space;2^k) > ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The inner loops runs `log n` times

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}=\log_2n\cdot&space;\log_2n)

> **Time Complexity**

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

> - The loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`

> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k})
> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})

> - When loop terminates

> ![](https://latex.codecogs.com/svg.image?k=\log_{2}{n}+1)

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}\approx\log{n})

> **Time Complexity**

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

> - From question 6, we know that the outer loop run for &nbsp;&nbsp;![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log{n})>)
> - The inner loop runs from `j = i` to `n−1`, performing `(n−i)` iterations each time., where i = n, n/2, n/4, ... , 1
> - Hence, we derive this formula
>   ![](<https://latex.codecogs.com/svg.image?T(n)=\sum_{i=n,\frac{n}{2},\frac{n}{4},...,1}{}{(n-i)}>)
> - From question 6, We know that &nbsp;&nbsp;![](https://latex.codecogs.com/svg.image?i=\frac{n}{2^k}) &nbsp;&nbsp; and k ranges from `0` to `logn`
> - We can therefore simplify the formula to
>   ![](<https://latex.codecogs.com/svg.image?&space;T(n)=\sum_{k=0}^{\log&space;n}\left(n-\frac{n}{2^k}\right)=n\sum_{k=0}^{\log&space;n}\left(1-\frac{1}{2^k}\right)>) > ![](<https://latex.codecogs.com/svg.image?T(n)=n\sum_{k=0}^{\log&space;n}{1}-n\sum_{k=0}^{\log&space;n}{\frac{1}{2^k}}>)

> For the first part of the equation
> ![](<https://latex.codecogs.com/svg.image?T(n)=n\sum_{k=0}^{\log&space;n}{1}=n\cdot(\log&space;n+1)>)

> For the second part of the equation
> ![](https://latex.codecogs.com/svg.image?n\sum_{k=0}^{\log&space;n}{\frac{1}{2^k}}\leq&space;n\cdot&space;2)

> Hence we can safely ignore the second part of the equation and conclude that
> ![](<https://latex.codecogs.com/svg.image?T(n)=n\cdot\log&space;n&space;>)

> **Time Complexity**

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

> - The loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`

> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k})
> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})

> - Hence the outer loop run for approximately `lgn` times

> - For the inner loop, it is the same as the outer loop

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}=\log_2n\cdot&space;\log_2n)

> **Time Complexity**

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

> - The loop runs i = n, n/2, n/4, n/8 and stops when i == 0

> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k})
> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})

> - Hence the outer loop run for approximately lgn times

> - The inner loop runs for n iteration for each outer loop

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)

> **Time Complexity**

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---