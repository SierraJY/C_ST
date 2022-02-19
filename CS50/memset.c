//memset 함수
//헤더 - memory.h    or     string.h
//메모리의 내용(값)을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수.

//첫 번째 인자. 세팅하고자 하는 메모리의 시작 주소.
//두 번째 인자. 세팅하고자 하는 값.
//세 번째 인자. 길이. 바이트 단위로써 메모리의 크기 한조각 단위의 길이. sizeof의 형태로 넣으면 됨.

//반환값 - 성공하면 첫번째 인자로 들어간 ptr, 실패하면 NULL.


//ex
// char arr[] = "blocckmask"
// memset(arr, 'c', 5 * sizeof(char))
// printf(arr);

// for문으로 배열을 초기화 할 수 있지만, memset으로도 초기화 할 수 있음