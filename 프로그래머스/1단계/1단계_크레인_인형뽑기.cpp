//#include <string>
//#include <vector>
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves)
//{
//    vector<int> st;
//    int answer = 0;
//    int pushNum;
//
//    for (int i = 0; i < moves.size(); i++)
//    {
//        int move = moves[i];
//
//        for (int j = 0; j < board.size(); j++)
//        {
//            if (board[j][move - 1] != 0)
//            {
//                st.push_back(board[j][move - 1]);
//
//                while (1)
//                {
//                    if (st.size() > 1)
//                    {
//                        if (st[st.size() - 1] == st[st.size() - 2])
//                        {
//                            st.pop_back();
//                            st.pop_back();
//                            answer += 2;
//                        }
//                        else
//                        {
//                            break;
//                        }
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//
//                board[j][move - 1] = 0;
//                break;
//            }
//        }  
//    }
//
//    return answer;
//}
//
//int main(void)
//{
//    int N;
//
//    cin >> N;
//
//    vector<vector<int>> board(N, vector<int>(N));
//    vector<int> moves;
//
//    for (int i = 0; i < board.size(); i++)
//    {
//        for (int j = 0; j < board.size(); j++)
//        {
//            cin >> board[i][j];
//        }
//    }
//
//    cin >> N;
//    int inputNum;
//
//    for(int i = 0; i < N; i++)
//    {
//        cin >> inputNum;
//        moves.push_back(inputNum);
//    }
//
//    cout << solution(board, moves);
//
//    return 0;
//}