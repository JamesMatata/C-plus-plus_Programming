#include <iostream>
using namespace std;
int main()
 {
    int i=1,total_class_marks=0,class_average_mark,student_average_mark;
    char grade;
    cout<<"\n#####################################__ENTER STUDENT SUBJECT MARK IN RANGE 0 - 100 __#######################################";
    while(i<=5)
    {
        cout<<"\n*********************************************************************************************************";
        cout<<"\nEnter student's subject marks: ";
        int j=1,subject_mark,total_student_marks=0;
        while(j<=5)
        {
            cout<<"\n# - ";
            cin>>subject_mark;
            if((subject_mark>=0)&&(subject_mark<=100))
                total_student_marks+=subject_mark;
            else
                {
                    cout<<"\nEnter valid marks(0-100).";
                    cout<<"\n# - ";
                    cin>>subject_mark;
                    total_student_marks+=subject_mark;
                }
            j++;
        }
        student_average_mark=total_student_marks/5;
        cout<<"\nStudent's average mark is : "<<student_average_mark;
            if((student_average_mark>=70)&&(student_average_mark<=100))
                grade='A';
            else if((student_average_mark>=60)&&(student_average_mark<=69))
                grade='B';
            else if((student_average_mark>=50)&&(student_average_mark<=59))
                grade='C';
            else if((student_average_mark>=40)&&(student_average_mark<=49))
                grade='D';
            else
                grade='E';
             if((grade=='A')||(grade=='B')||(grade=='C')||(grade=='D')||(grade=='E'))
                    cout<<"\n  Student's grade is "<<grade;
                    cout<<endl;
        total_class_marks+=student_average_mark;
        i++;
    }
    class_average_mark=total_class_marks/5;
    cout<<"\n\nClass average mark is : "<<class_average_mark;
    cout<<"\n\n######################################__THANK YOU FOR USING THE PROGRAM__################################################\n\n";
    return 0;
}
