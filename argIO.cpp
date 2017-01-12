#include "ARG.h"

void UpString(char *str, char **out){ //Input string 'str', the result is an uppercase string in 'out'
	int i = 0;
	*out = strdup(str);
	while(str[i]){
		*out[i] = (char)toupper(str[i]);
		i++;
	}
}

void ReadFile (char *filename){
	int i;
	char c;
	time_t t1, t2;
	t1 = time(NULL);
	std::vector<int> x;

	//Open the file with scrm output
	int N = ; //Find the number of haplotypes in the file, e.g. from the first line as it is of the form "scrm NUMBER_OF_HAPLOTYPES ........."
	std::cout << "Reading from " << filename << ". File contains " << N << " samples." << std::endl;
	Argentum ARG (N);//construct ARG class with N haplotypes
	for (i = 0; i < ARG.GetSize(); i++)//initialise vector of length N
		x.push_back(0);
	
	while (...)){//Read data from the input file, only lines with segregating sites (those with 0 and 1 only, skip newick trees)
		//read line into vector x
		ARG.FeedSite(x);
		t2 = time(NULL);
    }
}

void Argentum::PrintTree(){
	int i;
	std::cout << "Tree with " << M << " leaves." << std::endl;
	for (i = 0; i <M; i++)
		std::cout << i << '\t' << d[i] << '\t' << a[i] << std::endl;
}

void Argentum::PrintReducedTree(){
	int i;
	std::cout << "Reduced tree with " << rM << " leaves." << std::endl;
	for (i = 0; i < rM; i++)
		std::cout << i << "\t" << rd[i] << "\t L = " << rPack[i].el[0] << ", R = " << rPack[i].el[1] << ", val = " << rPack[i].el[2] << ", node = " << rPack[i].el[3] << std::endl;
}

void Argentum::PrintReducedTree1(){
	int i;
	std::cout << "Reduced tree with " << rM1 << " leaves." << std::endl;
	for (i = 0; i < rM1; i++)
		std::cout << i << "\t" << rd1[i] << "\t L = " << rPack1[i].el[0] << ", R = " << rPack1[i].el[1] << ", val = " << rPack1[i].el[2] << ", node = " << rPack1[i].el[3] << std::endl;
}