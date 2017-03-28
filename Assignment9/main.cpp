//
//  main.cpp
//  Assignment9
//
//  Created by Jasmine Jans on 4/27/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#include <iostream>
using namespace std;
#include "HashedDictionary.h"

int main()
{
    //make new hash dictionary.
    HashedDictionary* dict = new HashedDictionary();
    
    //should print 1
    cout<<dict->isEmpty()<<endl;
    
    //add items with keys to the hashdictionary.
    dict->add(254, "berry");
    dict->add(238, "apple");
    dict->add(847, "tomato");
    dict->add(823764, "carrot");
    dict->add(984598, "pineapple");
    dict->add(12765, "banana");
    dict->add(9324, "artihoke");
    dict->add(27365, "cherry");
    dict->add(2873, "grape");
    dict->add(8372, "pear");
    dict->add(182736, "grapefruit");
    dict->add(23746, "mango");
    dict->add(7999, "apricot");
    dict->add(133, "melon"); //32
    dict->add(234, "orange"); //32
    
    //should print 0
    cout<<dict->isEmpty()<<endl;
    
    //should print 15
    cout<<dict->getNumberOfItems()<<endl;
    
    //
    
    //print out the items in the hashtable using their keys.
    cout<<dict->getItem(254)<<endl;
    cout<<dict->getItem(238)<<endl;
    cout<<dict->getItem(234)<<endl;
    cout<<dict->getItem(133)<<endl;
    cout<<dict->getItem(847)<<endl;
    cout<<dict->getItem(823764)<<endl;
    cout<<dict->getItem(984598)<<endl;
    cout<<dict->getItem(12765)<<endl;
    cout<<dict->getItem(9324)<<endl;
    cout<<dict->getItem(27365)<<endl;
    cout<<dict->getItem(2873)<<endl;
    cout<<dict->getItem(8372)<<endl;
    cout<<dict->getItem(182736)<<endl;
    cout<<dict->getItem(23746)<<endl;
    cout<<dict->getItem(7999)<<endl;
    
    //remove three of the keys from the dictionary.
    dict->remove(254);
    dict->remove(847);
    dict->remove(8372);
    
    //get those items that were just removed.
    cout<<dict->getItem(254)<<endl;
    cout<<dict->getItem(847)<<endl;
    cout<<dict->getItem(8372)<<endl;
    
    //remove another entry.
    dict->remove(238);
    
    //should print false true true 011 when asking if these keys are in the table.
    cout<<dict->contains(238)<<endl;
    cout<<dict->contains(7999)<<endl;
    cout<<dict->contains(823764)<<endl;
}

