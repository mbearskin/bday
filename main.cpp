//
//  main.cpp
//  bday
//
//  Created by Martha Winger-Bearskin on 12/11/13.
//  Copyright (c) 2013 Martha Winger-Bearskin. All rights reserved.
//


#include <iostream>
#include "myGraph.h"

int main()
{

    int numGraphs;
    int tokens;
    string city;
    int numPlaces;
    int cost;
    Graph MyGraph;
    string place;
    int neighbor;
    
    
    cin >> numGraphs;
    for (int i= 0; i < numGraphs; i++)
    {
        cin >> tokens;
        cin >> city;
        cin >> numPlaces;
        MyGraph.createGraph(city, numPlaces);
        aGraph.fillGraph();
        
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
   
}

