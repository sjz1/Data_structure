#include <iostream> 
using namespace std;

void print_ary(char* my_ary, int size);
void myfunc(char* p_ary, int size, int target_index);
int main()
{
	int ary_size;
	cout << "생성할 문자열의 길이를 입력하세요 : ";
	cin >> ary_size;

	char* p_ary = new char[ary_size];
	for (int index = 0; index <ary_size; index++)
	{
		p_ary[index] = '___'; //aaa(초기화)
	}
	myfunc(p_ary, ary_size, ary_size-1);

	return 0; 
}

void print_ary(char* my_ary,int size)
{
	for (int index = size-1; index >= 0; index--){cout << my_ary[index]; }
	cout << endl;
}



void myfunc(char* p_ary, int size, int target_index)
{
	if (target_index > 0)
	{
		p_ary[target_index] = 'a';
		myfunc(p_ary, size, target_index - 1);
	
		p_ary[target_index] = 'b';
		myfunc(p_ary, size, target_index -1);
	}
	else // target_index ==0
	{
		p_ary[target_index] = 'a';
		print_ary(p_ary, size);
		p_ary[target_index] = 'b';
		print_ary(p_ary, size);
	}
}

