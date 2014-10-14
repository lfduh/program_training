#include <stdlib.h>
#include <stdio.h>


void course1();

int main()
{
	course1();


	system("pause");
	return 0;
}


void course1(int argc, char *argv[]) //arg count , arg value(字元指標指標字串)
//app hello.c -o -c project.p show "This is a string"
//argc = 7 ( > = 1)
//argv[0]是"app"
//argv[1]是"hello.c"
//argv[2]是"-o"
//argv[3]是"-c"
//argv[4]是"project.p"
//argv[5]是"show"
//argv[6]是"This is a string"
{	
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		puts(arg);
		
		switch (arg[0]) {
		case '-':
			{
			switch (arg[1]) 
			{	// 處理參數，設定執行選項，例如-o、-p、-r等等 
				case 'o':
					// 選項o的處理 
					break;
				case 'p':
					// 選項p的處理 
					break;
				case 'r':
					// 選項r的處理 
					break;
				default:
					// 選項錯誤處理或其它處理 
			}
		default:
			// 執行對應功能 
		}

		

	}
	

}