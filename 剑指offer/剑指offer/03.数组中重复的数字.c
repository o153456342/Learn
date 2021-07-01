//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int findRepeatNumber(int* nums, int numsSize)
//{
//    int i = 0;
//    int* ret = (int*)calloc(numsSize, sizeof(int));
//
//    for (i = 0; i < numsSize; i++)
//    {
//        if (ret[nums[i]] == 0)
//        {
//            ret[nums[i]] = 1;
//        }
//        else
//        {
//            return nums[i];
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int num[8] = { 2,3,4,5,2,4,7,9 };
//    int numsSize = sizeof(num) / sizeof(num[0]);
//    int ret = findRepeatNumber(num, numsSize);
//    printf("%d\n", ret);
//    return 0;
//}