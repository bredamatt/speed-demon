# Software Dynamics Terminology

## Transaction
An input message to a computer system that must be dealt with as a single unit of work.

## Server
A computer processing transactions

## Latency / response time
The time elapsed between sending a message and receiving a response.

## Offered load
The number of tgransactions sent per second.

## Service
A collection of programs that handle one particular kind of transaction.

## Tail latency
If we consider latency as a statistical distribution, the tail latency would refer to the slowest transactions in this distribution.

## Dynamics
The activity over time - what pieces of code run when, what they wait for, what memory space they take, and how different programs affect each other.

## Cache hit
Finding and re-using software-cached data.

## Cache miss
Not finding software-cached data.

## Remote procedure call 
When a program causes a subroutine to execute in a different address space, which is coded as if it were a normal / local procedure call without the programmer explicitly coding the details for the remote interaction.

## Execution skew
The variation in completion times of a particualr request.

## Response-time goal
The latency we want to achieve when making a request.

## Disk-server goal
The latency we want to achieve when writing to disk from a server processing a request.

## Overall response time
This is usually the 99th percentile (slowest) latencies, since we always have to think of latency from a worst-case scenario.

## Order of magnitude estimation
An approximate measure of the size of a number. For example:

- decimal: an estimate that is the nearest pwoer of 10 (1, 10, 100, ...)
- binary: an estimate that is the is the nearest power of 2 (1, 2, 4, 8, ...)

The focus here is on O(n), where the units of n are always specified (for example, nsec, usec, and msec). 

## Offered load goal 
This is particularly important when considering layered software. Consider a case where the lowest layer in your code is swamped due to unreasonable offered load. These offered load goals function as constraints for the layers above it.
