#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    int ** data;

    int N, M;
    cin >> N >> M;

    data = new int * [N];
    for (size_t cur = 0; cur < N; cur++)
        data[cur] = new int[M];


    for (size_t curRow = 0; curRow < N; curRow++)
        for (size_t curCol = 0; curCol < M; curCol++)
            cin >> data[curRow][curCol];


    int R, C;
    cin >> R >> C;

    for (size_t curRow = 0; curRow < R; curRow++) {
        for (size_t curCol = 0; curCol < C; curCol++)
            cout << data[curRow][curCol] << ' ';
        cout << endl;
    }


    for (size_t cur = 0; cur < N; cur++)
        delete [] data[cur];
    delete [] data;
    
    return 0;
}
