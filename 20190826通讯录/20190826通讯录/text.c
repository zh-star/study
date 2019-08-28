#define _CRT_SECURE_NO_WARNINGS 1
//ͨѶ¼
//���ܣ���ɾ�Ĳ�
#include<stdio.h>
#include<assert.h>
#include<string.h>

#define PERSON_MAX_SIZE  200//�ܹ���ŵĸ���
#define NAME_MAX_SIZE  1024//��������󳤶�
#define PHONE_MAX_SIZE  100//�绰�������󳤶�

//���һ���˵������͵绰�Ľṹ��
typedef struct PersonInfo{
	char Name[NAME_MAX_SIZE];
	char Phone[PHONE_MAX_SIZE];
}PersonInfo;
//��������˵������͵绰�Ľṹ��
typedef struct AddrBook{
	PersonInfo  person[PERSON_MAX_SIZE];
	int size;//��ǰ��������ЧԪ�صĸ���
}AddrBook;
void Init(AddrBook* add_book){
	//��ʼ��
	assert(add_book != NULL);
	add_book->size = 0;
	for (int i = 0; i < PERSON_MAX_SIZE; i++){
		add_book->person[i].Name[0] = '\0';
		add_book->person[i].Phone[0] = '\0';
		//memset(add_book->person[i].Name, '\0', NAME_MAX_SIZE);
		//memset(add_book->person[i].Phnoe, '\0', PHONE_MAX_SIZE);
	}
}
void Add(AddrBook*add_book){
	//������ϵ��
	assert(add_book != NULL);
	printf("������ϵ��\n");
	if (add_book->size  >PERSON_MAX_SIZE){
		printf("ͨѶ¼���������财�棬��ɾ��������Ա�绰��\n");
		return;
	}
	PersonInfo* p = &add_book->person[add_book->size];
	printf("����������ϵ��������");
	scanf("%s", p->Name);
	printf("������绰���룺");
	scanf("%s", p->Phone);
	printf("������ϵ�˳ɹ���\n");
	++add_book->size;
}
void Remove(AddrBook* add_book){
	//�޸���ϵ��
	assert(add_book != NULL);
	printf("�޸���ϵ��\n");
	if (add_book == 0){
		printf("ͨѶ¼Ϊ�գ������޸ģ�\n");
		return;
	}
	printf("��������Ҫ�޸���ϵ�˵����[0,%d]��",add_book->size-1);
	int index;
	scanf("%d", &index);
	if (index < 0 || index >= add_book->size){
		printf("��������������������[0,%d]֮�������:", add_book->size-1);
		return;
	}
		PersonInfo* p = &add_book->person[index];
		printf("ԭ����Ϊ��%s\n�������޸�֮���������*�����޸ģ�:", p->Name);
        char name[NAME_MAX_SIZE];
		scanf("%s", name);
		if (strcmp(name, "*") != 0){
			strcpy(p->Name, name);
		}
		else{
			printf("����û�޸�\n");
		}
		printf("ԭ�绰�ǣ�%s\n�������޸�֮��ĵ绰��*�����޸ģ���",p->Phone);
		char phone[PHONE_MAX_SIZE];
		scanf("%s", phone);
		if (strcmp(phone, "*") != 0){		
			strcpy(p->Phone, phone);
		}
		else{
			printf("�绰û�޸�\n");
		}
}
void  PrintfAll(AddrBook* add_book){
    //��ʾ������ϵ��
	assert(add_book != NULL);
	printf("                                 \n");
	printf("----------------------\n");
	for (int i = 0; i < add_book->size;++i){
		PersonInfo* p = &add_book->person[i];
		printf("[%d]  %s :  %s \n", i, p->Name,p->Phone);
	}
	printf("��ǰ����%d����¼��\n",add_book->size);
	printf("---------------------- \n");
	printf("                                 \n");

}
void Update(AddrBook*add_book){
	//ɾ����ϵ��
	assert(add_book != NULL);
	printf("ɾ��ͨѶ¼�е�Ԫ��\n");
	if (add_book->size == 0){
		printf("ͨѶ¼Ϊ��,����ɾ����\n");
		return;
	}
	printf("��������Ҫɾ������ϵ�����[0,%d]��", add_book->size-1);
	int index;
	scanf("%d", &index);
	if (index < 0 || index >= add_book->size){
		printf("���������ϵ����Ҫ����������[0,%d]֮������֣�",add_book->size-1);
		return;
	}
	//������ôɾ����
	if (index == add_book->size - 1){
		//1.ɾ�����һ��Ԫ��
		--add_book->size;
	}
	else{
		//ɾ���м�Ԫ�أ��Ȱ����һ��Ԫ��д��Ҫɾ����λ����
		PersonInfo*  mid = &add_book->person[index];
		PersonInfo*  last = &add_book->person[add_book->size-1];
		strcpy(mid->Name, last->Name);
		strcpy(mid->Phone, last->Phone);
		--add_book->size;
	}
	printf("ɾ���ɹ�����ǰ��ʣ%d����¼\n",add_book->size);
}
int Menu(){
		printf("======================\n");
		printf("     ��ӭʹ��ͨѶ¼����    \n");
		printf("    1.��ʾ��������ϵ��Ϣ      \n");
		printf("    2.������ϵ����Ϣ            \n");
		printf("    3.ɾ����ϵ����Ϣ            \n");
		printf("    4.�޸���ϵ����Ϣ            \n");
		printf("    0.�˳�ͨѶ¼����           \n");
		printf("======================\n");
		printf("����������ѡ��");
		int choice=0;
		scanf("%d", &choice);
		return choice;
}
AddrBook  add_book;
typedef   void (*Func)(AddrBook*);//����ָ��

int main()
{
	Init(&add_book);
	while (1){
		int choice = Menu();
		Func func[] = {
			NULL,
			PrintfAll,
			Add,
			Update,
			Remove
		};
		if (choice < 0 ||choice > 4){
			printf("����������\n");
			continue;
		}
		if (choice == 0){
			printf("Goodbay!\n");
			break;
		}
		func[choice](&add_book);
	}
	return 0;
}