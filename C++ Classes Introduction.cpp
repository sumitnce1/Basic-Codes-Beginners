#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
class CollegeCourse
{ 
	public:
  		string courseId;
        int gp;
        char grade;
        int credits;
        void set_CourseId(string CID)
    	  {
       		courseId=CID;
    	  }
    	void set_Credit(int cr )
    	 {
       		credits=cr;
    	 }
    	void set_Grade(char g)
		 {
        	grade=g;
    	 }
   			int calculateGradePoints(char g)
    		{  
				int gradePoint;
       			if(grade>=65 && grade<=90)
       				{
           				gradePoint=10+grade-65 ;
       				}
       			if(grade>=97 && grade<=102){
           				gradePoint=10-(grade-97);
       				}
               	return gradePoint;
    		}
   		int  calculateHonorPoints(int gp,int cr)
    		{   
        		int honorPoint;
       			honorPoint=cr*calculateGradePoints(gp);
       			return honorPoint;
    		}
    	void display()
    		{
				cout<<calculateGradePoints(grade)<<" ";
     			cout<<calculateHonorPoints(gp,credits)<<endl;
    		}
};
