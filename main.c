#include <stdio.h>
#include "arr.h"
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_5.h"

void chose(int *task);
void task_1();
void task_2();
void task_3();
void task_4();
void task_5();

int main()
{
    int task=1;

    while((task>0)&&(task<6)){
        chose(&task);

        switch(task){
            case 1:{
                task_1(); break;
            }
            case 2:{
                task_2(); break;
            }
            case 3:{
                task_3(); break;
            }
            case 4:{
                task_4(); break;
            }
            case 5:{
                task_5(); break;
            }
            default:{
                printf("\nДякую що переглянули цю маленьку програмку!"); break;
            }
        }
    }

    return 0;
}

void chose(int *task){
    printf("\n------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nВиберіть завдання: ");
    scanf("%d", task);
}

void task_1(){

    printf("\n1. Задано одновимірний масив A розміру N. Обчислити суму елементів масиву на парних позиціях та добуток - на непарних позиціях.\n");

    int n;
    float sum, dob, *a;

    create_float_a(&a, &n);
    vvid_float_a(a, n);
    summa(n, a, &sum);
    dobutoc(n, a, &dob);
    printf("Сума: %.2f\nДобуток: %.2f", sum,dob);

    free(a);
}

void task_2(){
    printf("\n2. Знайти номер першого мінімального елемента серед додатних елементів, розташованих до першого елемента, кратного пʼяти.\n");

    int n,n_5,min_i,*a;

    create_int_a(&a, &n);

    vvid_int_a(a, n);

    kratni_5(a, n, &n_5);
    min(a, n_5, &min_i);

    printf("Номер першого мінімального елемента: %d", min_i+1);

    free(a);
}

void task_3(){
    printf("\n3. Задано послідовність цілих чисел В (2), п ≤ 200. Розробити програму, яка перетворює цю послідовність за правилом: якщо В(1) = B(2), B (2) = B (2n - 1), .., то послідовність залишається без зміни, інакше виконується перестановка B (1), B (3), ..., B(2n - 1), B (2), B (4), ... , B(2n).\n");

    int i,n,flag,*a,*a_new;

    create_int_a(&a, &n);
    vvid_int_a(a, n);
    perevir(a, n, &flag);
    printf("Ваша послідовність: ");
    if(flag==1){
        create_a_new(&a_new, n);
        roztav(a, n, a_new);
        for(i = 0; i < n; i++) printf("%d ", a_new[i]);
    }

    if(flag==0){
        for(i = 0; i < n; i++) printf("%d ", a[i]);
    }

    free(a);
    free(a_new);
}

void task_4(){
    printf("\n4. Дано одновимірний масив цілих чисел A[i], д і = 1,2, .., n та 0 < A[i] < n.\nНадрукувати елементи масиву за таким правилом:\n\tа) першим елементом завжди є А 1);\n\tb) значення поточного виведеного елемента масиву є порядковим номером наступного елемента цього масиву.\nПроцес завершується тоді, коли буде надруковано останній елемент масиву, або ж порядковий номер виведеного елемента дорівнюватиме його значенню.");
    int n,*a;

    create_int_a(&a, &n);
    vvid_int_a(a, n);
    vivid_int_a(a, n);

    free(a);
}

void task_5(){
    printf("\n5. Дано натуральне число п та дійсні елементи квадратної матриці порядку\nn. Вважатимемо рядок матриці позначеним, якщо елемент цього рядка, що\nналежить головній діагоналі, додатний. Для кожного позначеного рядка\nобчислити:\n\t1) максимальний елемент;\n\t2) різницю між першим та останнім елементом;\n\tз) середнє арифметичне елементів.");

    int n,i;
    float max = 0,rizn,ser = 0,**a;

    create_matrix_a(&a, &n);
    vvid_matrix_a(a, n);

    for(i = 0; i < n; i++){
        if(a[i][i] > 0){
            maximum(a, i, n, &max);
            riznitsa(a, i, n, &rizn);
            seredne(a, i, n, &ser);
            printf("\nДля рядка %d:\n\tМаксимальний елемент: %.2f\n\tРізниця між першим і останнім: %.2f\n\tСереднє арифметичне: %.2f", i+1,max,rizn,ser);
        }
    }

    for (int i = 0; i < n; i++) free (a[i]);
    free(a);
}
