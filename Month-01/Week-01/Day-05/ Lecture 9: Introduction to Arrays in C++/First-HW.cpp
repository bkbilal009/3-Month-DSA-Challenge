When you write:

```cpp
int arr[100000] = {1};
```

Many beginners think **all 100000 elements become `1`**, but that's **not true**.

### What actually happens?

```cpp
int arr[5] = {1};
```

The array becomes:

```text
Index : 0   1   2   3   4
Value : 1   0   0   0   0
```

Only the **first element** is initialized to `1`.

The remaining elements are **value-initialized**, which means they become `0`.

The same happens with:

```cpp
int arr[100000] = {1};
```

Result:

```text
arr[0] = 1
arr[1] = 0
arr[2] = 0
...
arr[99999] = 0
```

---

## If you want all elements to be `0`

You can simply write:

```cpp
int arr[100000] = {0};
```

or even:

```cpp
int arr[100000] = {};
```

Both initialize every element to `0`.

---

## If you want all elements to be `1`

You **cannot** do it like this:

```cpp
int arr[100000] = {1};   // ❌ Doesn't fill every element with 1
```

Instead, use a loop:

```cpp
int arr[100000];

for (int i = 0; i < 100000; i++)
{
    arr[i] = 1;
}
```

---

## Another way (using the Standard Library)

```cpp
#include <algorithm>

int arr[100000];

std::fill(arr, arr + 100000, 1);
```

Now every element is `1`.

---

### Summary

| Code                          | Result      |
| ----------------------------- | ----------- |
| `int arr[5] = {1};`           | `1 0 0 0 0` |
| `int arr[5] = {0};`           | `0 0 0 0 0` |
| `int arr[5] = {};`            | `0 0 0 0 0` |
| `std::fill(arr, arr + 5, 1);` | `1 1 1 1 1` |

**Rule to remember:** In C++, a braced initializer like `{1}` sets the **first element** to `1`, and any remaining elements are initialized to their default value (`0` for `int`). It does **not** repeat the value across the entire array.
