
#include <bits/stdc++.h> 
using namespace std; 

void printMaxActivities(int s[], int f[], int n) 
{ 
	int i, j; 

	cout << "Following activities are selected" << endl; 

	i = 0; 
	cout << i << " "; 


	for (j = 1; j < n; j++) { 
	
		if (s[j] >= f[i]) { 
			cout << j << " "; 
			i = j; 
		} 
	} 
} 

// Driver code 
int main() 
{ 
	int s[] = { 1, 3, 0, 5, 8, 5 }; 
	int f[] = { 2, 4, 6, 7, 9, 9 }; 
	int n = sizeof(s) / sizeof(s[0]); 

	// Function call 
	printMaxActivities(s, f, n); 
	return 0; 
} 
// this code contributed by shivanisinghss2110
