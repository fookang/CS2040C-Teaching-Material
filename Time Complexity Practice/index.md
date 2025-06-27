# Time complexity Practice

---

## Question 001

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = i; j < n; j++)
    foo();
```

<details>
<summary><strong>Solution</strong></summary>

> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `i` to `n - 1` → `n - i` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}(n-i)=n+(n-1)+(n-2)+...+1=\frac{n(n+1)}{2}>)

> ### Time Complexity

> - ![](<https://latex.codecogs.com/svg.image?O(n^2)>)

</details>

---

## Question 002

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 0; j < i; j++)
    foo();
```

<details>
<summary><strong>Solution</strong></summary>

> - The outer loop runs `i` from `0` to `n - 1` → `n` iterations.
> - The inner loop runs `j` from `0` to `i` → `i` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](<https://latex.codecogs.com/svg.image?\sum_{i=0}^{n-1}i=0+1+2+...+(n-1)=\frac{n(n+1)}{2}>)

> ### Time Complexity

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n^2)>)

</details>

---

## Question 003

> **What is the time complexity of this code?**

```C++
for(int i = 1; i < n; i*=2)
  for(int j = 0; j < n; j++)
    foo();
```

<details>
<summary><strong>Solution</strong></summary>

> - The outer loop runs `i = 1, 2, 4, 8` and stops when `i >= n`

> ![](https://latex.codecogs.com/svg.image?&space;i=2^k=>n\leq&space;2^k)

> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The outer loops runs `log n` times
> - The inner loop runs `j` from `0` to `n-1` → `n` iterations for each `i`.

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)

> ### Time Complexity

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 004

> **What is the time complexity of this code?**

```C++
for(int i = 0; i < n; i++)
  for(int j = 1; j < n; j*=2)
    foo();
```

<details>
<summary><strong>Solution</strong></summary>

> - The outer loop runs `i` from `0` to `n-1` → `n` iterations

> - The inner loop runs `j = 1, 2, 4, 8` and stops when `j >= n`

> ![](https://latex.codecogs.com/svg.image?&space;j=2^k=>n\leq&space;2^k)

> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The inner loops runs `log n` times

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iterations}=n\cdot\log_2&space;n&space;)

> ### Time Complexity

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?O(n\log&space;n)>)

</details>

---

## Question 005

> **What is the time complexity of this code?**

```C++
for(int i = 1; i < n; i*=2)
  for(int j = 1; j < n; j*=2)
    foo();
```

<details>
<summary><strong>Solution</strong></summary>

> - The outer loop runs `i = 1, 2, 4, 8` and stops when `i >= n`

> ![](https://latex.codecogs.com/svg.image?&space;i=2^k=>n\leq&space;2^k)

> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The outter loops runs `log n` times

> - The inner loop runs `j = 1, 2, 4, 8` and stops when `j >= n`

> ![](https://latex.codecogs.com/svg.image?&space;j=2^k=>n\leq&space;2^k)

> ![](https://latex.codecogs.com/svg.image?k\geq\log_2&space;n)

> - The inner loops runs `log n` times

> So, the total number of calls to `foo()` is:

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}=\log_2n\cdot&space;\log_2n)

> ### Time Complexity

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log^2n)>)

</details>

---

## Question 006

> **What is the time complexity of this code?**

```C++
for(int i = n; i > 0; i/=2)
  foo();
```

<details>
<summary><strong>Solution</strong></summary>

> ### Analysis

> - The loop runs `i = n, n/2, n/4, n/8` and stops when `i == 0`

> ![](https://latex.codecogs.com/svg.image?\frac{n}{2^k}\ge&space;1\implies&space;n\ge&space;2^{k})

> ![](https://latex.codecogs.com/svg.image?k\leq&space;\log_{2}{n})

> - When loop terminates

> ![](https://latex.codecogs.com/svg.image?k=\log_{2}{n}+1)

> ![Total iterations](https://latex.codecogs.com/svg.image?\text{Total&space;iteration}\approx\log{n})

> ### Time Complexity

> - ![Time Complexity](<https://latex.codecogs.com/svg.image?&space;O(\log{n})>)

</details>

---
