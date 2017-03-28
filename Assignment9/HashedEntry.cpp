//
//  HashedEntry.cpp
//  this class is a subclass of entry and represents a hashed entry into a dictionary (or in this case a hashtable).
//  it has a key and an item connected to that key as well as a next pointer.
//  This class includes all operations of the entry class as well as operations to set next and
//  get next.

//  Assignment9
//
//  Created by Jasmine Jans on 4/30/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#include "HashedEntry.h"

HashedEntry::HashedEntry ()
{
    nextPtr = NULL;
    Entry();
}

HashedEntry::HashedEntry (ItemType newEntry, KeyType newKey)
{
    nextPtr = NULL;
    item =newEntry;
    searchKey = newKey;
}

HashedEntry::HashedEntry (ItemType newEntry, KeyType newKey, HashedEntry *nextEntryPtr)
{
    nextPtr = nextEntryPtr;
    item = newEntry;
    searchKey = newKey;
}

void HashedEntry::setNext (HashedEntry *nextEntryPtr)
{
    nextPtr = nextEntryPtr;
}

HashedEntry* HashedEntry::getNext() const
{
    return nextPtr;
}