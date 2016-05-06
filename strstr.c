char *mystrstr(char *src,char *dest_sub)
{
    char *p1 = src;
    char *p2 = dest_sub;
    while(*p1)
    {
        if(*p1 == *p2)
        {
            char *temp=p1;//用temp存放p1与p2开始相等的位置，并指向源字符串
            while(*p2)
            {
                //以p2为基准，遍历p2，每遍历一次，将p1和p2都向后移动一个位置
                p1++;
                p2++;
                if(*p2 != *p1) //判断p1和p2指向的内容是否相等
                {
                    p2 = dest_sub;//不相等，将p2重新指向开始位置，方便下次重新比较
                    p1--;/*由于p1此时指向两个字符串不相等的位置，但为了避免p1此时的指向的内容可能与p2指向开始位置的dest_sub相    同，故将p1减1*/
                    break;
                }
                else if(!(*(p2+1))) //走到此分支，说明已经匹配到，p2指向dest_sub的最后一个字符，p2+1指向'\0'
                {
                    return temp;//返回开始相等的位置
                }
            }
        }
        p1++; //*p1与*p2不相等，则进行下一次比较
    }
    return NULL;
}

int main()
{
    char *src = "Qianfeng is vi very good!";
    char *dest_sub = "ve";
    char *dest = mystrstr(src, dest_sub);
    printf("查找结果：%s\n",dest);
    
    return 0;
}

