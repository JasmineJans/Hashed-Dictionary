//
//  Entry.cpp
//  this class represent an entry into a dictionary. it has a key and
//  and an item connected to that key. his class includes operations to
//  get the item, get the key, set the key and set the item.
//  Assignment9
//
//  Created by Jasmine Jans on 4/30/14.
//  Copyright (c) 2014 Jasmine Jans. All rights reserved.
//

#include "Entry.h"

Entry::Entry()
{
    searchKey = 0;
    item = "";
}

Entry::Entry(ItemType & newEntry, KeyType & Key)
{
    item = newEntry;
    searchKey = Key;
}

Entry::~Entry()
{
    searchKey = 0;
    item = "";
}

ItemType Entry::getItem () const
{
    return item;
}

KeyType Entry::getKey () const
{
    return searchKey;
}

void Entry::setItem (const ItemType & newEntry)
{
    item = newEntry;
}

void Entry::setKey (const KeyType & newKey)
{
    searchKey = newKey;
}