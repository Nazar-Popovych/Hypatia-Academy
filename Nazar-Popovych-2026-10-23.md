# Homework: Boolean Logic

## Exercise 1: AND and OR

| x | y | xy | x + y |
|---|---|----|-------|
| 0 | 0 |  0 |   0   |
| 0 | 1 |  0 |   1   |
| 1 | 0 |  0 |   1   |
| 1 | 1 |  1 |   1   |

## Exercise 2: AND with NOT

| x | y | y' | xy' |
|---|---|----|-----|
| 0 | 0 |  1 |  0  |
| 0 | 1 |  0 |  0  |
| 1 | 0 |  1 |  1  |
| 1 | 1 |  0 |  0  |

1. Which values of x and y make `xy' = 1`?
   - x has to be 1, while y has to be 0, so that y' is 1, making xy' be 11, which gives 1.

2. Explain the difference between `xy` and `xy'` in one sentence.
   - To be 1, xy needs both x and y to be 1, while xy' has an inverted y, which requires y to be 0 and x to be 1 for the expression to give 1.

## Exercise 3: Find the Boolean Rules

| x | x + 1 | x · 1 | x + 0 | x · 0 |
|---|-------|-------|-------|-------|
| 0 |   1   |   0   |   0   |   0   |
| 1 |   1   |   1   |   1   |   0   |

1. `x + 1 = 1 ` - OR requires at least one of the inputs to be 1, which is automatically satisfied.
2. `x · 1 = 1 if x=1 or 0 if x=0` - AND requires both inputs to be 1; as one of the inputs is already 1, the output depends solely on x.
3. `x + 0 = 1 if x=1 or 0 if x=0` - OR requires at least one of the inputs to be 1, however, as one of the inputs is already 0, the output depends entirely on x.
4. `x · 0 = 0 ` - AND requires both inputs to be 1, which is always false since one of the inputs is already 0.

