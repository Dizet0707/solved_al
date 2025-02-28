// 1. 일단 어차피 최소만 구하면 되니까 좌상단이 w든 b든 어차피 최소 구하고, 만약 0이면 그냥 남은 하나 쓰면 되는 거니까.
// 2. 그러면 예제 4처럼 전부 b라도 하나는 w일 거임. 그런 거를 기준으로 전부 색칠을 하고
// 3. 색칠된 거는 idx를 새로 1로 작성하는 거임. 그리고 브포로 어느 때가 최소인지 확인 ㅇㅇ.
// 4. 물론 둘 다 0이면 0이 답.

// 5. 근데 가만히 생각해보면, 위처럼 하려면 어떤 타일을 바꿀지에 대한 기준이 필요함.
// 6. 솔직히 우리 눈에는 예쁘게 이거만 바꾸면 될듯 싶지만, 컴퓨터는 아니니까. 그러면...
// 7. 왼쪽 오른쪽 비교해서, 같다고 하면 무조건 왼쪽을 바꾸는 식으로 해버릴까?
// 8. 오른쪽을 바꾸는 것도 전부 진행하는 편이 좋나?
// 9. 어차피 8*8로 해야하는데, 이러면 tmp가 너무 많이 필요한데... stack을 사용하겠음.

// 10. 근데 어차피 생각해보니까 윗 줄을 왼쪽으로 바꾸면 아랫줄은 오른쪽으로 바꿔야...
// 11. 이거 처리하는 함수도 따로 만들어야할듯.

// 12. 너무 추상적으로 진행중임. 그냥 좌상단이 W인 경우로 전부 바꿔보고, 좌상단이 B인 경우로 전부 바꿔서
// 13. tmp 배열 2개를 새로 만들고, 이후에 거기서 최소값을 찾아야할듯(좌상단이 b든 w든 신경 안써도 되니까 ㅇㅇ)
// 14. 이렇게 하면 가령 좌상단이 W면 x+y가 짝수이면 w, 좌상단이 B면 짝수일 때 B를 넣는 식으로 빠르게 가능.

// 15. 으로 코딩을 했다가, 가만히 생각해보니 00index 좌상단이 W일 때, 임의의 좌상단이 B인 체스판을 색칠 안해도 되는 경우를 생각 못했다.
// 16. 하;

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;

    int min_W = 65;
    int min_B = 65;
    int mini = 10000;

    // 배열의 선언
    char chess_mat[50][51];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cin >> chess_mat[i][j];
    }

    // 가능한 모든 8×8 구역을 순회
    for (int base_x = 0; base_x <= x - 8; base_x++)
    {
        for (int base_y = 0; base_y <= y - 8; base_y++)
        {
            int tmp_w = 0;
            int tmp_b = 0;

            // 8×8 내부 순회
            for (int i = base_x; i < base_x + 8; i++)
            {
                for (int j = base_y; j < base_y + 8; j++)
                {
                    // (x + y) 짝수 칸은 'W'이어야 하는 경우(좌상단 W 패턴)
                    // (x + y) 홀수 칸은 'B'이어야 함
                    if ((i + j) % 2 == 0)
                    {
                        // W인 경우
                        if (chess_mat[i][j] != 'W')
                            tmp_w++;
                        // B인 경우
                        if (chess_mat[i][j] != 'B')
                            tmp_b++;
                    }
                    else // 홀수
                    {
                        // W인 경우
                        if (chess_mat[i][j] == 'W')
                            tmp_w++;
                        // B인 경우
                        if (chess_mat[i][j] == 'B')
                            tmp_b++;
                    }
                }
            }

            // if (tmp_b < min_B)
            //     min_B = tmp_b;
            // if (tmp_w < min_W)
            //     min_W = tmp_w;

            // 하... 지랄마쇼진짜 ㅋㅋㅋㅋㅋㅋㅋㅋ
            // 이게 전부다 백준 때문이다

            int tmp = tmp_b < tmp_w ? tmp_b : tmp_w;
            if (tmp < mini)
                mini = tmp;
        }
    }

    // if (min_B == 0 && min_W == 0)
    //     cout << 0 << '\n';
    // else if (min_B == 0)
    //     cout << min_W << '\n';
    // else if (min_W == 0)
    //     cout << min_B << '\n';
    // else
    //     cout << min(min_B, min_W) << '\n';

    cout << mini << endl;

    // cout << min(min_B, min_W) << endl;

    return 0;
}

// int main(void)
// {
//     int x, y;
//     cin >> x >> y;

//     int min_W = 65;
//     int min_B = 65;

//     // 배열의 선언
//     vector<vector<char>> chess_mat(x, vector<char>(y));
//     vector<vector<int8_t>> change_mat_W(x, vector<int8_t>(y, 0));
//     vector<vector<int8_t>> change_mat_B(x, vector<int8_t>(y, 0));
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//             cin >> chess_mat[i][j];
//     }

//     // // 배열을 수정하는 경우 flag를 켬. (W먼저)
//     // for (int i = 0; i < x; i++)
//     // {
//     //     for (int j = 0; j < y; j++)
//     //     {
//     //         if (((i + j) % 2 == 0) && chess_mat[i][j] == 'B')
//     //             change_mat_W[i][j] = 1;
//     //         if ((i + j) % 2 == 1 && chess_mat[i][j] == 'W')
//     //             change_mat_W[i][j] = 1;
//     //     }
//     // }
//     // // 배열을 수정하는 경우 flag를 키는데 B차례.
//     // for (int i = 0; i < x; i++)
//     // {
//     //     for (int j = 0; j < y; j++)
//     //     {
//     //         if (((i + j) % 2 == 0) && chess_mat[i][j] == 'W')
//     //             change_mat_B[i][j] = 1;
//     //         if ((i + j) % 2 == 1 && chess_mat[i][j] == 'B')
//     //             change_mat_B[i][j] = 1;
//     //     }
//     // }

//     // 합체해서 다시 작성
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             // 좌상단 W
//             if (((i + j) % 2 == 0 && chess_mat[i][j] != 'W') ||
//                 ((i + j) % 2 == 1 && chess_mat[i][j] != 'B'))
//             {
//                 change_mat_W[i][j] = 1;
//             }
//             // 좌상단 B
//             if (((i + j) % 2 == 0 && chess_mat[i][j] != 'B') ||
//                 ((i + j) % 2 == 1 && chess_mat[i][j] != 'W'))
//             {
//                 change_mat_B[i][j] = 1;
//             }
//         }
//     }

//     // base주소를 하나 만들어서 for문에서 활용할듯.
//     // 일단 8을 기준으로 잡아서 최소로 바꾼 게 몇 번인지 확인하는 거
//     // W먼저.
//     // for (int base_x = 0; base_x <= x - 8; base_x++)
//     // {
//     //     for (int base_y = 0; base_y <= y - 8; base_y++)
//     //     {
//     //         int tmp = 0;
//     //         for (int i = 0; i < 8; i++)
//     //         {
//     //             for (int j = 0; j < 8; j++)
//     //             {
//     //                 tmp += change_mat_W[i + base_x][j + base_y];
//     //             }
//     //         }
//     //         if (tmp < min_W)
//     //             min_W = tmp;
//     //     }
//     // }

//     // // 이번엔 B.
//     // for (int base_x = 0; base_x <= x - 8; base_x++)
//     // {
//     //     for (int base_y = 0; base_y <= y - 8; base_y++)
//     //     {
//     //         int tmp = 0;
//     //         for (int i = 0; i < 8; i++)
//     //         {
//     //             for (int j = 0; j < 8; j++)
//     //             {
//     //                 tmp += change_mat_B[i + base_x][j + base_y];
//     //             }
//     //         }
//     //         if (tmp < min_B)
//     //             min_B = tmp;
//     //     }
//     // }
//     // 합체
//     for (int base_x = 0; base_x <= x - 8; base_x++)
//     {
//         for (int base_y = 0; base_y <= y - 8; base_y++)
//         {
//             int tmp_W = 0;
//             int tmp_B = 0;
//             for (int i = 0; i < 8; i++)
//             {
//                 for (int j = 0; j < 8; j++)
//                 {
//                     tmp_W += change_mat_W[base_x + i][base_y + j];
//                     tmp_B += change_mat_B[base_x + i][base_y + j];
//                 }
//             }
//             min_W = min(min_W, tmp_W);
//             min_B = min(min_B, tmp_B);
//         }
//     }

//     if (min_B == 0 && min_W == 0)
//         cout << 0 << '\n';
//     else if (min_B == 0)
//         cout << min_W << '\n';
//     else if (min_W == 0)
//         cout << min_B << '\n';
//     else
//         cout << min(min_B, min_W) << '\n';
//     // else if (min_B != 0 && min_B < min_W)
//     //     cout << min_B << '\n';
//     // else if (min_W != 0 && min_W < min_B)
//     //     cout << min_W << '\n';
//     // 원래는 elseif 2개랑 else는 안쓰고 주석한 else if만 2개 했는데
//     // 저렇게 하니까 b5, w0처럼 5!=0 & 5<0 < 다이. 0!=0 & 0<5 다이. 같은 상황이 나와서;
//     return 0;
// }