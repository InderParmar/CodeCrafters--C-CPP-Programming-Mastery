//StudentInfo.h - declarations for student information

//Miguel Watler
//miguel.watler@senecacollege.ca
//1234567890
//Section XXY

#define MAX_STR 32
#define NUM_SUBJECTS 6

//Create struct Subject with members
//name (char array, array size MAX_STR) and
//mark (integer)
struct Subject
{
  char name[MAX_STR];
  int mark;
};

//Create struct StudentInfo with members
//lastName (char array, array size MAX_STR),
//studentId (integer), and 
//subject (struct Subject array, array size NUM_SUBJECTS)

struct StudentInfo
{
    char lastName[MAX_STR];
    int studentId;
    struct Subject subjects[NUM_SUBJECTS];
};


//Create the following function prototypes:
//InitializeInfo - returns void, accepts the address of struct StudentInfo
//AverageMark - returns float, accepts the address of struct Subject
//MaximumMark - returns integer, accepts the address of struct Subject
//MinimumMark - returns integer, accepts the address struct Subject
void InitializeInfo(struct StudentInfo *info);
float AverageMark(struct Subject *subj);
int MaximumMark(struct Subject *subj);
int MinimumMark(struct Subject *subj);