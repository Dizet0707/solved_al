// 1. A미터 올라가고, B미터 내려옴. V미터 올라가야함.
// 2. 시간제한 있음. 0.25초. v-a+b 전부 하고 있을 시간 없음. (뭐 예전같으면 sum += a; if(a>=v)면 return 이런식으로 할 거 같지만 지금은 굳이?)
// 3. a-b 미리 구해놓고 계산. if a >= 2*b면 일에서 -=1해서 출력.(왜냐면 a >= 2b면 a가 b보다 2배 이상 크기 때문에. 뭐 가령 a-b a-b a-b a-b a-b로 5일 걸렸다고 해도 a-b a-b a-b a 에서 다 올라갔을 거라서...)
// 4. 을 해보니까 4 1 3 같은 상황이면 하루만에 다 되는데 1 -= 1 해서 무지성 0일. 8 1 16이면 3일 걸릴 일을 8 > 1*2라는 이유로 3-=1해서 2일로 되어버려서...
// 5. haru로 하는 건 내 생각에 맞는 거 같긴 한데, 대신 if (v>0)으로 while을 돌리는 게 아니라 v <= a로 해야할 거 같음. 음수 내지는 0이 되기 전?
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int a, b, v; // , haru, count = 0; // haru는 a-b. count는 며칠인지.
	cin >> a >> b >> v;
	// haru = a - b;

	// while (v > a)
	// {
	// 	v -= haru;
	// 	count++; // count는 v<=a에서 걸리니까 a만 더하면 바로 다 올라가질 상황 전에 멈추는 거니까 cout는 +1해서 해야함.
	// }
	// 흐음 *2, *2 pow(haru, 2) 전부 해도 오래걸리네;
	// cout << count + 1 << endl;

	// ㅅㅂ 이거 그냥 구할 수 있는 함수가 있는데??
	int days = ceil((double)(v - b) / (a - b)); // 올림하여 정수로 표현해주는 ceil함수. cmath 헤더에 있다.
												// 즉, 나머지 남은 건 어차피 하루 더 가야하는 거라서 올림을 해주는 거.
												// 나같으면 함수 안쓰고 그냥 +=1해서 출력할 거 같긴 한데

	cout << days << endl;

	return 0;
}