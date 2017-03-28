//
//  Entry.h
//  this class represent an entry into a dictionary. it has a key and
//  and an item connected to that key. his class includes operations to
//  get the item, get the key, set the key and set the item.
//
//  Assignment9
//
//  Created by Jasmine Jans on 4/27/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#ifndef Assignment9_Entry_h
#define Assignment9_Entry_h
#include<string>
using namespace std;

typedef string ItemType;
typedef int KeyType;

class Entry
{
    //operations and constructors
public:
    //default constutor, sets item to "" and key to 0.
    Entry();
    //constructor that sets item to newEntry and searchkey to Key
    Entry(ItemType & newEntry, KeyType & Key);
    //destructor
    ~Entry();
    
    // returns the item of type itemType
    // pre: an item exists
    // post: none.
    // usage: getItem();
    ItemType getItem () const;
    
    // returns the key of type KeyType
    // pre: a key exists
    // post: none.
    // usage: getKey();
    KeyType getKey () const;
    
    // sets the item of the entry
    // pre: an entry exists
    // post: none.
    // usage: setItem(newitem);
    void setItem (const ItemType & newEntry);
  
    //private functions and
protected:
    //the item in the entry
    ItemType item;
    //the key of the item in the entry
    KeyType searchKey;
    
    // sets the key of the entry
    // pre: a key exists
    // post: none.
    // usage: setKey(newKey);
    void setKey (const KeyType & newKey);
};

#endif
