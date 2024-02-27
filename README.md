# **Implementation of Memory Allocation Functions in C**
This project implements the memory allocation functions malloc, calloc, realloc, and free in the C programming language. 
It includes various allocation schemes such as Best Fit (BF), Worst Fit (WF), First Fit (FF), and Next Fit (NF). 
These memory allocation functions are that are commonly used in C programming for dynamic memory management.

### **Allocation Schemes**
* Best Fit (BF): Allocates memory by selecting the block that is closest in size to the requested size, but not smaller.
* Worst Fit (WF): Allocates memory by selecting the largest available block of memory that meets the requested size.
* First Fit (FF): Allocates memory by searching the memory list from the beginning and selecting the first block that is large enough to accommodate the requested size.
* Next Fit (NF): Similar to First Fit, but the search for free memory starts from the last allocated block's position.

### **Requirements**
C compiler (e.g., GCC)

Linux environment

### **Implementation**
malloc.c: Implementation of the malloc, calloc, realloc, and free functions using different allocation schemes as well as with coalescing and splitting of free blocks.

### **Usage**
* Clone or download the repository to your local machine.
* Navigate to the directory containing the project files.
* Compile the source files using the Makefile on a C compiler:
  
  make
* Run the executable:
  
  $ env LD_PRELOAD=lib/libmalloc-ff.so tests/ffnf
* To run the other heap management schemes replace libmalloc-ff.so with the appropriate library:
  
  Best-Fit: libmalloc-bf.so
  
  First-Fit: libmalloc-ff.so
  
  Next-Fit: libmalloc-nf.so
  
  Worst-Fit: libmalloc-wf.so
