
#include <algorithm>
#include <iostream>
using namespace std;


int n,a[110],s[110];


void mergesort(int (&a)[110],int s[],int n){   //ע�����������д��
    int step=1,flag=1;
    while(flag){                               //flag��ʾ������м䲽���Ƿ����м�������ͬ
        flag=0;
        for(int i=0;i<n;i++){
            if(a[i]!=s[i])
                flag=1;
        }
        step*=2;                              //���ϵĹ鲢����ֱ�����м�������ͬ��������һ�β��˳�
        for(int i=0;i<n;i+=step)
            sort(a+i,a+min(i+step,n));        //�����������һ��ֻ��һ�δ�������Ϊ�жϹ鲢������ �����С�Ƚϸ���
    }
}
int main(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>s[i];
    for (i = 0; i < n - 1 && s[i] <= s[i + 1]; i++);  //�ҳ��м���������򲿷�
    for (j = i + 1; a[j] == s[j] && j < n; j++);      //�ж���������
    if(j==n){
        cout<<"Insertion Sort"<<'\n'; 
        sort(a,a+i+2);                      //ֱ����sort���������������ע���±꣩       
    }
    else{
        cout<<"Merge Sort"<<'\n';
        mergesort(a,s,n);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1) cout<<" ";
    }
    return 0;
}
