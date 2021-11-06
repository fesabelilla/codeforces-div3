// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

/* Program to test function countSetBits */
int main()
{
	int i = 9;
	for(int i = 1 ; i<=20 ; i++){
	    //!=
            if( countSetBits(i) % 2 == 0)
                cout <<i<<" :: " <<countSetBits(i)<<endl;
	}

	return 0;
}

// This code is contributed
// by Akanksha Rai
