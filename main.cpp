#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <locale.h>

int main(int argc,char *argv[],char* envp[])
{
	setlocale(LC_ALL,"");

	//カレントディレクトリ取得
	WCHAR szCurDir[_MAX_PATH]=L"";
	::GetCurrentDirectoryW(_countof(szCurDir),szCurDir);
	wprintf(L"CurrentDirectory=%ls\n",szCurDir);

	//引数表示
	printf("argc=%d\n",argc);
	for(int i=0;i<argc;i++){
		printf("argv[%d]=%s\n",i,argv[i]);
	}


	printf("\n -- press enter to exit --\n");
	char buf[10];
	fgets(buf,_countof(buf),stdin);
	return 0;
}
