#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{

  int hour = 0, minutes = 0;
  if (studentHour > examHour)
  {
    hour = studentHour - examHour;

    if (studentMinute > examMinute)
      minutes = studentMinute - examMinute;

    if (studentMinute < examMinute)
    {
      minutes = examMinute - studentMinute;
      if ((60 - minutes) < 60)
      {
        cout << "Late" << endl;
        cout << 60 - minutes << " minutes after the exam";
        return "";
      }
    }

    cout << "Late" << endl;
    cout << hour << ":" << minutes << " hours after the exam";
    return "";
  }
  else if (studentHour < examHour)
  {
    hour = examHour - studentHour;
    if (hour == 1)
    {
      if (studentMinute > examMinute && ((60 - studentMinute - examMinute) < 60))
      {
        cout << "On time" << endl;
        cout << 60 - (studentMinute - examMinute) << " minutes before the start";
        return "";
      }
      else if (studentMinute < examMinute && ((60 - examMinute - studentMinute) < 60))
      {
        cout << "On time" << endl;
        cout << 60 - examMinute - studentMinute << " minutes before the start";
        return "";
      }
    }
    if (studentMinute > examMinute)
      minutes = studentMinute - examMinute;
    if (studentMinute < examMinute)
      minutes = examMinute - studentMinute;
    cout << "Early" << endl;
    cout << hour << ":" << minutes << " hours before the start";
    return "";
  }
  else
  {

    if (studentMinute > examMinute)
    {
      minutes = studentMinute - examMinute;
      cout << "On time" << endl;
      cout << minutes << " minutes before the start";
    }
    else if (studentMinute < examMinute)
    {
      minutes = examMinute - studentMinute;
      cout << "On time" << endl;
      cout << minutes << " minutes before the start";
    }
    else if (studentMinute == examMinute)
      cout << "On time" << endl;
    return "";
  }
}
int main()
{
  int examHour, examMinutes, studentHour, studentMinutes;
  cout << "Enter the Exam Starting Time (hour): ";
  cin >> examHour;
  cout << "Enter the Exam Starting Time (minutes): ";
  cin >> examMinutes;
  cout << "Enter student hour of arrival: ";
  cin >> studentHour;
  cout << "Enter student minutes of arrival: ";
  cin >> studentMinutes;
  checkStudentStatus(examHour, examMinutes, studentHour, studentMinutes);

  return 0;
}