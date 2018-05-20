README

The code was tested throug ssh on carminati@sachiel.dei.polimi.it

To create the string.txt file compile and run cosine.c

gcc -fopenmp cosine.c -lm -o cosine
./cosine

The, once created the dataset you can compile and run period.c
gcc -fopenmp period.c -lm -o period
./period <NUM_THREADS>

I use to set argv[1] in order to set the OMP_NUM_THREADS
