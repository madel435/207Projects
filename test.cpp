
#include <sstream>
#include <string>
#include <fstream>
#include <iomanip>

struct gradetype
{
  double totalLabs = 0.0;
  double totalexams = 0.0 ;
  double totalprojects= 0.0;

  double total = 0.0;

  double labAmount = 0.0;
  double projectAmount = 0.0;
  double examAmount = 0.0;

  double meanLab = 0.0; 
  double meanProject = 0.0 ;
  double meanExam = 0.0;

};

void outputLPE(gradetype& grade) //outputting the values for each 
{
   std:: cout << std:: fixed << std::setprecision(2);
   std::cout << "Labs:" << grade.meanLab << "Projects:" << grade.meanProject << "Exams: " << grade.meanExam << "Total Grade: " << grade.total;
}
void calculateLPE(gradetype& grade)
{
  if(grade.labAmount > 0)
  {
    grade.meanLab = grade.totalLabs / grade.labAmount;
    grade.meanProject = grade.totalprojects / grade.projectAmount;
    grade.meanExam = grade.totalLabs / grade.labAmount;
    grade.total = grade.meanLab + grade.meanExam + grade.meanProject;
  }
}

int main(gradetype& grade)
{
  std::string filename;
  std::string stringstr;
  std::string gradetypeLPE;

  double value = 0;

  std::cout <<"What is the name of the file?"; //Getting name of file 
  std::cin >> filename;
  
  std::ifstream inFS(filename);
  inFS.open(filename);
  {
    {
      if (inFS.fail())
        {
          std::cout << "Error opening file ";
          return 1;
        }
    
        while (std::getline(inFS,stringstr))
        { 
          std:: istringstream ss(stringstr);
          ss >> gradetypeLPE >> value;

          if (gradetypeLPE == "Labs: ")      
          {
            grade.totalLabs += value;
            ++grade.labAmount;
          }

          else if (gradetypeLPE == "Exams: ")
          {
            grade.totalexams += value;
            ++grade.examAmount; 
          }

          else if (gradetypeLPE == "Projects: ")
          {
            grade.totalprojects+= value;
            ++grade.projectAmount; 
          }

          else 
          {
            std::cout<< "Something went wrong";
          }
      
          calculateLPE(grade); 
          outputLPE(grade);
          inFS.close();
        }
    }  
  }
  return 0;
}