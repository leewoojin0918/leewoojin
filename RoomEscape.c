#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void op();
void ip();
void roomBone();
void roomFone();
void roomFtwo();
void outdoor();
void boxOne();
void boxTwo();
void bookroom();
void kitchen();
void safeyboxOne();
void safeyboxTwo();
void kidsroom();
void parents();
void closet();
void frame();
void drawerOne();
void drawerTwo();
void bed();
void diaryOne();
void diaryTwo();
void office();
void generator();
void safeyboxOne_pass();
   
int isOpenkidsroom = FALSE;
   
int isFindkeyOne = FALSE;
int isFindkeyTwo = FALSE;
int isFindhandle = FALSE;
   
int main(){
   int menu;
   
   while(1){
      printf("RE:ZERO\n");
      printf("1.����\n");
      printf("0.����\n");
      printf(">>");
      scanf("%d",&menu);
      
      switch(menu){
         case 1:
            op();
            ip();
            break;
         case 0:
            return 0;
         default:
            printf("�Է� ����\n\n");
            break;
      }   
   }
}
void op(){
   system("cls");
   printf("\n\n");
   printf("�������~\n");
   Sleep(500);
   printf("VR�������ӿ� ���ǰ� ȯ���մϴ�.\n");
   Sleep(500);
   printf("La suerte esta a tu lado.\n");
   Sleep(100);
   system("pause"); 
}
void ip(){
   int menu;
   while(1){
      system("cls");
      printf("���ÿ� ���Դ�.\n");
      printf("�ϴ� ���� �����\n");
      printf("�ȿ����� ���ƴٳຸ��!\n"); 
      printf("1.���� 2.1�� 3.2�� 4.���Թ�\n");
      
      printf(">>");
      scanf("%d",&menu);
      
      switch(menu){
         case 1:
            roomBone();
            break;
         case 2:
            roomFone();
            break;
         case 3:
            roomFtwo();
            break;
         case 4:
            if(outdoor){
               printf("���� ����ִ�.");
               system("pause"); 
            }
            break;
         default:
            printf("\n #ERROR # �Է°� ����\n");
            system("pause");
      }
   }
}
void roomBone(){
   int menu;
   while(1){
      system("cls");
      printf("���Ͽ� ���Դ�\n");
      printf("�ʿ��Ѱ� ã�ƺ���\n");
      printf("1.������ 2.����1 3.����2 4.���ư���.\n");
         printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            generator();
            break;
         case 2:
            boxOne();
            break;
         case 3:
            boxTwo();
            break;
         case 4:
            ip();
            break;
         default:
            printf("\n# ERROR # �Է°� ����\n");
            system("pause");
      }
      
   }
}
void generator(){
   int menu;
   while(1){
      printf("1.��ģ��. 2.���ư���.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            if(isFindhandle){
               printf("\n ���� �״�.\n ");
               printf("\n���� ���Ⱑ �۵����״� �ٸ� ���� ������!\n"); 
            }
            else{
               printf("�����̰� ��� ��ĥ �� ����.\n");
            }
            break;
         case 2:
            roomBone();
            break;      
      }
   }   
}
void boxOne(){
   int menu;
   while(1){
      printf("1.ã�ƺ���. 2.ã�ƺ��� �ʴ´�. 3.���ư���.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            if(isFindhandle) {
            printf("\n���̻� ���캼 �ʿ� ����.\n");
            } else{
               isFindhandle=TRUE;
               printf("\n���� 1���� �����̸� �߰��ߴ�.\n");
               printf("\n�����̰� ����ü �� �ʿ��� ����?\n");
            }
            break;
         case 2:
            printf("\nŻ�⿡ �ʿ��� �������� ���� �� �ִ�.\n");
            printf("\n���� ���캸�� ���� ���ΰ�?\n"); 
            break; 
         case 3:
            return;
         default:
            printf("\n# ERROR # �Է°� ����\n\n");
            break;
      }
   }
}
void boxTwo(){
   int menu;
   while(1){
      printf("1.ã�ƺ���. 2.ã�ƺ��� �ʴ´�. 3.���ư���.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            printf("\n������� ���ǹۿ� ����.\n");
            break;
         case 2:
            printf("\nŻ�⿡ �ʿ��� �������� ���� �� �ִ�.\n");
            printf("\n���� ���캸�� ���� ���ΰ�?\n"); 
            break; 
         case 3:
            return;
         default:
            printf("\n# ERROR # �Է°� ����\n\n");
            break;
      }
   }
}
void roomFone(){
   int menu;
   while(1){
      system("cls");
      printf("1������ ��𿡼� ����\n");
      printf("1.å�� 2.�Ĵ� 3.���ư���\n");
         printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            bookroom();
            break;
         case 2:
            kitchen();
            break;
         case 3:
            ip();
            break;
         default:
            printf("\n# ERROR # �Է°� ����\n");
      }
      system("pause");
   }
}
void bookroom(){
   int menu;
   while(1){
      system("cls");
      printf("å�� ���� �ִ�\n");
      printf("1.���캻�� 2.������\n");
      printf(">> ");
      scanf("%d",&menu); 
      switch(menu){
         case 1:
            printf("������ ������ ����\n");
            break;
         case 2:
            roomFone();
            break;
         default:
            printf("\n# ERROR # �Է°� ����\n");
      }
      system("pause");
   }
}
void kitchen(){
	int menu;
	while(1){
		system("cls");
		printf("���� �α�ô�� �ִ°� ����\n");
		printf("1.��Ź �Ʒ��� Ȯ���Ѵ�. 2.���ư���");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				printf("�ǹ��� �׸��ڰ� ���ϰ���");
				break;
			case 2:
				roomFone();
				break;
			default:
			printf("\n# ERROR # �Է°� ����\n");
		}
		system("pause");
	}
}
void roomFtwo(){
	int menu;
	while(1){
		system("cls");
		printf("2����  ������ ����\n");
		printf("1.���̹� 2.�θ��  3.������ 4.���ư���\n");
			printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				kidsroom();
				break;
			case 2:
				parents();
				break;
			case 3:
				office();
				break;
			case 4:
				ip();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
		}
		system("pause");
	}
}
void kidsroom(){
	int menu;
	
	while(1){
		system("cls");
		printf("���Ⱑ ���̹��ΰ�?\n");
		printf("1.���� 2.�ٸ������� ���� \n");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				if(isFindkeyOne && isFindkeyTwo){
					isOpenkidsroom = TRUE; 
					printf("���� ����: ����� ������\n");
					printf("���� ����: ���� ����ٶ�� ���ž�?\n"); 
					printf("�ҳ�:������ �ߴ�\n");
					printf("�Ͼ�µ� �ƹ��͵� ����\n");
					printf("���̿���\n"); 
					system("pause");
					exit(0);
				}
				else{
					printf("���谡 2���� �ʿ��Ѵ�\n");
				}
				break;
			case 2:
				roomFtwo();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				break;
		}
	system("pause");
	}
}
void parents(){
	int menu;
	
	while(1){
		system("cls");
		printf("������ ��Ʈ�� ���� ������?\n");
		printf("1.�ݰ� 2. ���� 3.ħ�� 0.���ư���\n");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				safeyboxOne();
				break;
			case 2:
				drawerOne();
				break;
			case 3:
				bed();
				break;
			case 0:
				return;
				
			default:
				printf("\n# ERROR # �Է°� ����\n");
				break;
		}
	system("pause");
	}
}
void safeyboxOne(){
	int menu;
	
	while(1){
		system("cls");
		printf("�ݰ�� ����������?\n");
		printf("1.���� 2.�ƴϴ� ���ư��� \n");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				safeyboxOne_pass();
				break;
			case 2:
				roomFtwo();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				break;
		}
	system("pause");
	}
}
void safeyboxOne_pass(){
	int main;
	char pass[5]="1009", temp[5];
	
	system("cls");
	printf("\n\n [PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)){
		system("cls");
		printf("1.����: �����ӿ� �����ϰ� �ҳడ �ִ�\n");
		printf("2.�ϱ���: �����ϰ� ������ ������ �ҳุ ��Ƶ��ƿԴ�\n"); 
		system("pause");
	}else{
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}
void drawerOne(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1. ���� ���캻�� 2. ���ư���\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindkeyOne) {
					printf("�ʿ��Ѱ� ����.\n");
					
				} else {
					isFindkeyOne =TRUE; 
					printf("��� ���� �����ϱ� �ϴ� ì���� \n"); 
					
				}
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}
void bed(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.���캻�� 2.���ư���.");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("����ôµ� �ƹ��͵� ����\n");
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}	
void office(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.���� 2. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				drawerTwo();
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}
void drawerTwo(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.���� 2.���ư���.");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindkeyTwo){
					printf("�� �̻� �ʿ����\n");
				}else{
					isFindkeyTwo = TRUE;
					printf("�Ʊ� ã�� �����ϰ� ����ϴ�\n");
					printf("�ϱ���: 1975�� 10�� 9�� �ݿ��Ͽ� ���̰� �¾��.\n");
				}
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}	


