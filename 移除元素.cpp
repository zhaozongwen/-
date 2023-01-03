#include <bits/stdc++.h>
using namespace std;

int removeElement(int* nums,int numsSize,int val){
	for(int i=0;i<numsSize;i++){
		if(nums[i]==val){// 发现需要移除的元素，就将数组集体向前移动一位
			for(int j=i+1;j<numsSize;j++){
				nums[j - 1] = nums[j];
			}
			i--; // 因为下标i以后的数值都向前移动了一位，所以i也向前移动一位
			numsSize--; // 此时数组的大小-1
		}
	}
	return numsSize;
}

int main() {
	int nums[8]={0,1,2,2,3,0,4,2};
	for(int i=0;i<8;i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int x;
	cin>>x;
	cout<<removeElement(nums,numsSize,x);
	return 0;
}
