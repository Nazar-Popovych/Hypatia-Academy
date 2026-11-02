# Proofs 

## De Morgan's laws 

### 1. (xy)' = x' + y' 

First, start with xy. For it to be true, both x and y need to be true. (xy)' is just NAND - the opposite of AND. It is only false when both x and y are true. 
So, looking at the left-side expression, it is also only false when both x and y are true, giving x' = y' = 0; x' + y' = 0 + 0 = 0. For the rest of the cases, when at least one of the inputs is false, it's complement becomes true. The expression becomes 1 + y' or x' + 1, which are both always true by the domination law. 
Hence, both sides of the expression carry the same meaning, and are, therefore, identical.
