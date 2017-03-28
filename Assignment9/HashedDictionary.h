//
//  Header.h
//  THis class is a representation of a dictionary. This dictionary holds hashedentries.
//  Each hashedentry must go through a hash function before being put in the dictionary.
//  This class contains operations to add to the dictionary, remove from the dictionary,
//  get the number of items in the dictionary, check to see if the dictionary contains an
//  item, isempty, hash function and get item.
//
//  Assignment9
//
//  Created by Jasmine Jans on 4/27/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#ifndef Assignment9_HashedDictionary_h
#define Assignment9_HashedDictionary_h
#include "HashedEntry.h"
#include "Entry.h"
using namespace std;

class HashedDictionary
{
    //operations and constructors
public:
    //default constructor creates the hashtable and sets itemCount and hashTableSize to 0.
    HashedDictionary ();
    //destructor
    ~ HashedDictionary ();
    
    // checks to see if the dictionary is empty
    // pre: a dictionary exists
    // post: true or false is returned
    // usage: isEmpty();
    bool isEmpty () const;
    
    // returns the number of items in the dictionary
    // pre: a dictionary exists
    // post: an int is returned
    // usage: getNUmberofItems();
    int getNumberOfItems () const;
    
    // adds a hashedentry to the hashtable
    // pre: a hash table exists
    // post: the item is inserted based on the hashed key to the dictionary.
    // usage: add(key, item);
    bool add (const KeyType & searchKey, const ItemType & newItem);
    
    // removes the given key hashedentry from the dictionary
    // pre: a hashtable dictionary exists
    // post: the item at searchKey is removed from the dictionary
    // usage: remove(key);
    bool remove (const KeyType & searchKey);
    
    // removes all items from the hashtable dictionary
    // pre: a hashtable dictionary exists
    // post: the entire dictionary is cleared and itemsize=0
    // usage: clear();
    void clear ();
    
    // gets the item at a certain  given key
    // pre: an item at the given key exists in the hashtable
    // post: the item is returned
    // usage: getItem(key);
    ItemType getItem (const KeyType & searchKey) const;
    
    // checks to see if the item at the given key is in the hashtable
    // pre: a table exists
    // post: true or false is returned based on the existence of the item in the table.
    // usage: contains(key);
    bool contains (const KeyType & searchKey) const;
    
    //private variables and helper functions
private:
    //hashtable of default size 101
    HashedEntry *hashTable[101];
    //number of total items in the hashtable
    int itemCount;
    //number of hashed spots taken in the hashtable
    int hashTableSize;
    //constant of 101 called DefaultSize
    static const int DEFAULT_SIZE = 101;
    
    // takes a key and returns the hash value for the given key
    // pre: a hashtable exists
    // post: an integer is returned and is the hashvalue for the given key.
    // usage: hashFunc(key);
    int hashFunc (KeyType searchKey) const; // modulo: searchKey%DEFAULT_SIZE;
};


#endif
