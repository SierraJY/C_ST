#include <stdio.h>
#include <stdlib.h>

//연결리스트
 typedef struct node
 {
     int number;
     struct node *next; // *next는 또 다른 노드 구조체를 가르키는 것(포인터). 하지만 이 라인에서는 node가 사실상 정의 되어있지 않기 떄문에 struct node라고 써준다.
     
 }
 node; // 컴퓨터 공학에선 직사각형으로 나타낼수있는 메모리 덩어리를 뜻함.
 //이런식으로 연결리스트를 사용한다면 배열보다 좋은점 : 메모리상에 연결된 공간이 없더라도 빈공간을 찾아 유동적으로 데이터를 저장할 수 있음.

 int main(void)
 {
    // list라는 이름의 node 포인터를 정의합니다. 연결 리스트의 가장 첫 번째 node를 가리킬 것입니다.    
     node *list = NULL;
    
    // 새로운 node를 위해 메모리를 할당하고 포인터 *n으로 가리킵니다.
     node *n = malloc(sizeof(node));
     if(n == NULL)
     {
         return 1;
     }
     
     // n의 number 필드에 1의 값을 저장합니다. “n->number”는 “(*n).numer”와 동일한 의미입니다. 
     n->number = 1;
     n->next = NULL;
    

     // 이제 첫번째 node를 정의했기 떄문에 list 포인터를 n 포인터로 바꿔 줍니다.
     list = n; //여기서 n이라는 것은 free해줄 필요없이 없어진다고 보면됨. free는 포인터가 아니라 할당된 메모리영역을 없애는 것이기 때문에.

    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    n -> number = 2;
    n -> next = NULL;

    list -> next = n;

    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    n->number = 3;
    n->next =NULL;

    // 현재 list는 첫번째 node를 가리키고, 이는 두번째 node와 연결되어 있습니다. 
    // 따라서 세 번째 node를 더 연결하기 위해 첫 번째 node (list)의 
    // 다음 node(list->next)의 다음 node(list->next->next)를 n 포인터로 지정합니다.
    list->next->next =n;

    // 이제 list에 연결된 node를 처음부터 방문하면서 각 number 값을 출력합니다. 
    // 마지막 node의 next에는 NULL이 저장되어 있을 것이기 때문에 이 것이 for 루프의 종료 조건이 됩니다.
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n",tmp->number);
    }

    // 메모리를 해제해주기 위해 list에 연결된 node들을 처음부터 방문하면서 free 해줍니다.
    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
 }