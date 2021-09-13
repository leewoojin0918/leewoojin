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
      printf("1.입장\n");
      printf("0.퇴장\n");
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
            printf("입력 오류\n\n");
            break;
      }   
   }
}
void op(){
   system("cls");
   printf("\n\n");
   printf("어서오세요~\n");
   Sleep(500);
   printf("VR공포게임에 오실걸 환영합니다.\n");
   Sleep(500);
   printf("La suerte esta a tu lado.\n");
   Sleep(100);
   system("pause"); 
}
void ip(){
   int menu;
   while(1){
      system("cls");
      printf("저택에 들어왔다.\n");
      printf("일단 문을 열어보고\n");
      printf("안열리면 돌아다녀보자!\n"); 
      printf("1.지하 2.1층 3.2층 4.출입문\n");
      
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
               printf("문이 잠겨있다.");
               system("pause"); 
            }
            break;
         default:
            printf("\n #ERROR # 입력값 오류\n");
            system("pause");
      }
   }
}
void roomBone(){
   int menu;
   while(1){
      system("cls");
      printf("지하에 들어왔다\n");
      printf("필요한거 찾아보자\n");
      printf("1.발전기 2.상자1 3.상자2 4.돌아간다.\n");
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
            printf("\n# ERROR # 입력값 오류\n");
            system("pause");
      }
      
   }
}
void generator(){
   int menu;
   while(1){
      printf("1.고친다. 2.돌아간다.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            if(isFindhandle){
               printf("\n 불을 켰다.\n ");
               printf("\n이제 전기가 작동될테니 다른 곳도 가보자!\n"); 
            }
            else{
               printf("손잡이가 없어서 고칠 수 없다.\n");
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
      printf("1.찾아본다. 2.찾아보지 않는다. 3.돌아간다.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            if(isFindhandle) {
            printf("\n더이상 살펴볼 필요 없다.\n");
            } else{
               isFindhandle=TRUE;
               printf("\n상자 1에서 손잡이를 발견했다.\n");
               printf("\n손잡이가 도대체 왜 필요한 거지?\n");
            }
            break;
         case 2:
            printf("\n탈출에 필요한 아이템이 있을 수 있다.\n");
            printf("\n정말 살펴보지 않을 것인가?\n"); 
            break; 
         case 3:
            return;
         default:
            printf("\n# ERROR # 입력값 오류\n\n");
            break;
      }
   }
}
void boxTwo(){
   int menu;
   while(1){
      printf("1.찾아본다. 2.찾아보지 않는다. 3.돌아간다.\n");
      printf(">>");
      scanf("%d",&menu);
      switch(menu){
         case 1:
            printf("\n쓸모없는 물건밖에 없다.\n");
            break;
         case 2:
            printf("\n탈출에 필요한 아이템이 있을 수 있다.\n");
            printf("\n정말 살펴보지 않을 것인가?\n"); 
            break; 
         case 3:
            return;
         default:
            printf("\n# ERROR # 입력값 오류\n\n");
            break;
      }
   }
}
void roomFone(){
   int menu;
   while(1){
      system("cls");
      printf("1층에서 어디에서 돌까\n");
      printf("1.책방 2.식당 3.돌아간다\n");
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
            printf("\n# ERROR # 입력값 오류\n");
      }
      system("pause");
   }
}
void bookroom(){
   int menu;
   while(1){
      system("cls");
      printf("책이 많이 있다\n");
      printf("1.살펴본다 2.나간다\n");
      printf(">> ");
      scanf("%d",&menu); 
      switch(menu){
         case 1:
            printf("쓸만한 정보가 없다\n");
            break;
         case 2:
            roomFone();
            break;
         default:
            printf("\n# ERROR # 입력값 오류\n");
      }
      system("pause");
   }
}
void kitchen(){
	int menu;
	while(1){
		system("cls");
		printf("뭐가 인기척이 있는거 같다\n");
		printf("1.식탁 아래를 확인한다. 2.돌아가자");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				printf("의문의 그림자가 지니간다");
				break;
			case 2:
				roomFone();
				break;
			default:
			printf("\n# ERROR # 입력값 오류\n");
		}
		system("pause");
	}
}
void roomFtwo(){
	int menu;
	while(1){
		system("cls");
		printf("2층은  어디부터 돌까\n");
		printf("1.아이방 2.부모님  3.집무실 4.돌아간다\n");
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
				printf("\n# ERROR # 입력값 오류\n");
		}
		system("pause");
	}
}
void kidsroom(){
	int menu;
	
	while(1){
		system("cls");
		printf("여기가 아이방인가?\n");
		printf("1.들어간다 2.다른곳부터 돌자 \n");
		printf(">>");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				if(isFindkeyOne && isFindkeyTwo){
					isOpenkidsroom = TRUE; 
					printf("죽은 아이: 당신은 누구죠\n");
					printf("죽은 아이: 나랑 놀라줄라고 오거야?\n"); 
					printf("소년:기절을 했다\n");
					printf("일어나는데 아무것도 없다\n");
					printf("숲이였다\n"); 
					system("pause");
					exit(0);
				}
				else{
					printf("열쇠가 2개가 필요한다\n");
				}
				break;
			case 2:
				roomFtwo();
				break;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				break;
		}
	system("pause");
	}
}
void parents(){
	int menu;
	
	while(1){
		system("cls");
		printf("저택의 힌트가 있지 않을까?\n");
		printf("1.금고 2. 서랍 3.침대 0.돌아간다\n");
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
				printf("\n# ERROR # 입력값 오류\n");
				break;
		}
	system("pause");
	}
}
void safeyboxOne(){
	int menu;
	
	while(1){
		system("cls");
		printf("금고는 열수있을까?\n");
		printf("1.연다 2.아니다 돌아가자 \n");
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
				printf("\n# ERROR # 입력값 오류\n");
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
		printf("1.사진: 사진속에 가족하고 소녀가 있다\n");
		printf("2.일기장: 가족하고 여행을 갔으나 소녀만 살아돌아왔다\n"); 
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
		printf("1. 서랍 살펴본다 2. 돌아간다\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindkeyOne) {
					printf("필요한게 없다.\n");
					
				} else {
					isFindkeyOne =TRUE; 
					printf("어디에 쓰는 열쇠일까 일단 챙기자 \n"); 
					
				}
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}
void bed(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.살펴본다 2.돌아간다.");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("살펴봤는데 아무것도 없다\n");
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	
void office(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.서랍 2. 돌아간다\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				drawerTwo();
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}
void drawerTwo(){
	int menu;	
	
	while(1) {
		system("cls");
		printf("1.연다 2.돌아간다.");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindkeyTwo){
					printf("더 이상 필요없다\n");
				}else{
					isFindkeyTwo = TRUE;
					printf("아까 찾은 열쇠하고 비슷하다\n");
					printf("일기장: 1975년 10월 9일 금요일에 아이가 태어났다.\n");
				}
				break;
			case 2:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	


