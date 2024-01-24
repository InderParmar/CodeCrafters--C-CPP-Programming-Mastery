// StudentInfo.c - function definitions for student information

// Miguel Watler
// miguel.watler@senecacollege.ca
// 1234567890
// Section XXY
#include <stdbool.h>
#include "StudentInfo.h"

// InitializeInfo - returns void, accepts the address of struct StudentInfo
// Sets the last name to a null string. This can be accomplished by setting the first character
//                                      in the last name array to the null terminator '\0'.
// Sets the student id to 0.
// Goes through the subject array (NUM_SUBJECTS) and for each subject
//      sets name to a null string and
//      sets mark to 0.
void InitializeInfo(struct StudentInfo *info)
{
    info->lastName[0] = '\0';
    info->studentId = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        info->subjects[i].name[0] = '\0';
        info->subjects[i].mark = 0;
    }
}
// AverageMark - returns float, accepts the address of struct Subject
//
// Uses a for-next loop to go through all the marks (up to NUM_SUBJECTS).
//     Once an invalid mark is reached (mark equals zero), the loop terminates
//
// Returns the running total divided by the number of marks.
float AverageMark(struct Subject *subj)
{
    int flag = 0;
    float avg = 0.00;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        if (subj[i].mark > 0)
        {
            avg = avg + subj[i].mark;
            flag = flag + 1;
        }
        else
        {
            break;
        }
    }
    avg = (float)avg / NUM_SUBJECTS;
    return avg;
}

// MaximumMark - returns integer, accepts the address of struct Subject
//
// Uses a for-next loop to go through all the marks (up to NUM_SUBJECTS).
//     Once an invalid mark is reached (mark equals zero), the loop terminates
//
// The index of the maximum mark is returned
int MaximumMark(struct Subject *subj)
{
    int maxind = 0;
    int maxMark = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        maxMark = subj[0].mark;
        if (subj[i].mark != 0)
        { 
         if (maxMark < subj[i].mark)
         {
            maxMark = subj[i].mark;
            maxind = i;
        }
        }
        else
        {
            break;
        }
    }
    return maxind;
}

// MinimumMark - returns integer, accepts the address struct Subject
//
// Uses a for-next loop to go through all the marks (up to NUM_SUBJECTS).
//     Once an invalid mark is reached (mark equals zero), the loop terminates
//
// The index of the minimum mark is returned
int MinimumMark(struct Subject *subj)
{
    int minind = 0;
    int minMark = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        minMark = subj[0].mark;
        if (subj[i].mark != 0)
        { 
         if (minMark > subj[i].mark)
         {
            minMark = subj[i].mark;
            minind = i;
        }
        }
        else
        {
            break;
        }
    }
    return minind;
}