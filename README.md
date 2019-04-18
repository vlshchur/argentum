This version of argentum implements the basic tcPBWT algorithms (tcPBWT with tree reduction).

To compile simply run
`g++ -o argentum argentum.cpp ARG.cpp argIO.cpp -O3`

The input file should contain SNP sites encoded by 0/1 values.

You need to provide the filename as the first argument and the nujmber of haplotypes as the second argument. For example, if you use scrm to simulate the data, you might want to skip first six lines:
`./argentum <(tail -n +7 test.txt) 100`.

The ouput is in the planar tree representation format as described in https://www.biorxiv.org/content/10.1101/542035v1
Each tree is encoded by two lines. The first line is the permutation of haplotype ids, the second line is the similarity in the planar ordering.

See also https://github.com/nvalimak/argentum for the version which implements many other features (like forward-backward run, mincut algorithm etc). Though that version does not scale very well for large (>10000) sample size.
