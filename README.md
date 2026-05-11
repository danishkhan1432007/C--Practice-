# cpp-problem-solving-lab
This is the lab solved by me and the lab is created by the claude opus 4.6

#########
# Sum of Digits — C++ Program

A simple C++ program that takes a positive integer as input and calculates the **sum of its digits** using a `while` loop.

---

## 📋 Description

This program repeatedly extracts the last digit of a number using the modulus operator (`%`) and adds it to a running sum, then removes that digit using integer division (`/`). The loop continues until all digits have been processed.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits is : " << sum << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o sum_of_digits sum_of_digits.cpp
```

### Execute
```bash
./sum_of_digits
```

---

## 🧪 Example

```
Enter the number : 1234
Sum of digits is : 10
```

**Dry Run for input `1234`:**

| Iteration | num  | num % 10 | sum |
|-----------|------|----------|-----|
| 1         | 1234 | 4        | 4   |
| 2         | 123  | 3        | 7   |
| 3         | 12   | 2        | 9   |
| 4         | 1    | 1        | 10  |
| 5         | 0    | —        | Loop ends |

---

## ⚙️ How It Works

| Operation   | Purpose                              | Example             |
|-------------|--------------------------------------|---------------------|
| `num % 10`  | Extracts the last digit              | `1234 % 10 = 4`     |
| `num /= 10` | Removes the last digit               | `1234 / 10 = 123`   |
| `sum += ...`| Adds extracted digit to running sum  | `sum = 0 + 4 = 4`   |

---

## ⚠️ Common Mistake

Always initialize `sum` to `0`. Without initialization, it holds a **garbage value** from memory and produces wrong results.

```cpp
int num, sum;     // ❌ sum has garbage value
int num, sum = 0; // ✅ correct
```

---

## 📌 Concepts Used

- `while` loop
- Modulus operator (`%`)
- Integer division (`/`)
- Variable initialization

---

## 👤 Author

Danish