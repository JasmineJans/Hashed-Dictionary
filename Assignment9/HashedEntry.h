//
//  HashedEntry.h
//  this class is a subclass of entry and represents a hashed entry into a dictionary (or in this case a hashtable).
//  it has a key and an item connected to that key as well as a next pointer.
//  This class includes all operations of the entry class as well as operations to set next and
//  get next.

//  Assignment9
//
//  Created by Jasmine Jans on 4/27/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#ifndef Assignment9_HashedEntry_h
#define Assignment9_HashedEntry_h
#include "Entry.h"

class HashedEntry: public Entry
{
    //operations and constructors
public:
    //default constructor sets nextptr to NULL, item to "" and searchKey to 0.
    HashedEntry ();
    //constructor that sets item to newEntry and searchKey to newKey
    HashedEntry (ItemType newEntry, KeyType newKey);
    //constructor that sets nextPtr to nextEntryPtr, item to newEntry and searchKey to newKey
    HashedEntry (ItemType newEntry, KeyType newKey, HashedEntry *nextEntryPtr);
    
    // sets the nextptr to a new hashed entry
    // pre: a pointer with nextptr exists
    // post: the nextptr equals nextEntryPtr.
    // usage: setNext(*entrypointer);
    void setNext (HashedEntry *nextEntryPtr);
    
    // returns the nextptr of the hashedentry
    // pre: a pointer with nextptr exists
    // post: the nextptr is returned.
    // usage: getNext();
    HashedEntry* getNext ()const;
    
    //private variable
private:
    //a pointer to the next possible entry at a hash spot in the table.
    HashedEntry * nextPtr;
};


#endif
