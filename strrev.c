//Given a string (array of characters), split the string in half and reverse each half without pointers or string builtin function.
//String in the first line
//Output the string after reversal.
//If the length of the string is even, split equally.
//If the length of the string is odd, leave the middle character in the same position and reverse the first and second half.


#include<stdio.h>
#include<string.h>
int main()
{
    char inputstr[100],lhalf[100],rhalf[100],str;
    int l,mid,i,j,k;
    gets(inputstr);
    l=strlen(inputstr);
    if(l%2==0)
    {
    mid=l/2;
    for(i=mid-1,j=0;i>=0,j<mid;i--,j++)
    {
        lhalf[j]=inputstr[i];
    }
    for(i=l-1,k=0;i>=mid;i--,k++)
    {
        rhalf[k]=inputstr[i];
    }
    printf("%s%s",lhalf,rhalf);
    }
    
    else
    {
    	mid=l/2;
    for(i=mid-1,j=0;i>=0,j<mid;i--,j++)
    {
        lhalf[j]=inputstr[i];
    }
    for(i=l-1,k=0;i>mid;i--,k++)
    {
        rhalf[k]=inputstr[i];
    }

			lhalf[j]='\0';
            str= inputstr[mid];
            strncat(lhalf, &str, 1);
            
	
	printf("%s%s",lhalf,rhalf);
	}	
    
    return 0;
}
