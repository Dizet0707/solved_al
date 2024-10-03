#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        string subjectName;
        double Credit; // 학점
        string subjectScore;

        double sum = 0; // 학점
        double allSum = 0;

        for(int i = 0; i < 20; i++)
        {
                cin >> subjectName >> Credit >> subjectScore;
                sum += Credit;

                if (subjectScore == "A+")
                {
                        allSum += Credit * 4.5;
                }
                else if (subjectScore == "A0")
                {
                        allSum += Credit * 4.0;
                }
                else if (subjectScore == "B+")
                {
                        allSum += Credit * 3.5;
                }
                else if (subjectScore == "B0")
                {
                        allSum += Credit * 3.0;
                }
                else if (subjectScore == "C+")
                {
                        allSum += Credit * 2.5;
                }
                else if (subjectScore == "C0")
                {
                        allSum += Credit * 2.0;
                }
                else if (subjectScore == "D+")
                {
                        allSum += Credit * 1.5;
                }
                else if (subjectScore == "D0")
                {
                        allSum += Credit * 1.0;
                }
                else if (subjectScore == "P")
                {
                        sum -= Credit;
                }
                else if (subjectScore == "F")
                {
                }
        }

        cout << allSum / sum << endl;

        return 0;
}