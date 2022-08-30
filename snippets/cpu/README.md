# Compiler optimization and influence on the performance

## Unoptimized 

Results will be similar to:

```
1000000000 iterations, 4961142858 cycles, 4.96 cycles/iteration
```

## Optimized 

Results will be similar to:

```
1000000000 iterations, 12 cycles, 0.00 cycles/iteration
```

## Discussion

How come it went from roughly 5 billion cycles to just 12? This is because the compiler optimized out the for loop, and in stead only includes the `rtdsc` instructions. The way it did the optimization is to calculate the sum at compile-time. This means we have to defeat the optimizer in order to actuallyt compare the performance of the optimized to the unoptimized code.
