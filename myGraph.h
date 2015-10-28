//
//  myGraph.h
//  bday
//
//  Created by Martha Winger-Bearskin on 12/11/13.
//  Copyright (c) 2013 Martha Winger-Bearskin. All rights reserved.
//

#ifndef __bday__myGraph__
#define __bday__myGraph__

#include <iostream>
#include <iomanip>

#include "arraylist.h"


class Graph
{
    private:
    
    string m_city;
    ArrayList<string> m_cityTable;
    int m_size;
    int **m_map;
    
    public:
    
    ~Graph();
    void createGraph(string cityName, int tableSize);
    void addVertex();
    void addEdge();
    
    
    
    
    
    
    
    
    //-------
    void print(){
        cout << " Graph " << m_city << endl;
        for (int k=0; k < m_size; k++){
            for(int j=0; j< m_size; j++){
                cout << std::setw(3) << m_map[k][j];
            }
            cout << endl;
        }
        
        
    }
    

    
    
};



#include "myGraph.hpp"
#endif /* defined(__bday__myGraph__) */
