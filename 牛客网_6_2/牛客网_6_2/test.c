#define _CRT_SECURE_NO_WARNINGS 1


int* printMatrix(int** matrix, int matrixRowLen, int* matrixColLen, int* returnSize) {
	int n = matrixRowLen*(*matrixColLen);
	int *str = (int*)malloc(sizeof(int)*(matrixRowLen*(*matrixColLen)));
	*returnSize = n;
	int left = 0;
	int up = 0;
	int right = *matrixColLen - 1;
	int down = matrixRowLen - 1;
	int m = 0;
	while (left <= right&&up <= down){
		for (int i = left; i <= right; i++){
			str[m] = matrix[up][i];
			m++;
		}
		up++;
		if (up>down)
			break;
		for (int i = up; i <= down; i++){
			str[m] = matrix[i][right];
			m++;
		}
		right--;
		if (left>right)
			break;
		for (int i = right; i >= left; i--){
			str[m] = matrix[down][i];
			m++;
		}
		down--;
		if (up>down)
			break;
		for (int i = down; i >= up; i--){
			str[m] = matrix[i][left];
			m++;
		}
		left++;
		if (left>right)
			break;
	}
	return str;
}



//int check(struct TreeNode*left, struct TreeNode*right)
//{
//	if (left == NULL&&right != NULL)
//		return 0;
//	if (left != NULL&&right == NULL)
//		return 0;
//	if (left == NULL&&right == NULL)
//		return 1;
//	if (left->val == right->val)
//		return check(left->left, right->right) && check(left->right, right->left);
//	else
//		return 0;
//}
//
//bool isSymmetrical(struct TreeNode* pRoot) {
//	if (pRoot == NULL)
//		return true;
//	return check(pRoot->left, pRoot->right);
//}
//
//
//
//
//
//
//
//struct TreeNode* Mirror(struct TreeNode* pRoot) {
//	if (pRoot == NULL)
//		return NULL;
//	struct TreeNode*cur = pRoot->left;
//	pRoot->left = pRoot->right;
//	pRoot->right = cur;
//	Mirror(pRoot->left);
//	Mirror(pRoot->right);
//	return pRoot;
//}
//
//
//
//
//
//
//
//#include<stdbool.h>
//bool IsPoss(struct TreeNode* pRoot1, struct TreeNode* pRoot2)
//{
//	if (pRoot2 == NULL)
//		return 1;
//	if (pRoot1 == NULL)
//		return 0;
//	if (pRoot1->val != pRoot2->val)
//		return 0;
//	else
//		return IsPoss(pRoot1->left, pRoot2->left) &&
//		IsPoss(pRoot1->right, pRoot2->right);
//}
//
//
//bool HasSubtree(struct TreeNode* pRoot1, struct TreeNode* pRoot2) {
//	bool ret;
//	if (pRoot1 != NULL&&pRoot2 != NULL)
//	{
//		if (pRoot1->val == pRoot2->val)
//		{
//			ret = IsPoss(pRoot1, pRoot2);
//		}
//		if (ret != true)
//			ret = HasSubtree(pRoot1->left, pRoot2);
//		if (ret != true)
//			ret = HasSubtree(pRoot1->right, pRoot2);
//	}
//	return ret;
//}


//struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
//	if (pHead1 == NULL)
//		return pHead2;
//	if (pHead2 == NULL)
//		return pHead1;
//	struct ListNode*prev = NULL;
//	struct ListNode*tail = NULL;
//	while (pHead1 != NULL&&pHead2 != NULL)
//	{
//		if (pHead1->val<pHead2->val)
//		{
//			if (tail == NULL)
//			{
//				prev = tail = pHead1;
//			}
//			else
//			{
//				tail->next = pHead1;
//				tail = tail->next;
//			}
//			pHead1 = pHead1->next;
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				prev = tail = pHead2;
//			}
//			else
//			{
//				tail->next = pHead2;
//				tail = tail->next;
//			}
//			pHead2 = pHead2->next;
//		}
//	}
//	if (pHead1 != NULL)
//		tail->next = pHead1;
//	if (pHead2 != NULL)
//		tail->next = pHead2;
//	return prev;
//}







//struct ListNode* ReverseList(struct ListNode* pHead) {
//	struct ListNode*head = malloc(sizeof(struct ListNode));
//	head->next = NULL;
//	struct ListNode*prev = pHead;
//	struct ListNode*tail = NULL;
//	while (prev != NULL)
//	{
//		tail = prev;
//		prev = prev->next;
//		tail->next = head->next;
//		head->next = tail;
//	}
//	return head->next;
//}