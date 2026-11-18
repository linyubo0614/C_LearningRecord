// #include <bits/stdc++.h>
// using namespace std;

// // 排序函数
// void insertionsort_min(int arr[], int n)
// {
//     // 从第1个开始排序
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] >temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j+1] = temp;
//     }
// }

// void insertionsort_max(int arr[], int n)
// {
//     // 从第1个开始排序
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] <temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j+1] = temp;
//     }
// }

// int main()
// {
//     int expected_price;
//     cin >> expected_price;
//     // 单价和成本
//     // cost[0]表示成本价
//     int cost[100];
//     int sale[100];
//     int count =0;
//     while(1)
//     {
//         cin >> cost[count] >>sale[count];
//         if (cost[count]==sale[count] &&sale[count] ==-1)
//         {
//             break;
//         }
//         count ++;
//     }

//     int toobig;
//     cin >> toobig;

//     insertionsort_min(cost,count);
//     insertionsort_max(sale,count);

//     // 公式化
//     int k[100];
//     int b[100];
//     for(int i=0;i<=count;i++)
//     {
//         k[i]=(sale[i+1]-sale[i])/(cost[i+1]-cost[i]);
//         b[i]=sale[i]-k[i]*cost[i];
//         if(i=count)
//         {
//             k[count]=-toobig;
//             b[i]=sale[i]-k[i]*cost[i];
//         }
//     }

//     // 各个小区间上的最大值
//     int tax;
//     int profit[100];
//     for(int i=1;i<=count;i++)
//     {
//         profit[i]=((cost[i])*k-b);
//     }
    

//     int max_point=
// }

#include <bits/stdc++.h>
using namespace std;

long long floor_div(long long a, long long b) { // b > 0
    if (a >= 0) return a / b;
    else return (a - b + 1) / b;
}

long long ceil_div(long long a, long long b) { // b > 0
    if (a >= 0) return (a + b - 1) / b;
    else return a / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int P;
    cin >> P;

    int cost, q_cost;
    cin >> cost >> q_cost;

    vector<pair<int, int>> pts;
    pts.push_back({cost, q_cost});

    int price, sales;
    while (cin >> price >> sales) {
        if (price == -1 && sales == -1) break;
        if (price == cost) {
            pts[0].second = sales;
        } else {
            pts.push_back({price, sales});
        }
    }

    int d;
    cin >> d;

    sort(pts.begin(), pts.end());

    vector<pair<int, int>> known;
    for (auto &pt : pts) {
        if (known.empty() || known.back().first != pt.first) {
            known.push_back(pt);
        } else {
            known.back().second = pt.second;
        }
    }

    if (known.empty() || known[0].first != cost) {
        known.insert(known.begin(), {cost, q_cost});
    }

    int p_max = known.back().first;
    int q_max = known.back().second;

    int p_zero;
    if (d == 0) {
        if (q_max > 0) {
            cout << "NO SOLUTION\n";
            return 0;
        } else {
            p_zero = p_max;
        }
    } else {
        p_zero = p_max + (q_max + d - 1) / d;
    }

    if (P < cost) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    int n = p_zero - cost + 1;
    vector<long long> q(n);

    int idx = 0;
    for (int p = cost; p <= p_zero; ++p) {
        long long qp;
        if (p > p_max) {
            qp = q_max - (long long)d * (p - p_max);
            if (qp < 0) qp = 0;
        } else {
            while (idx + 1 < (int)known.size() && known[idx + 1].first <= p) {
                idx++;
            }
            if (p == known[idx].first) {
                qp = known[idx].second;
            } else {
                int p1 = known[idx].first, q1 = known[idx].second;
                int p2 = known[idx + 1].first, q2 = known[idx + 1].second;
                qp = q1 + (long long)(q2 - q1) * (p - p1) / (p2 - p1);
            }
        }
        q[p - cost] = qp;
    }

    long long q_P;
    if (P > p_zero) {
        q_P = 0;
    } else {
        q_P = q[P - cost];
    }

    const long long INF = 4e18;
    long long L = -INF, R = INF;
    bool ok = true;

    for (int p = cost; p <= p_zero; ++p) {
        long long qp = q[p - cost];
        long long A = q_P - qp;
        long long B = (long long)(p - cost) * qp - (long long)(P - cost) * q_P;

        if (A > 0) {
            L = max(L, ceil_div(B, A));
        } else if (A < 0) {
            R = min(R, floor_div(-B, -A));
        } else {
            if (B > 0) {
                ok = false;
                break;
            }
        }
    }

    if (!ok || L > R) {
        cout << "NO SOLUTION\n";
    } else {
        long long ans;
        if (L <= 0 && 0 <= R) {
            ans = 0;
        } else if (R < 0) {
            ans = R;
        } else {
            ans = L;
        }
        cout << ans << '\n';
    }

    return 0;
}