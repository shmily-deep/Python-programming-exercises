#include<iostream>
using namespace std;
void BinaryRecursion(int n)//���������
{
    int a;
    a = n % 2;
    n = n >> 1;
    if (n == 0)
        ;
    else
        BinaryRecursion(n);
    cout << a;
}
int main() {
    int n;
    cin >> n;
    cout << n << "��������ʽΪ��";
    BinaryRecursion(n);
    cout << "\n";
    int k;
    cin >> k;
    n = (n ^ (1<<(k-1)));
    cout << "n = " << n<<",��������ʽΪ��";
    
    BinaryRecursion(n);
    return 0;
}



