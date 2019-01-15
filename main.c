#include <stdio.h>

//定义全局变量
char arr[1024];//保存敏感字符
int index = 0;//敏感字符在数组中的储存为主

int main()
{


    printf("敏感字符管理系统\n");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符（最后一个）\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换内容中的敏感字符\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c",&m);//这一个scanf是把上一次的回车字符从电脑中取出
            scanf("%c",&m);//这一行scanf才是真正的取出用户输入的敏感字符

            arr[index] = m;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }

        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            printf("退出系统\n");
            break;
        }



    }

    return 0;
}
