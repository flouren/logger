#include <fstream> //import biblioteki fstream
#include <stdio.h>

#include <iostream>
#include </usr/include/mysql/mysql.h>

using namespace std;

int main(int argc, const char * argv[])
{

    fstream file_handler;
    file_handler.open("data.csv");
    string line;

        // file_handler.seekg(-1, std::ios_base::end);
        // if(file_handler.peek() == '\n')
        // {
        //Start searching for \n occurrences
        // file_handler.seekg(-1, std::ios_base::cur);
        // int i = file_handler.tellg();
        // for(i;i > 0; i--)
        // {
            // if(file_handler.eof() == 1)
            // {
            //Found
            // file_handler.get();
            // break;
            //Move one character back
            // file_handler.seekg(-1, std::ios_base::end);
            // std::string lastline;
            // getline(file_handler,lastline);
            // cout<<"last >>"+lastline<<endl;
            // file_handler.end
            // }
        // }
        // }
        // getline(file_handler, lastline);
        // cout<<"last:"+lastline<<endl;


        // cout<<file_handler.end();

    /**
     * @my file section - reading all data for now
     * 
     */

    do
    {
        getline(file_handler,line); 
        cout<<line<<endl;
        // // cout<<file_handler.eof()<<endl;
    } while (file_handler.eof()!=1);
    
    file_handler.close();

/**
 * @mysql section
 * 
 */

    // MYSQL mysql;
    // mysql_init(&mysql); // incjalizacja
    
    // if(mysql_real_connect(&mysql, "sql11.freemysqlhosting.net", "sql11512326", "koham6cipeczek", "sql11512326", 0, NULL, 0))
    //     printf("Połączenie z bazą danych MySQL nawiązano poprawnie!\n");
    // else
    //     printf("Błąd połączenia z bazą MySQL: %d, %s\n", mysql_errno(&mysql), mysql_error(&mysql));
    

    // // request for data to db

    // MYSQL_RES *req_id;
    // MYSQL_ROW row;

    // mysql_select_db(&mysql, "sql11512326");
    // mysql_query(&mysql, "select * from temp");
    // req_id = mysql_store_result(&mysql);

    // // inserting one record

    // const char* query = "insert into temp values('2022-08-17',25,77)";
    // // unsigned long length query_length = sizeof(query); // typically 43

    // mysql_send_query(&mysql,query,sizeof(query));
    
    // // fetching data

    // while ((row = mysql_fetch_row(req_id)) != NULL){
    //         for(int i = 0;i < mysql_num_fields(req_id); i++){
    //             cout<<row[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // mysql_close(&mysql); // zamknij połączenie



    
    return 0;
}

// gcc -o output-file $(mysql_config --cflags) mysql-c-api.c $(mysql_config --libs) <<--compile