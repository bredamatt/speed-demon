# Table of numbers you should know

| Action              |     Time     |   O(n)      |
|---------------------|--------------|-------------|
| L1 cache reference  | 0.5 nsec     |  O(1) nsec  |
| Branch mispredict   | 5 nsec       |  O(10) nsec |
| L2 cache reference  | 7 nsec       |  O(10) nsec |
| Mutex lock/unlock   | 25 nsec      |  O(10) nsec |
| Main memory reference | 100 nsec   |  O(100) nsec |
| Compress 1K with zippy | 3000 nsec |  O(1) usec |
| Send 2K bytes over 1 Gbps network | 20000 nsec | O(10) sec |
| Read 1 MB sequqntially from memory | 250000 nsec | O(100) usec |
| Round trip within same datacenter | 500000 nsec | O(1) msec |
| Disk seek | 10000000 nsec | O(10) msec | 
| Read 1MB sequentially from disk | 200000000 nsec | O(10) msec |
| Send packet CA -> Netherlands -> CA | 150000000 nsec | O(100) msec | 
