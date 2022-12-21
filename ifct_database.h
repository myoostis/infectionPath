//
// ifct_database.h
// infection path
//
// Created by HyoJin Park on 2022/12/01
//

#ifndef ifct_database_h
#define ifct_database_h


int ifctdb_addTail(void* obj);          //add data to tail
int ifctdb_deleteData(int index);       //delete data
int ifctdb_len(void);                   //get database length
void* ifctdb_getData(int index);        //get index'th data

#endif /*ifct_database_h*/
