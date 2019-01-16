#include <stdio.h>

//定义全局变量
char arr[1024]; //保存敏感字符
int index = 0;  //敏感字符在数组中的储存为主

//编写一个函数，这个函数实现一个功能：判断一个字符是不是敏感字符
//输入一个字符，
//如果这个字符是敏感字符，那么这个函数返回真，如果不是，返回假


//判断一个字符是不是敏感字符。哪个字符=变量
int isMingan(char x){
    //这个函数的功能为，判断x变量中的值，是不是敏感字符
    //让x中的值和arr数组中的每一个元素的值，相比
    //如果x和每一个元素都不相等，那么可以说明x不是敏感字符，反之，如果有1个或以上元素与x相等，那么x就是敏感字符

    int count = 0;//该变量记录，x与每一个元素相等的次数

    //使用for循环，让x和数组中的每一个元素进行比较
    for(int i=0;i<index;i++){
        if(x == arr[i]){
            count++;
        }
    }

    if(count == 0){
        //如果比较完成之后，没有一次相等
        return 0;
    }else{
        return 1;
    }

}


int main()
{

    printf("敏感字符管理系统\n");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符（最后一个）\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换内容中的敏感字符\n");//用户输入一段英文内容，该系统对用户输入的内容中的敏感字符进行替换
        printf("5---退出\n");

        printf("请选择相应功能\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c", &m); //这一个scanf是把上一次的回车字符从电脑中取出
            scanf("%c", &m); //这一行scanf才是真正的取出用户输入的敏感字符

            arr[index] = m;
            index++; //逻辑删除：将新内容存到旧内容的为主上，就表示把就内容删除

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            //此处有一个bug，如果当前敏感字符为空，那么删除之后，index的值就为-1
            printf("删除最后一个敏感字符\n");
            index--;

            printf("删除成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("所有敏感字符如下：\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个敏感字符为%c\n", i + 1, arr[i]);
            }

            printf("删除成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("请输入一段英文：\n");
            //问题？用什么来储存用户输入的一段英文
            //一段英文 就是 字符串 ，用字符数组来储存字符串即可
            char neirong[1024];

            //如何获取用户输入的字符串：用%s,当使用%s时，scanf不需要加&符号
            scanf("%s",neirong);

            //对neirong这个数组中的每一个元素进行判断
            //如果这个元素是敏感字符，那么就替换，如果不是

            for(int i = 0;1;i++){
                //储存字符串内容的数组，是有结束标志 '\0'
                if(neirong[i] == '\0'){
                    break;
                }
                char x = neirong[i];
                int r = isMingan(x);
                if(r == 1){
                    neirong[i] = '*';
                }
                // if(isMingan(neirong[i])==1){

                // }

                printf("%c",neirong[i]);
            }

            printf("\n");

            printf("替换完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

        }
        if (code == 5)
        {
            printf("退出系统\n");
            break;
        }
    }

    return 0;
}
