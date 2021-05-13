#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{	
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;//想要的数
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;//初始下标值
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i = 0;i<sz;i++){
//		if(k == arr[i]){
//			printf("找到了,下标是: %d\n",i);
//			break;
//		}
//	}
//	if(i == sz){
//		printf("未找到\n");
//	}
//
//	return 0;
//}

//int main()
//{	
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;//想要的数
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//
//	while(left<=right){
//		int mid = (left + right) / 2;
//		if(arr[mid] > k){
//			right = mid-1;
//		}
//		else if(arr[mid] < k){
//			left = mid+1;
//		}
//		else{
//			printf("找到了,下标是: %d\n",mid);
//			break;
//		}
//	}
//	while(left>right){
//		printf("未找到\n");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//int main() {
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	//-2是正确计算最后一个感叹号下标,字符串数组arr1最后隐含一个字符'\0'
//	//-1是用在整型int数组
//	int right = strlen(arr1)-1;//下标恒比元素个数少1
//	printf("%s\n",arr2);//展示被替换数组
//	
//	//while循环实现
//	while(left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		//1秒间歇,方便看到过程
//		Sleep(1000);
//		left++;
//		right--;
//		
//		//system执行系统命令的一个函数
//		//cls--清空屏幕
//		system("cls");
//
//	}
//
//	printf("%s\n", arr2);//展示最终效果
//	return 0;
//}


