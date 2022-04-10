# Exercise 1
* `w01-byte` bytes/second: <!--  2797.53 byte/sec -->
* `w02-byte` bytes/second: <!-- 1.37051e+06 byte/sec -->
* `w03-byte` bytes/second: <!-- 3.51488e+07 byte/sec -->

# Exercise 2
### Scenario 1:
* How many array elements can fit into a cache block?
<!-- 2 -->
* What combination of parameters is producing the hit rate you observe? Think about the sizes of each of the parameters.
<!-- Block Size and Step Size -->
* What is our hit rate if we increase Rep Count arbitrarily? Why?
<!-- Hit rate remains the same. -->

### Scenario 2:
* What combination of parameters is producing the hit rate you observe? Think about the sizes of each of the parameters.
<!-- Step Size, Num of Blocks, Block Size -->
* What happens to our hit rate if we increase the number of blocks and why?
<!-- Hit rate remains the same. -->

### Scenario 3:
* Choose a `number of blocks` greater than `1` and determine the smallest `block size` that uses every block *and* maximizes the hit rate given the parameters above. Explain why.
Number of blocks: <!-- 2 -->
Block Size: <!-- 8. If the block size is 4, the next iterate address will map to the same cache block, the other block is idle. -->

# Exercise 3
* Order the functions from fastest to slowest, and explain why each function's ranking makes sense using your understanding of how the cache works. Some functions might have similar runtimes. If this is the case, explain why.
<!-- Fill this in -->
ijk = kji > jki > jik > kij > ikj
1.25  0.5   0.5   1.25  2      2
In every iteration, we assume if the address is near, the program exploit the space locality, cache hit.
If we iterate the matrix in column order, cache miss, consume more time.
