# Proofs and disproofs

## De Morgan's laws 

### 1. (x⋅y)' = x' + y' 

**Proof**

First, start with xy. For it to be true, both x and y need to be true. (x⋅y)' is just NAND - the opposite of AND. It is only false when both x and y are true. 
So, looking at the right-side expression, it is also only false when both x and y are true, giving x' = y' = 0; x' + y' = 0 + 0 = 0. For the rest of the cases, when at least one of the inputs is false, it's complement becomes true. The expression becomes 1 + y' or x' + 1, which are both always true by the domination law. 
Hence, both sides of the expression carry the same meaning, and are, therefore, identical.

### 2. (x + y)' = x'⋅y' 

**Proof**

Firstly, look at (x + y)'. This expression is the opposite of OR, outputting true only when both of the inputs are false: (0 + 0)' = 0' = 1. After inspecting the right-side expression, we can see that it's an AND with both of the inputs inverted. It is true only when 0'⋅0' = 1⋅1 = 1. 
If even one of the inputs is true, the expression gives 1'⋅y' = 0⋅y' or x'⋅1' = x'⋅0, which are both always false by the domination law. 
Hence, both sides of the expression carry the same meaning, and are, therefore, identical.


## If n is odd, is n + 1 odd? 

**Disproof**

We can disprove the statement using a counterexample. 

Assume that n is odd and q = n + 1. 
If n = 3 (an odd number), then q = 3 + 1 = 4 (an even number). 

Therefore, the claim does not hold. 


## If n is odd, is n + 1 even? 

**Proof** 

We can prove the statement using proof by contradiction. 

Assume that n is odd. Then, assuming the opposite to the claim, q = n + 1 is also odd. 

By definition of odd numbers q can be rewritten as q = 2x + 1. 
Then, we get 2x + 1 = n + 1; 2x = n. However, 2x is even for all values of x, while n is supposed to be even. That is a contradiction. 
Hence, the original statement is true.
