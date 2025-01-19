#include <iostream>
#include <vector>

int main()
{
	bool* isSorted = new bool;
	*isSorted = false;
	int* buffer = new int;
	*buffer = 0;
	int* AmountOfSortedElements = new int;
	*AmountOfSortedElements = 0;
    std::vector <int> NumArray = {91823,1978,72,98,111,273,2,6,9,12,81,37,871,8937,9,0,1,87};
	
	
	//sort algorithm
	while (*isSorted == false)
	{
		*AmountOfSortedElements = 0;
		for (int i = 0; i < NumArray.size()-1; i++) {
			if (NumArray[i] > NumArray[i + 1]) {
				*buffer = NumArray[i];
				NumArray[i] = NumArray[i + 1];
				NumArray[i + 1] = *buffer;
			}
			else
			{
				*AmountOfSortedElements+=1;
			}
		

		};
		if (*AmountOfSortedElements == NumArray.size() - 1) {
			*isSorted = true;
		}
	}
	//output
	for (int j = 0; j < NumArray.size(); j++) {
		std::cout<<NumArray[j] << std::endl;
		
	}
	//free memory
	NumArray.erase(NumArray.begin(), NumArray.begin()+NumArray.size());
	delete(isSorted);
	delete(AmountOfSortedElements);
	delete(buffer);
}