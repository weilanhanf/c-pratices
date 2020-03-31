#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
//���ںţ�һ������
bool vis[100000]; //�±�Ϊ���֣�ֵΪtrue��������������ֵΪfalse������Ϊ����
int prime[100000]; //�洢ǰn��������ע�ⲻ�ǲ�����n����������ǰn��������

//���������
void init_prime(int n)
{
    fill(vis, vis + 100000, true);
    vis[0] = vis[1] = false; //0��1��������
    int num = 0;
    for (int i = 2; i <= n; i++) {
        if (vis[i] == true) {
            num++;
            prime[num] = i;
        } //�ж��������壺j<=num�Ǳ�֤prime[]���ݴ��ڣ�prime[]*i�Ǳ�֤������n�ķ�Χ��
        for (int j = 1; (j <= num) && (i * prime[j] <= n); j++) {
            vis[i * prime[j]] = false; //prime[]�ı��������ֿ϶�����������������ȫ�����
            if (i % prime[j] == 0) {
                break;
            } //��һ�������˺ܶ�ʱ�䣬����i=9ʱ��prime��������2��3��5��7��9*5=45��
            //��i=15ʱ��15*3�ٴν����˼��㣬
            //���ⲽ���������Լ��ٺܶ��������Ƶķ�������������ļ�����ʱ��
        }
    }
}

int main()
{
    init_prime(100000);
    // for (int m = 1; m < 100; m++) {          //���Դ�ӡ��100�������еĳ�����
    //     int n = prime[m];
    int n;
    cin >> n;
    if (!vis[n]) { //���n������������ֱ�����no����������
        cout << "no" << endl;
        return 0;
    }
    int i = 1, j = 1, sum = 0, count = 0; //i��j�൱������ָ�룬�ʼ��ָ���һ��������Ȼ�����ƶ�j����i��j֮�������������͡�
    bool flag = false; //flagΪtrue�����ѭ�����ҵ��˳�������flagΪfalse����û���ҵ�
    while (i <= j && !flag) {
        sum += prime[j]; //��i~j֮����������
        count++; //���������ĸ���
        if (sum == n && count > 1) { //�ҵ����������ĺ͵���n�������������ĸ�������1
            flag = true;
            break;
        } else if (sum < n) { //�����������֮��С��n����jָ������ƶ��������������
            j++;
            continue;
        }
        while (sum > n && !flag && count > 1) { //�����������֮�ʹ���n�����ȥiָ��ָ���������jָ������ƶ�
            sum -= prime[i];
            count--;
            if (sum == n && count > 1) { //�����������֮�͵���n����iָ������ƶ�һ����λ��������
                i++;
                flag = true;
                break;
            } else if (sum < n && count > 1) { //�����������֮��С��n����i,j������ƶ���������͡�
                j++;
                i++;
                break;
            }
            i++; //iָ������ƶ�
        }
    }
    if (flag) { //Ѱ�ҵ�������
        // cout << sum << ":"<< "yes" << endl;
        cout << "yes" << endl;
        // int res = 0;
        for (int k = i; k <= j; k++) {
            // res+=prime[k];                   //���Զ�i��jָ��֮��������������֤�Ƿ��n���
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
