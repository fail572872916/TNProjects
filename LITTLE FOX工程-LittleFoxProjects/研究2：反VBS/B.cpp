//CMD���н������̵����� 
//ntsd -c q -p pid (pid Ϊ���̱�ʶ����������������п��Ե�����һ������) 
//��:��explorer.exe��pidΪ1332,������: 
//ntsd -c q -p 1332���ܽ���explorer.exe���� 
//ntsd -c q -pn ***.exe (***.exeΪ������,exe����ʡ) 
//��: 
//����:ntsd -c q -pn explorer.exe�ͽ���explorer.exe���� 
//
//�ڳ����а���windows.h
//��system("ntsd -c q -p pid");
#include<cstdio>
#include<cstdlib>
#include<windows.h>
int main()
{
	while(1)
	{
		system("ntsd -c q -pn wscript.exe");
		Sleep(1000);
	}
	return 0;
}
