#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
//公众号：一航代码
bool vis[100000]; //下标为数字，值为true则数字是素数，值为false则数字为合数
int prime[100000]; //存储前n个素数，注意不是不超过n的素数，是前n个素数。

//素数打表部分
void init_prime(int n)
{
    fill(vis, vis + 100000, true);
    vis[0] = vis[1] = false; //0和1不是素数
    int num = 0;
    for (int i = 2; i <= n; i++) {
        if (vis[i] == true) {
            num++;
            prime[num] = i;
        } //判断条件意义：j<=num是保证prime[]数据存在，prime[]*i是保证数字在n的范围内
        for (int j = 1; (j <= num) && (i * prime[j] <= n); j++) {
            vis[i * prime[j]] = false; //prime[]的倍数的数字肯定不是素数，将他们全部标记
            if (i % prime[j] == 0) {
                break;
            } //这一步缩短了很多时间，比如i=9时，prime数组中有2，3，5，7，9*5=45，
            //当i=15时，15*3再次进行了计算，
            //有这步操作，可以减少很多这样类似的繁琐操作，极大的减少了时间
        }
    }
}

int main()
{
    init_prime(100000);
    // for (int m = 1; m < 100; m++) {          //可以打印出100以内所有的超素数
    //     int n = prime[m];
    int n;
    cin >> n;
    if (!vis[n]) { //如果n不是素数，则直接输出no，结束程序
        cout << "no" << endl;
        return 0;
    }
    int i = 1, j = 1, sum = 0, count = 0; //i和j相当于两个指针，最开始都指向第一个素数，然后先移动j，对i和j之间的素数进行求和。
    bool flag = false; //flag为true则结束循环，找到了超素数，flag为false，则没有找到
    while (i <= j && !flag) {
        sum += prime[j]; //将i~j之间的素数求和
        count++; //连续素数的个数
        if (sum == n && count > 1) { //找到连续素数的和等于n，且连续素数的个数大于1
            flag = true;
            break;
        } else if (sum < n) { //如果连续素数之和小于n，则j指针向后移动，继续进行求和
            j++;
            continue;
        }
        while (sum > n && !flag && count > 1) { //如果连续素数之和大于n，则减去i指针指向的素数，j指针向后移动
            sum -= prime[i];
            count--;
            if (sum == n && count > 1) { //如果连续素数之和等于n，将i指针向后移动一个单位，并返回
                i++;
                flag = true;
                break;
            } else if (sum < n && count > 1) { //如果连续素数之和小于n，将i,j都向后移动，继续求和。
                j++;
                i++;
                break;
            }
            i++; //i指针向后移动
        }
    }
    if (flag) { //寻找到超素数
        // cout << sum << ":"<< "yes" << endl;
        cout << "yes" << endl;
        // int res = 0;
        for (int k = i; k <= j; k++) {
            // res+=prime[k];                   //可以对i，j指针之间的素数求和来验证是否和n相等
            cout << prime[k] << " ";
        }
        cout << endl;
        // cout<<res<<endl;
    } else {
        cout << "no" << endl;
    }
    // }
    system("pause");
    return 0;
}
