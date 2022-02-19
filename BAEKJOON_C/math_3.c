//달팽이. 시간제한.
//백준 2869

#include <stdio.h>

int main(void)
{
    int up;
    scanf("%i", &up);  //down < up <= tree

    int down;
    scanf("%i", &down);

    int tree;
    scanf("%i", &tree);
    
    
    int howlong = (tree - down - 1) / (up - down) + 1;
    // 달팽이는 하루에 up-down만큼 올라감. 항상 일정히 올라가고 일정히 내려오고.
    // 마지막날에 미끄러져 내려올 일이 없음으로 tree - down만큼만 올라가는 면 됨.  
    // 그렇기 때문에 (tree - down) / (up - down)이 딱 나누어 떨어지면 끝. 나누어 떨어졌다는 것은 마지막 날 아침에 도달했다는 말. 나누어 떨어지지 않은 것은 도달하지 못햇다느 말.
    // tree - down으로 하는 이유 : tree로 해버리면 아침에 이미 도달했는데 밤에 달팽이가 내려간 간것을 생각하지 않은 것이 됨.
    // (up - down) + (up -down) ''' + up = tree  -> (up-down) * i = (tree -down)
    //하지만 이것은 말은 안되니 tree - down으로 한다.

    //나누기는 항상 나머지가 최소가 나오도록 끝까지 나누는 것.
    //down < up <= tree
    //tree - down + up 이 항상 무조건 tree - down보다 크다.

    //(tree - down) / (up - down) 가 나누어 떨어지는 경우에는 마지막에 1을 더하면 안됨. 딱 그 값이 총 걸리는 일수임.
    //(tree - down) / (up - down) 가 나누어 떨어지지 않는 경우에는 마지막에 1을 더하면 걸리는 총일수가 나옴. 하루 더 가야하니까.

    // !!!!!!!하지만 int형이기 때문에 나누어 떨어지는 구분하기 번거로우니 나누어 지는 수를 (tree - down - 1)로 둔다. 항상 나눠 떨어지지 않도록.
    // 나누어 떨어지던 분수의 분자에 -1을 하면 나누어 떨어지지 않게 되고
    // 나누어 떨어지지 않던 분수의 분자에 -1를 해도 여전히 나누어 떨어 지지 않게 된다.


    printf("%i", howlong);

}