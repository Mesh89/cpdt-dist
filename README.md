# cpdt-dist

CPDT-dist is a fast and memory-efficient tool for computing the rooted triplet distance between two arbitrary-degree phylogenetic trees, based on the algorithm described in the article:
- J. Jansson and R. Rajaby: A More Practical Algorithm for the Rooted Triplet Distance. Journal of Computational Biology (JCB), Vol. 24, Number 2, pp. 106-126, Mary Ann Liebert, Inc. publishers, 2017 (special issue containing selected papers from AlCoB 2015).

It has been implemented in C++ and can be compiled with a standard C++ compiler.

## Build procedure

You can compile the file cpdt-dist.cpp directly. The standard compile command is:

g++ -O3 -o cpdt cpdt-dist.cpp

If you want to enable the usage of sparsehash, you can define GOOGLE_HASH at compile time (-DGOOGLE_HASH using g++ ). In this case, you will have to link against the sparsehash binaries.

## Usage

cpdt filename1 filename2

The above command will print the rooted triplet distance between the two phylogenetic trees contained in the two given files.

Tree should be encoded in a subset of the Newick format (http://en.wikipedia.org/wiki/Newick_format) and leaves should be named using integers from 1 to n. For example, the following is a valid tree:
(((1,4),2),(3,5));
