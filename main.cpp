#include <iostream>
using namespace std;

struct Node
{
	//数据域
	int data;
	char name[10];
	int fare;
	//指针域
	Node* next;
};

int sum = 0;   //记录结点的数量


//建立链表
Node* Creat();
//判断链表是否是递增的
int Func1(struct Node* head, int a);
//判断链表是否对称函数
int Func2(Node* head);
//用于查找链表特定位置的值
char Find(Node* head, int n);
int main()
{
	Creat();
	return 0;
}
 
////创建投票链表
//struct Node* creat()
//{
//	int n = 0;                  //用于判断结点数
//	struct Node* head = NULL;   //头指针
//	struct Node* p1 = NULL;     //用于不断地创建新的结点
//	struct Node* p2 = NULL;     //用于指向链表的最后的一个结点
//	struct Node* search = NULL; //用于遍历链表
//	int flag = 0;               //标志位 用于记录是否有该名字
//
//	p1 = (Node*)malloc(sizeof(Node));
//	
//	//准备就绪，开始建立链表
//	for (int i = 0;; i++)
//	{
//		flag = 0;         //标志位置零
//		//初始化新链表
//		cin >> p1->name;
//		p1->next = NULL;
//		p1->fare = 0;
//		//如果输入0结束建立链表
//		if (strcmp(p1->name, "0") == 0)
//			break;
//		n++;
//		if (n == 1)      //第一个结点在链表中肯定是没有重复的
//		{
//			p1->fare++;
//			head = p1;
//			sum = 1;
//		}
//		else
//		{
//			search = head;   //将搜索指针处于第一个结点的位置
//			for (int j = 0; j < sum; j++)
//			{
//				if (strcmp(search->name, p1->name) == 0)  //发现链表中已经有相同名字的喽
//				{
//					search->fare++;    //票数加一
//					flag = 1;         
//					break;
//				}
//				search = search->next;
//			}
//			if (flag == 0)  //未发现这个名字，新建结点
//			{
//				p1->fare++;
//				p2->next = p1;
//				sum++;
//			}
//		}
//		if (flag == 0)  //对于新建的结点的一些处理
//		{
//			p2 = p1;
//			p1 = (Node*)malloc(sizeof(Node));
//
//		}
//	}
//	if (sum != 0)
//		p2->next = NULL;
//	return head;
//}

////建立FILO链表
//Node* Creat()
//{
//	int n = 0;      //记录此时链表中的结点个数
//	Node* head= (Node*)malloc(sizeof(Node));     //头结点
//	head->next = NULL;         //头结点的指针域清空
//	Node* p1 = NULL;           //p1是用来建立新的结点
//	
//	//准备工作已完成、开始建立
//	for (int i = 0;; i++)
//	{
//		p1 = (Node*)malloc(sizeof(Node));   //为p1申请新的内存空间
//		cin >> p1->data;    //输入p1的数据域
//		
//		//判断链表结束建立条件
//		if (p1->data == -1)  break;
//
//		n++;   //该结点符合条件，结点数加一
//
//		//将新结点添加到链表中
//		if (n == 1)
//		{
//			head->next = p1;
//			p1->next = NULL;      //此时p1是第一个结点，同时也是最后一个结点，所以p1指针域一定要清空
//		}
//		else if (n>1)
//		{
//			p1->next = head->next;   //新结点p1指向头结点之前指向的第一个结点
//			head->next = p1;         //头结点指向p1，使得p1成为第一个结点
//		}		
//	}
//	return head;   //做接口，返回头指针，有利于外部使用
//}


////建立有头结点链表
//Node* Creat()
//{
//	int n = 0;      //记录此时链表中的结点个数
//	Node* head= (Node*)malloc(sizeof(Node));     //头结点
//	head->next = NULL;         //头结点的指针域清空
//	Node* p1=NULL, *p2=NULL;   //p1是用来建立新的结点 p2是用来追踪链表中的尾结点
//	
//	//准备工作已完成、开始建立
//	for (int i = 0;; i++)
//	{
//		p1 = (Node*)malloc(sizeof(Node));   //为p1申请新的内存空间
//		cin >> p1->data;    //输入p1的数据域
//		
//		//判断链表结束建立条件
//		if (p1->data == -1)  break;
//
//		n++;   //该结点符合条件，结点数加一
//
//		//将新结点添加到链表中，第一次是添加到头指针的后面，第二次是添加到链表尾结点的后面
//		if (n == 1)  head->next = p1;
//		else if (n > 1) p2->next = p1;
//
//		p2 = p1;  //将p2指向链表的尾结点
//	}
//
//	p2->next = NULL; //链表尾结点的指针域清空 ！！！
//
//	return head;   //做接口，返回头指针，有利于外部使用
//}


//建立无头结点链表
Node* Creat()
{
	int n = 0;      //记录此时链表中的结点个数
	Node* head;     //头指针
	Node* p1 = NULL, * p2 = NULL;   //p1是用来建立新的结点 p2是用来追踪链表中的尾结点

	//准备工作已完成、开始建立
	for (int i = 0;; i++)
	{
		p1 = (Node*)malloc(sizeof(Node));   //为p1申请新的内存空间
		cin >> p1->data;    //输入p1的数据域

		//判断链表结束建立条件
		if (p1->data == -1)  break;

		n++;   //该结点符合条件，结点数加一

		//将新结点添加到链表中，第一次是添加到头指针的后面，第二次是添加到链表尾结点的后面
		if (n == 1)  head = p1;
		else if (n > 1) p2->next = p1;

		p2 = p1;  //将p2指向链表的尾结点
	}

	p2->next = NULL; //链表尾结点的指针域清空 ！！！

	return head;   //做接口，返回头指针，有利于外部使用
}


//判断链表是否是递增的
int Func1(struct Node* head, int a)
{
	int flag = 1;           //递增标志位
	struct Node* p = head;  //p是用于遍历的结点指针
	for (int i = 0; i < a - 1; i++)
	{
		if (p->data > (p->next)->data)
		{
			flag = 0;
			return 0;
		}
		p = p->next;
	}
	if (flag == 1)
	{
		return 1;
	}
}

//判断链表是否对称函数
int Func2(Node* head)
{
	int flag = 1;
	if (sum % 2 == 0)
	{
		for (int j = 1; j <= sum / 2; j++)
		{
			if (Find(head, j) != Find(head, sum - j + 1))
			{
				flag = 0;
				break;
			}
		}
	}
	if (sum % 2 != 0)
	{
		for (int j = 1; j <= sum / 2; j++)
		{
			if (Find(head, j) != Find(head, sum - j + 1))
			{
				flag = 0;
				break;
			}
		}
	}

	return flag;
}

////用于查找链表特定位置的值
//char Find(Node* head, int n)
//{
//	Node* search = head;
//	for (int i = 0; i < n-1; i++)
//	{
//		search = search->next;
//	}
//	return search->data;
//}

////查找链表的最大数值并交换
//void  HandleLinkList(NODE* head)
//{
//	int pos = 1;           //记录最大值结点的位置
//	int sum = head->sum;   //记录结点的数量
//	int max;               //记录最大值
//	//准备工作
//	NODE* p = head;   
//	max = p->num;        //起始默认第一个结点的数值是最大的
//	NODE* end_last = p;  //尾指针，用于最后的数据交换
//	NODE* t;             //交换结点数据的临时结点
//	NODE* sec = head->next;   //最大值的结点的前一个结点
//	NODE* max_point = p;      //最大值的结点
//	int temp;
//
//	//找到倒数第二个结点
//	for (int i = 0; i < sum - 2; i++)
//	{
//		end_last = end_last->next;
//	}
//	//找到最大结点的位置
//	for (int i = 1; i <= sum; i++)
//	{
//		if (p->num > max)
//		{
//			pos = i;
//			max = p->num;
//		}
//		p = p->next;
//	}
//	//如果链表中只有一个结点的话，就不需要进行交换的
//	if (head->sum == 1)
//		return;
//	//如果链表中有两个结点的话，直接进行判断
//	if (head->sum == 2)
//	{
//		if (head->num > head->next->num)
//		{
//			temp = head->num;
//			head->num = head->next->num;
//			head->next->num = temp;
//		}
//		return;
//	}
//	//对于三个结点以上的处理
//	//如果最大值是第一个结点
//	if (pos == 1)
//	{
//		temp = head->num;
//		head->num = end_last->next->num;
//		end_last->next->num = temp;
//
//	}
//	//如果最大值不是第一个结点
//	else if (pos >= 2 && pos <= sum)
//	{
//		max_point = head;
//		for (int i = 0; i < pos - 2; i++)
//			max_point = max_point->next;
//
//		t = max_point->next;
//		max_point->next = end_last->next;
//		if (t != end_last)
//		{
//			max_point->next->next = t->next;
//
//			end_last->next = t;
//		}
//		else
//		{
//			max_point->next->next = t;
//		}
//		t->next = NULL;
//	}
//}