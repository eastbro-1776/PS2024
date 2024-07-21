#include <iostream> 
using namespace std;

int main(){
    double total_grade = 0;
    double total_credit = 0;

    for (int i = 0 ; i < 20 ; i++){
        string subj;
        double credit;
        string grade;
        cin >> subj >> credit >> grade;

        if (grade == "P"){
            continue;
        }        
        else if (grade == "A+"){
            total_grade += 4.5 * credit;
        }
        else if (grade == "A0"){
            total_grade += 4.0 * credit;
        }
        else if (grade == "B+"){
            total_grade += 3.5 * credit;
        }
        else if (grade == "B0"){
            total_grade += 3.0 * credit;
        }
        else if (grade == "C+"){
            total_grade += 2.5 * credit;
        }
        else if (grade == "C0"){
            total_grade += 2.0 * credit;
        }
        else if (grade == "D+"){
            total_grade += 1.5 * credit;
        }
        else if (grade == "D0"){
            total_grade += 1.0 * credit;
        }
        else if (grade == "F"){
            total_grade += 0;
        }

        if (grade != "P"){
            total_credit += credit;
        }
    }
    cout << total_grade / total_credit << '\n';
    return 0;
}