//solution<1>

class Solution {
public:
    int countOdds(int low, int high) 
{
    if(low%2==1||high%2==1)
        return 1+(high-low)/2;
        else
            return (high-low)/2;
}
};

//solution<2>

class Solution {
public:
    int countOdds(int low, int high) {
       return (high+1)/2-(low/2);
    }
};

//solution<3>

#include<iostream>
using namespace std;

class Solution {
public:
	int countOdds(int low, int high) {
		int count{0};
		for (int i = low; i <= high; i++)
		{
			if (i % 2 == 1)
				count++;
		}
		return count;
	}
};

int main()
{
	int high, low;
	cin >> low >> high;
	Solution s;
	int result = s.countOdds(low, high);
	cout << result << "\n";
	return 0;
}
