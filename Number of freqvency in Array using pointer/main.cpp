#include <iostream> 
#include <vector> 
using namespace std;

void Counteroocurence(int *ptr,int left,int rght,int freqvency)
{
	int n = rght - left;
	vector<bool> visited(n, false);
	for (int i = 0; i < n; i++) {

		if (visited[i] == true)
			continue;

		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (*(ptr+i) == *(ptr+j)) {
				visited[j] = true;
				count++;
			}
		}
		if (count >= freqvency) {
			cout << *(ptr + i) << " " << count << endl;
		}
		
	}
}

int main()
{
	int arr[] = { 2,2,3,3,3.4,5,6 };
	int* ptr;
	ptr = &arr[0];
	Counteroocurence(ptr, 0,7,2);
	return 0;
}