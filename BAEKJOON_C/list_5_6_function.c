// int funtion (int arr[]);  []은 배열임을 알려주는 힌트 같은 것이며 arr는 받아오는 배열의 시작주소를 저장하는 변수가 된다.
// int funtion (int *ptr);
// 은 사실상 서로 같다.

// 배열명은 사실상 배열의 시작 주소이기 떄문.


// arr이 배열의 이름이거나 포인터이고 n이 정수일 때,
// arr[n] == *(arr + n)
// 위의 공식은 1차원 배열뿐만 아니라 다차원 배열에서도 언제나 성립합니다.