//#include <iostream>
//using namespace std;
//
//int binary_search(int* ary_pointer,int first_index ,int last_index, int target,int* pointer_count);
//
//int main()
//{
//	int ary_num ,search_num;
//	int count = 0;
//	int* p_count = &count;
//
//	//초기 세팅
//	cout << "배열의 길이를 지정해주세요 : ";
//	cin >> ary_num;
//	int* p_ary = new int[ary_num];
//	for (int index = 0; index < ary_num; index++) { p_ary[index] = 0; } //오류 방지를 위한 초기화
//	cout << "넣을 숫자를 입력하세요 : ";
//	for (int index = 0; index < ary_num; index++) {
//		cin >> p_ary[index];
//	}
//	//잘들어갔는지 확인 
//	//for (int index = 0; index < ary_num; index++) {cout << p_ary[index]<< " ";}
//
//	cout << "찾을 숫자를 입력하세요 : ";
//	cin >> search_num;
//
//	cout << binary_search(p_ary,0 ,ary_num-1, search_num, p_count) << endl;
//	cout << count;
//	return 0;
//}
//
//
//int binary_search(int* ary_pointer, int first_index, int last_index, int target, int* pointer_count)
//{
//	int first = first_index, last = last_index;
//
//	//예외처리
//	if (first > last) {
//		return -1;
//	}
//
//	while (first <=last) //1개 남을 때 까지 
//	{
//		int mid = (first + last) / 2; //3-> 1 , 4->2, 5->2, 6->3
//		(*pointer_count)++;
//
//		if (target == ary_pointer[mid])
//		{
//			return mid;
//		}
//		else if (target < ary_pointer[mid])//sorted array라 가정 
//		{
//			//last = mid-1;
//			return binary_search(ary_pointer, first, mid-1, target, pointer_count);
//		}
//		else // target > ary_pointer [mid]
//		{
//			//first_index  = mid+1; 
//			return binary_search(ary_pointer, mid+1, last ,target, pointer_count);
//		}
//	}
//
//}
