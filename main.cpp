#include <iostream>
using namespace std;

struct Node
{
	//������
	int data;
	char name[10];
	int fare;
	//ָ����
	Node* next;
};

int sum = 0;   //��¼��������


//��������
Node* Creat();
//�ж������Ƿ��ǵ�����
int Func1(struct Node* head, int a);
//�ж������Ƿ�Գƺ���
int Func2(Node* head);
//���ڲ��������ض�λ�õ�ֵ
char Find(Node* head, int n);
int main()
{
	Creat();
	return 0;
}
 
////����ͶƱ����
//struct Node* creat()
//{
//	int n = 0;                  //�����жϽ����
//	struct Node* head = NULL;   //ͷָ��
//	struct Node* p1 = NULL;     //���ڲ��ϵش����µĽ��
//	struct Node* p2 = NULL;     //����ָ�����������һ�����
//	struct Node* search = NULL; //���ڱ�������
//	int flag = 0;               //��־λ ���ڼ�¼�Ƿ��и�����
//
//	p1 = (Node*)malloc(sizeof(Node));
//	
//	//׼����������ʼ��������
//	for (int i = 0;; i++)
//	{
//		flag = 0;         //��־λ����
//		//��ʼ��������
//		cin >> p1->name;
//		p1->next = NULL;
//		p1->fare = 0;
//		//�������0������������
//		if (strcmp(p1->name, "0") == 0)
//			break;
//		n++;
//		if (n == 1)      //��һ������������п϶���û���ظ���
//		{
//			p1->fare++;
//			head = p1;
//			sum = 1;
//		}
//		else
//		{
//			search = head;   //������ָ�봦�ڵ�һ������λ��
//			for (int j = 0; j < sum; j++)
//			{
//				if (strcmp(search->name, p1->name) == 0)  //�����������Ѿ�����ͬ���ֵ��
//				{
//					search->fare++;    //Ʊ����һ
//					flag = 1;         
//					break;
//				}
//				search = search->next;
//			}
//			if (flag == 0)  //δ����������֣��½����
//			{
//				p1->fare++;
//				p2->next = p1;
//				sum++;
//			}
//		}
//		if (flag == 0)  //�����½��Ľ���һЩ����
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

////����FILO����
//Node* Creat()
//{
//	int n = 0;      //��¼��ʱ�����еĽ�����
//	Node* head= (Node*)malloc(sizeof(Node));     //ͷ���
//	head->next = NULL;         //ͷ����ָ�������
//	Node* p1 = NULL;           //p1�����������µĽ��
//	
//	//׼����������ɡ���ʼ����
//	for (int i = 0;; i++)
//	{
//		p1 = (Node*)malloc(sizeof(Node));   //Ϊp1�����µ��ڴ�ռ�
//		cin >> p1->data;    //����p1��������
//		
//		//�ж����������������
//		if (p1->data == -1)  break;
//
//		n++;   //�ý������������������һ
//
//		//���½����ӵ�������
//		if (n == 1)
//		{
//			head->next = p1;
//			p1->next = NULL;      //��ʱp1�ǵ�һ����㣬ͬʱҲ�����һ����㣬����p1ָ����һ��Ҫ���
//		}
//		else if (n>1)
//		{
//			p1->next = head->next;   //�½��p1ָ��ͷ���֮ǰָ��ĵ�һ�����
//			head->next = p1;         //ͷ���ָ��p1��ʹ��p1��Ϊ��һ�����
//		}		
//	}
//	return head;   //���ӿڣ�����ͷָ�룬�������ⲿʹ��
//}


////������ͷ�������
//Node* Creat()
//{
//	int n = 0;      //��¼��ʱ�����еĽ�����
//	Node* head= (Node*)malloc(sizeof(Node));     //ͷ���
//	head->next = NULL;         //ͷ����ָ�������
//	Node* p1=NULL, *p2=NULL;   //p1�����������µĽ�� p2������׷�������е�β���
//	
//	//׼����������ɡ���ʼ����
//	for (int i = 0;; i++)
//	{
//		p1 = (Node*)malloc(sizeof(Node));   //Ϊp1�����µ��ڴ�ռ�
//		cin >> p1->data;    //����p1��������
//		
//		//�ж����������������
//		if (p1->data == -1)  break;
//
//		n++;   //�ý������������������һ
//
//		//���½����ӵ������У���һ������ӵ�ͷָ��ĺ��棬�ڶ�������ӵ�����β���ĺ���
//		if (n == 1)  head->next = p1;
//		else if (n > 1) p2->next = p1;
//
//		p2 = p1;  //��p2ָ�������β���
//	}
//
//	p2->next = NULL; //����β����ָ������� ������
//
//	return head;   //���ӿڣ�����ͷָ�룬�������ⲿʹ��
//}


//������ͷ�������
Node* Creat()
{
	int n = 0;      //��¼��ʱ�����еĽ�����
	Node* head;     //ͷָ��
	Node* p1 = NULL, * p2 = NULL;   //p1�����������µĽ�� p2������׷�������е�β���

	//׼����������ɡ���ʼ����
	for (int i = 0;; i++)
	{
		p1 = (Node*)malloc(sizeof(Node));   //Ϊp1�����µ��ڴ�ռ�
		cin >> p1->data;    //����p1��������

		//�ж����������������
		if (p1->data == -1)  break;

		n++;   //�ý������������������һ

		//���½����ӵ������У���һ������ӵ�ͷָ��ĺ��棬�ڶ�������ӵ�����β���ĺ���
		if (n == 1)  head = p1;
		else if (n > 1) p2->next = p1;

		p2 = p1;  //��p2ָ�������β���
	}

	p2->next = NULL; //����β����ָ������� ������

	return head;   //���ӿڣ�����ͷָ�룬�������ⲿʹ��
}


//�ж������Ƿ��ǵ�����
int Func1(struct Node* head, int a)
{
	int flag = 1;           //������־λ
	struct Node* p = head;  //p�����ڱ����Ľ��ָ��
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

//�ж������Ƿ�Գƺ���
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

////���ڲ��������ض�λ�õ�ֵ
//char Find(Node* head, int n)
//{
//	Node* search = head;
//	for (int i = 0; i < n-1; i++)
//	{
//		search = search->next;
//	}
//	return search->data;
//}

////��������������ֵ������
//void  HandleLinkList(NODE* head)
//{
//	int pos = 1;           //��¼���ֵ����λ��
//	int sum = head->sum;   //��¼��������
//	int max;               //��¼���ֵ
//	//׼������
//	NODE* p = head;   
//	max = p->num;        //��ʼĬ�ϵ�һ��������ֵ������
//	NODE* end_last = p;  //βָ�룬�����������ݽ���
//	NODE* t;             //����������ݵ���ʱ���
//	NODE* sec = head->next;   //���ֵ�Ľ���ǰһ�����
//	NODE* max_point = p;      //���ֵ�Ľ��
//	int temp;
//
//	//�ҵ������ڶ������
//	for (int i = 0; i < sum - 2; i++)
//	{
//		end_last = end_last->next;
//	}
//	//�ҵ�������λ��
//	for (int i = 1; i <= sum; i++)
//	{
//		if (p->num > max)
//		{
//			pos = i;
//			max = p->num;
//		}
//		p = p->next;
//	}
//	//���������ֻ��һ�����Ļ����Ͳ���Ҫ���н�����
//	if (head->sum == 1)
//		return;
//	//������������������Ļ���ֱ�ӽ����ж�
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
//	//��������������ϵĴ���
//	//������ֵ�ǵ�һ�����
//	if (pos == 1)
//	{
//		temp = head->num;
//		head->num = end_last->next->num;
//		end_last->next->num = temp;
//
//	}
//	//������ֵ���ǵ�һ�����
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