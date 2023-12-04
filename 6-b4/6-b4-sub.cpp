/* 杨宇琨 信01 2252843 */
#include <cstdio>   //NULL
//不再允许包含任何系统头文件

/* ----- 不允许定义任何形式的全局变量/全部数组/只读全局变量/宏定义!!!!! ----- */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return只是一个示例，可改变 */
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char* str)
{
    if (str) {
        const char* ret = str;
        while (*str != '\0') {
            str++;
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return str - ret;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strcat(char* s1, const char* s2)
{
    if (s2 && s1) {
        char* ret = s1;
        while (*s1 != '\0') {
            s1++;
        }
        for (; *s2 != '\0'; s2++, s1++) {
            *s1 = *s2;
        }
        *s1 = '\0';
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return ret;
    }
    else if (s1)
        return s1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strncat(char* s1, const char* s2, const int len)
{
    if (s2 && s1) {
        char* ret = s1;
        const char* ret2 = s2;
        while (*s1 != '\0') {
            s1++;
        }
        for (; *s2 != '\0' && s2-ret2<len; s2++, s1++) {
            *s1 = *s2;
        }
        *s1 = '\0';
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return ret;
    }
    else if (s1)
        return s1;
    else
        return 0;

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strcpy(char* s1, const char* s2)
{
    if (s2 && s1) {
        char* ret = s1;
        for (; *s2 != '\0'; s2++, s1++) {
            *s1 = *s2;
        }
        *s1 = '\0';
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return ret;
    }
    else if (s1) {
        *s1 = '\0';
        return s1;
    }
    else
        return 0;

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strncpy(char* s1, const char* s2, const int len)
{
    if (s2 && s1) {
    char* ret = s1;
    const char* ret2 = s2;
    for (; *s2 != '\0' && s2 - ret2 < len; s2++, s1++) {
        *s1 = *s2;
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return ret;
    }
    else if (s1)
        return s1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char* s1, const char* s2)
{
    if (s2 && s1) {
        for (; *s1 != '\0' || *s2 != '\0'; s1++, s2++) {
            if (*s1 == *s2)
                continue;
            else
                return *s1 - *s2;
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return 0;
    }
    else if (s1)
        return 1;
    else if (s2)
        return -1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char* s1, const char* s2)
{
    if (s2 && s1) {
    for (; *s1 != '\0' || *s2 != '\0'; s1++, s2++) {
        if (*s1 >= 'A' && *s1 <= 'Z') {
            if (*s2 >= 'A' && *s2 <= 'Z') {
                if (*s1 == *s2)
                    continue;
                else
                    return *s1 - *s2;
            }
            else {
                if (*s1 + 32 == *s2)
                    continue;
                else
                    return *s1 + 32 - *s2;
            }
        }
        else {
            if (*s2 >= 'A' && *s2 <= 'Z') {
                if (*s1 == *s2 + 32)
                    continue;
                else
                    return *s1 - *s2 - 32;
            }
            else {
                if (*s1 == *s2)
                    continue;
                else
                    return *s1 - *s2;
            }
        }
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return 0;
    }
    else if (s1)
        return 1;
    else if (s2)
        return -1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char* s1, const char* s2, const int len)
{
    if (s2 && s1) {
        const char* ret1 = s1, * ret2 = s2;
        for (; (*s1 != '\0' || *s2 != '\0') && (s1 - ret1) < len && (s2 - ret2) < len; s1++, s2++) {
            if (*s1 == *s2)
                continue;
            else
                return *s1 - *s2;
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return 0;
    }
    else if (s1)
        return 1;
    else if (s2)
        return -1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char* s1, const char* s2, const int len)
{
    if (s2 && s1) {
    const char* ret1 = s1, * ret2 = s2;
    for (; (*s1 != '\0' || *s2 != '\0') && s1 - ret1 < len && s2 - ret2 < len; s1++, s2++) {
        if (*s1 >= 'A' && *s1 <= 'Z') {
            if (*s2 >= 'A' && *s2 <= 'Z') {
                if (*s1 == *s2)
                    continue;
                else
                    return *s1 - *s2;
            }
            else {
                if (*s1 + 32 == *s2)
                    continue;
                else
                    return *s1 - *s2 + 32;
            }
        }
        else {
            if (*s2 >= 'A' && *s2 <= 'Z') {
                if (*s1 == *s2 + 32)
                    continue;
                else
                    return *s1 - *s2 - 32;
            }
            else {
                if (*s1 == *s2)
                    continue;
                else
                    return *s1 - *s2;
            }
        }
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return 0;
    }
    else if (s1)
        return 1;
    else if (s2)
        return -1;
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strupr(char* str)
{
    if (str) {
        char* ret = str;
        for (; *str != '\0'; str++) {
            if (*str >= 'a' && *str <= 'z')
                *str = *str - 32;
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return ret;
    }
    else
        return 0;
    
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strlwr(char* str)
{
    if (str) {
        char* ret = str;
        for (; *str != '\0'; str++) {
            if (*str >= 'A' && *str <= 'Z')
                *str = *str + 32;
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return ret;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char* str, const char ch)
{
    if (str) {
    const char* ret = str;
    for (; *str != '\0'  ; str++) {
        if (*str == ch)
            return str-ret+1;
        else
            continue;
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return 0;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char* str, const char* substr)
{
    if (str && substr) {
        const char* ret1 = substr, * ret = str;

        for (; *str != '\0'; str++) {
            if (*str == *substr) {
                if (*(substr + 1) == '\0')
                    return str-ret-tj_strlen(ret1)+2;
                else
                    substr++;
            }
            else {
                for (; substr != ret1; ) {
                    substr--, str--;
                }          
                continue;
            }
                
        }
        /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

        return 0;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char* str, const char ch)
{
    if (str) {
    const char* ret = str;
    while (*str != '\0')
        str++;
    str--;
    for (; str - ret >= 0; str--) {
        if (*str == ch)
            return str - ret + 1;
        else
            continue;
    }
    
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return 0;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char* str, const char* substr)
{
    if (str&&substr) {
    const char* ret1 = str,*ret2=substr;
    while (*str != '\0')
        str++;
    str--;
    while (*substr != '\0')
        substr++;
    substr--;
    for (; str - ret1 >= 0; str--) {
        if (*str == *substr) {
            if (substr == ret2)
                return str - ret1 + 1;
            else
                substr--;
        }
        else {
            for (; *substr != '\0';) {
                str++, substr++;
            }
            substr--;
            str--;
            continue;
        }
            
    }

    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    return 0;
    }
    else
        return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char* tj_strrev(char* str)
{
    if (str) {
    char* s = str,*ret=str;
    char tmp;
    while (*str != '\0')
        str++;
    str--;
    for (; str > s; str--, s++) {
        tmp = *str;
        *str = *s;
        *s = tmp;
    }
    /* 注意：函数内不;允许定义任何形式的数组（包括静态数组） */

    return ret;
    }
    else
        return 0;
}
