#include<stdio.h>
#include<string.h>
int* mathchStrings(char **strings,int strings_count,char **queries,int queries_count,int* result_count){
    int *result=calloc(queries_count,sizeof(int));
    *result_count=queries_count;
    for(int i=0;i<queries_count;i++){
        for (int j=0;j<strings_count;j++){
            if(strcmp(queries[i],strings[j])==0){
                result[i]++;
            }
        }
    }
    return result;

}

int main(){
    int strings_count,queries_count;
    scanf("%d",&strings_count);
    char **strings=malloc(strings_count * sizeof(char*));
    for(int i=0;i<strings_count;i++){
        strings[i]=malloc(101);
        scanf("%s",strings[i]);
    }
    scanf("%d",&queries_count);
    char **queries=malloc(queries_count * sizeof(char*));
    for(int i=0;i<queries_count;i++){
        queries[i]=malloc(101);
        scanf("%s",queries[i]);

    }
    int result_count;
    int* result=mathchStrings(strings,strings_count,queries,queries_count,&result_count);
    for(int i=0;i<result_count;i++){
        printf("%d\n",result[i]);

    }
    for (int i=0; i<strings_count;i++){
        free(strings[i]);

    }
    for(int i=0;i<queries_count;i++){
        free(queries[i]);
    }
        free(strings);
        free(queries);
        free(result);
        return 0;

    }
