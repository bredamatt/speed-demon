# Measuring CPUs

## Instruction latency
The number of CPU cycles from its first "execute" cycle to the first "execute" cycle of a subsequent instruction that uses the result. In other words, result-write times are not included in the estimation.
This is also why CPUs with pipelining perform better.

## Branch instruction latency
This is the number of CPU cycles it takes from fetching an instruction all the way up to fetching a successive instruction. 

## Cycle counters
These vary from CPU to CPU. Some count each cycle, others count increments of 30 cycles, or some 32 or 100 MHz counters which focused on elapsed time. Recall that 1 hertz is 1 cycle per second. 1 GHz is 1 thousand million (1 billion) cycles per second.

## Turning cycles into seconds
It is necessary to multiply the number of seconds with (pico) seconds per cycle. This assumes cycle times to be constant which is not always true.

## Constant-rate time-stamp counter
This is a way to establish some constant measure of CPU time. It will for example, always increment by 24 every 10 nanoseconds (at 100 MHz), given a 2.4 GHz chip. Even if you under, or overclock the chip, say to for example 800 MHz, or 2.7 GHz, it would always return a constant rate at 24 100M times per second. Hence it provides constant measurement of time, but it does not represent the actual cycles taken. 