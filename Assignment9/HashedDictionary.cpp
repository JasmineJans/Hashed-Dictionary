//
//  HashedDictionary.cpp
//  This class is a representation of a dictionary. This dictionary holds hashedentries.
//  Each hashedentry must go through a hash function before being put in the dictionary.
//  This class contains operations to add to the dictionary, remove from the dictionary,
//  get the number of items in the dictionary, check to see if the dictionary contains an
//  item, isempty, hash function and get item.

//  Assignment9
//
//  Created by Jasmine Jans on 4/30/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#include "HashedDictionary.h"
#include <string>
#include <iostream>
using namespace std;

HashedDictionary::HashedDictionary ()
{
    itemCount = 0;
    hashTableSize = 0;
}

HashedDictionary::~HashedDictionary ()
{
    clear();
}

bool HashedDictionary::isEmpty () const
{
    if(itemCount == 0)
        return true;
    return false;
}

int HashedDictionary::getNumberOfItems () const
{
    return itemCount;
}

bool HashedDictionary::add (const KeyType & searchKey, const ItemType & newItem)
{
    HashedEntry* newptr = new HashedEntry(newItem, searchKey);
    int hashVal = hashFunc(searchKey);
    if(hashTable[hashVal] == NULL)
    {
        hashTable[hashVal]=newptr;
        hashTableSize++;
    }
    else
    {
        newptr->setNext(hashTable[hashVal]);
        hashTable[hashVal] = newptr;
    }
    itemCount++;
    return true;
}

bool HashedDictionary::remove (const KeyType & searchKey)
{
    int hashVal = hashFunc(searchKey);
    if(hashTable[hashVal] != NULL){
        if(searchKey == hashTable[hashVal]->getKey())
        {
            HashedEntry* ptr = hashTable[hashVal];
            hashTable[hashVal]=hashTable[hashVal]->getNext();
            delete ptr;
            if(hashTable[hashVal] == NULL)
                hashTableSize--;
            itemCount--;
            return true;
        }
        else
        {
            HashedEntry* prev = hashTable[hashVal];
            HashedEntry* cur = prev->getNext();
            while(cur != NULL)
            {
                if(cur->getKey() == searchKey)
                {
                    prev->setNext(cur->getNext());
                    delete cur;
                    if(hashTable[hashVal] == NULL)
                        hashTableSize--;
                    itemCount--;
                    return true;
                }
                else
                {
                    prev = cur;
                    cur = cur->getNext();
                }
            }
        }
    }
    return false;
}

void HashedDictionary::clear()
{
    for(int i = 0; i <=DEFAULT_SIZE; i++){
        while(hashTable[i] !=NULL)
        {
            HashedEntry* temp= hashTable[i]->getNext();
            delete[] hashTable[i];
            hashTable[i] = temp;
        }
    }
    itemCount=0;
    hashTableSize=0;
}

ItemType HashedDictionary::getItem (const KeyType& searchKey) const
{
    int hashVal = hashFunc(searchKey);
    HashedEntry* newptr = hashTable[hashVal];
    while(newptr != NULL)
    {
        if(newptr->getKey() == searchKey)
            return newptr->getItem();
        else
            newptr = newptr->getNext();
    }
    return "No such item exists for the given key!";
}

bool HashedDictionary::contains (const KeyType& searchKey) const
{
    int hashVal = hashFunc(searchKey);
    HashedEntry* newptr = hashTable[hashVal];
    while(newptr != NULL)
    {
        if(newptr->getKey() == searchKey)
            return true;
        else
            newptr = newptr->getNext();
    }
    return false;
}

int HashedDictionary::hashFunc (KeyType searchKey) const
{
    return (searchKey % DEFAULT_SIZE);
}