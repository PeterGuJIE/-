#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* EntryNodeOfLoop(struct ListNode* pHead) {
	struct ListNode*fast = pHead;
	struct ListNode*slow = pHead;
	while (fast != NULL&&fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			struct ListNode*a1 = slow;
			struct ListNode*a2 = pHead;
			while (a1 != a2)
			{
				a1 = a1->next;
				a2 = a2->next;
			}
			return a2;
		}
	}
	return NULL;
}

struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
	struct ListNode*prev = pHead;
	int n = 0;
	while (prev != NULL)
	{
		prev = prev->next;
		n++;
	}
	if (n<k)
		return NULL;
	prev = pHead;
	while (n != k)
	{
		prev = prev->next;
		n--;
	}
	return prev;
}




int match_cal(char* str, char* pattern)
{
	if (*str == '\0'&&*pattern == '\0')
		return 1;
	if (*str != '\0'&&*pattern == '\0')
		return 0;
	if (*str == '\0'&&*pattern != '\0')
	{
		if (pattern[1] == '*')
			return match_cal(str, pattern + 2);
		else
			return 0;
	}
	if (pattern[1] == '*')
	{
		if (str[0] == pattern[0] || pattern[0] == '.')
		{
			return match_cal(str + 1, pattern) || match_cal(str, pattern + 2);
		}
		else
		{
			return match_cal(str, pattern + 2);
		}
	}
	else
	{
		if (str[0] == pattern[0] || pattern[0] == '.')
		{
			return match_cal(str + 1, pattern + 1);
		}
		else
			return 0;
	}
}


bool match(char* str, char* pattern) {
	if (str == NULL || pattern == NULL)
		return 0;
	return match_cal(str, pattern);
}








//
//struct ListNode*Find(struct ListNode* head, int val)
//{
//	struct ListNode*cur = head;
//	while (cur != NULL)
//	{
//		if (cur->val == val)
//			return cur;
//		cur = cur->next;
//	}
//	return NULL;
//}
//
//
//struct ListNode* deleteNode(struct ListNode* head, int val) {
//	struct ListNode* find = Find(head, val);
//	struct ListNode* cur = head;
//	if (find == head)
//	{
//		cur = head->next;
//		free(head);
//		head = cur;
//	}
//	else
//	{
//		while (cur->next != find)
//		{
//			cur = cur->next;
//		}
//		cur->next = find->next;
//		free(find);
//	}
//	return head;
//}






//void Move(int threshold, int rows, int cols, int x, int y, int arr[101][101])
//{
//	if (x < 0 || x >= rows || y < 0 || y >= cols || arr[x][y] == 1)
//		return;
//	int count = 0;
//	count = x % 10 + y % 10 + x / 10 + y / 10;
//	if (count <= threshold)
//	{
//		arr[x][y] = 1;
//		Move(threshold, rows, cols, x + 1, y, arr);
//		Move(threshold, rows, cols, x, y + 1, arr);
//		Move(threshold, rows, cols, x - 1, y, arr);
//		Move(threshold, rows, cols, x, y - 1, arr);
//	}
//}
//
//int movingCount(int threshold, int rows, int cols) {
//	 write code here
//	int arr[101][101];
//	int count = 0;
//	memset(arr, 0, sizeof(arr));
//	Move(threshold, rows, cols, 0, 0, arr);
//	for (int i = 0; i<rows; i++)
//	{
//		for (int j = 0; j<cols; j++)
//		{
//			if (arr[i][j] == 1)
//				count++;
//		}
//	}
//	return count;
//}