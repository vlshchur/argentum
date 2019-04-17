This version of argentum implements the basic tcPBWT algorithms (tcPBWT with tree reduction).

To compile simply run
`g++ -o argentum argentum.cpp ARG.cpp argIO.cpp -O3`

The input file should contain SNP sites encoded by 0/1 values.

You need to provide the filename as the first argument and the nujmber of haplotypes as the second argument. For example, if you use scrm to simulate the data, you might want to skip first six lines:
`./argentum <(tail -n +6 test.txt) 100`
