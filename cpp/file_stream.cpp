/* ************************************************************************
> File Name:     file_strea.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Thu 20 Jul 2023 09:12:41 PM CST
> Description:   
 ************************************************************************/
#include <iostream>
//ofstream //文件输出流，用于创建文件，并写入信息
//ifstream //输入文件流，用于读取文件信息
#include <fstream>  
//fstream  //文件流  同时具有上面两种功能


/* @Name:     open file
 * @function: void open(const char *filename, ios::openmode mode);
 * @param:    ios::app writing follow to the end of file
 *            ios::ate light locate to the end
 *            ios::in   read
 *            ios::out  write
 *            ios::trunc if the file has existed, its contend will be clear
 *
 *@example:   ofstream outfile;
              outfile.open("file.dat", ios::out | ios::trunc );

 */
 
//@Name:     close file 
//@function: void close()





using namespace std;

int main(){
    char data[100];

    //open with writing mode
    ofstream outfile; //实例化
    outfile.open("afile.dat");

    cout << "wirting to the file" <<endl;
    cout << "Enter your name:" <<endl;
    /*      
     *  istream& getline (char* s, streamsize n );
        istream& getline (char* s, streamsize n, char delim );      
        @param: char delim(字数限制)    */
    cin.getline(data,100);
    cout << data <<endl; 
    //wirte user's data into File
    cout << "Enter your age"<<endl ;
    cin >> data;
    cout << data << endl;
    cin.ignore(); //忽略 data中"\n"

    //write input data into file again;
    outfile <<data <<endl;

    outfile.close();

    //open with reading mode
    ifstream infile;
    infile.open("afile.dat");

    cout <<"Reading from the file" <<endl;
    infile >> data; //将读取的文件流 给到 data

    cout << data <<endl;


    //read file and dispaly again
     
    infile >> data;
    cout <<data <<endl;

    infile.close();

    return 0;


}

