#define _CRT_SECURE_NO_WARNINGS 1
//通讯录
//功能：增删改查
#include<stdio.h>
#include<assert.h>
#include<string.h>

#define PERSON_MAX_SIZE  200//总共存放的个数
#define NAME_MAX_SIZE  1024//姓名的最大长度
#define PHONE_MAX_SIZE  100//电话号码的最大长度

//存放一个人的姓名和电话的结构体
typedef struct PersonInfo{
	char Name[NAME_MAX_SIZE];
	char Phone[PHONE_MAX_SIZE];
}PersonInfo;
//存放所有人的姓名和电话的结构体
typedef struct AddrBook{
	PersonInfo  person[PERSON_MAX_SIZE];
	int size;//当前数组中有效元素的个数
}AddrBook;
void Init(AddrBook* add_book){
	//初始化
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
	//增加联系人
	assert(add_book != NULL);
	printf("新增联系人\n");
	if (add_book->size  >PERSON_MAX_SIZE){
		printf("通讯录已满，若需储存，请删除其他人员电话！\n");
		return;
	}
	PersonInfo* p = &add_book->person[add_book->size];
	printf("请输入新联系人姓名：");
	scanf("%s", p->Name);
	printf("请输入电话号码：");
	scanf("%s", p->Phone);
	printf("创建联系人成功！\n");
	++add_book->size;
}
void Remove(AddrBook* add_book){
	//修改联系人
	assert(add_book != NULL);
	printf("修改联系人\n");
	if (add_book == 0){
		printf("通讯录为空，不能修改！\n");
		return;
	}
	printf("请输入你要修改联系人的序号[0,%d]：",add_book->size-1);
	int index;
	scanf("%d", &index);
	if (index < 0 || index >= add_book->size){
		printf("您输入的序号有误，请输入[0,%d]之间的数字:", add_book->size-1);
		return;
	}
		PersonInfo* p = &add_book->person[index];
		printf("原姓名为：%s\n请输入修改之后的姓名（*代表不修改）:", p->Name);
        char name[NAME_MAX_SIZE];
		scanf("%s", name);
		if (strcmp(name, "*") != 0){
			strcpy(p->Name, name);
		}
		else{
			printf("姓名没修改\n");
		}
		printf("原电话是：%s\n请输入修改之后的电话（*代表不修改）：",p->Phone);
		char phone[PHONE_MAX_SIZE];
		scanf("%s", phone);
		if (strcmp(phone, "*") != 0){		
			strcpy(p->Phone, phone);
		}
		else{
			printf("电话没修改\n");
		}
}
void  PrintfAll(AddrBook* add_book){
    //显示所有联系人
	assert(add_book != NULL);
	printf("                                 \n");
	printf("----------------------\n");
	for (int i = 0; i < add_book->size;++i){
		PersonInfo* p = &add_book->person[i];
		printf("[%d]  %s :  %s \n", i, p->Name,p->Phone);
	}
	printf("当前共有%d条记录！\n",add_book->size);
	printf("---------------------- \n");
	printf("                                 \n");

}
void Update(AddrBook*add_book){
	//删除联系人
	assert(add_book != NULL);
	printf("删除通讯录中的元素\n");
	if (add_book->size == 0){
		printf("通讯录为空,不能删除！\n");
		return;
	}
	printf("请输入你要删除的联系人序号[0,%d]：", add_book->size-1);
	int index;
	scanf("%d", &index);
	if (index < 0 || index >= add_book->size){
		printf("您输入的联系人需要有误，请输入[0,%d]之间的数字：",add_book->size-1);
		return;
	}
	//具体怎么删除？
	if (index == add_book->size - 1){
		//1.删除最后一个元素
		--add_book->size;
	}
	else{
		//删除中间元素，先把最后一个元素写到要删除的位置上
		PersonInfo*  mid = &add_book->person[index];
		PersonInfo*  last = &add_book->person[add_book->size-1];
		strcpy(mid->Name, last->Name);
		strcpy(mid->Phone, last->Phone);
		--add_book->size;
	}
	printf("删除成功！当前还剩%d条记录\n",add_book->size);
}
int Menu(){
		printf("======================\n");
		printf("     欢迎使用通讯录程序！    \n");
		printf("    1.显示所有人联系信息      \n");
		printf("    2.新增联系人信息            \n");
		printf("    3.删除联系人信息            \n");
		printf("    4.修改联系人信息            \n");
		printf("    0.退出通讯录程序           \n");
		printf("======================\n");
		printf("请输入您的选择：");
		int choice=0;
		scanf("%d", &choice);
		return choice;
}
AddrBook  add_book;
typedef   void (*Func)(AddrBook*);//函数指针

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
			printf("您输入有误！\n");
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