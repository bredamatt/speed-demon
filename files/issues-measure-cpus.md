# Issues when measuring CPU latency

The speed of CPUs is the root cause why they also are hard to measure. In practice, the only way we can be certain of the latency of a particular instruction, is to use the RDTSC call (see: https://en.wikipedia.org/wiki/Time_Stamp_Counter). This can be executed in different ways:
- one which returns a monotonically increasing cycle counter
- one which returns the CPU time elapsed by a particular process

The issue with the former is that it is not representative of actual CPU cycles at all times, since it does not take into consideration over, or underclocking, but in stead fixes the cycle measurement to the default speed of the CPU.
There also is a 10 nsec ambiguity per read, since it is unpredictable when the next 10 nsec increment will occur. Additionally, there is an issue with the measurement whenever the CPU is in a power-saving state, and this state may also differ between CPUs rendering measurements that are accurate very complex.

