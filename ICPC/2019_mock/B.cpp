#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int roll;
    char name[20];
    int mark;
} student;

bool compare(student a, student b){
    if(a.mark == b.mark)
        return a.roll < b.roll;
    return a.mark > b.mark;
}

int main(){
    int n;
    int temp_length;
    scanf("%d", &n);

    //student st[n+2];

    for(int i = 0; i < n; i++){
        scanf("%d", &st[i].roll);
        getchar();
        scanf("%s", st[i].name);
        getchar();
        scanf("%d", &st[i].mark);
    }

    sort(st, st+n, compare);

    cout << "Roll | Name       | Marks" << endl;
    cout << "-------------------------" << endl;
    for(int i = 0; i < n; i++){
        printf("%4d | %s", st[i].roll, st[i].name);
        temp_length = strlen(st[i].name);
        temp_length = 12 - temp_length - 1;
        for(int j=0; j<temp_length; j++)
            cout << " ";
        cout << "| " << st[i].mark << endl;
    }
}
