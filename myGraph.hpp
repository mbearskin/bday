//
//  myGraph.cpp
//  bday
//
//  Created by Martha Winger-Bearskin on 12/11/13.
//  Copyright (c) 2013 Martha Winger-Bearskin. All rights reserved.
//

#ifndef MYGRAPH_HPP
#define MYGRAPH_HPP


//Destructor
Graph::~Graph()
{
    for(int k=0; k< m_cityTable.size(); k++)
    {
        delete  m_map[k];
    }
    delete[] m_map;
}

void Graph::createGraph(string cityName; int tableSize)
{
    m_city = cityname;
    m_size = tableSize;
    m_map = new int*[m_size];
    for(int i=0; i<m_size; i++)
    {
        m_map[i] = new int[m_size];
    }
    
    
    
}

void fillGrpah()
{
    
}

template <typename T>
void Graph<T>::addEdge(int from, int to, int cost)
{
    m_map[from][to] = cost;
}
#endif