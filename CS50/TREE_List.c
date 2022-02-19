// //이진탐색 노드 트리
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int number;
//     struct node *left;
//     struct node *right;
// }
// node;

// // 이진 검색 함수 (*tree는 이진 검색 트리를 가리키는 포인터)
// bool search(node *tree)
// {
//     // 트리가 비어있는 경우 ‘false’를 반환하고 함수 종료
//     if (tree == NULL)
//     {
//         return false;
//     }
//     // 현재 노드의 값이 50보다 크면 왼쪽 노드 검색
//     else if (50 < tree->number)
//     {
//         return search(tree->left);
//     }
//     // 현재 노드의 값이 50보다 작으면 오른쪽 노드 검색
//     else if (50 > tree->number)
//     {
//         return search(tree->right);
//     }
//     // 위 모든 조건이 만족하지 않으면 노드의 값이 50이므로 ‘true’ 반환
//     else {
//         return true;
//     }
// }

// 장점 : 검색하는데 필요한 시간이 줄어든다.
// 단점 : 리스트를 만드는데 메모리가 더 많이 필요하다.