//#include <cstdio>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int main() 
//{
//    int testcase, N, M, num, count = 0;
//
//    scanf("%d", &testcase);
//
//    while (testcase--) 
//    {
//        queue< pair<int, int> > q;
//        priority_queue<int> pq;
//
//        scanf("%d %d", &N, &M);
//        count = 1;
//
//        for (int i = 0; i < N; i++)
//        {
//            scanf("%d", &num);
//            pq.push(num);
//            q.push({ num, i });
//        }
//
//        while (!pq.empty()) 
//        {
//            pair<int, int> n1 = q.front();
//            int n2 = pq.top();
//
//            if (n1.first == n2) 
//            {
//                if (n1.second == M) 
//                {
//                    printf("%d\n", count);
//                    break;
//                }
//
//                pq.pop();
//                count++;
//            }
//            else
//            {
//                q.push(n1);
//            }
//
//            q.pop();
//        }
//    }
//
//    return 0;
//}