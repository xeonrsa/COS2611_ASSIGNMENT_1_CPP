template <class Type>
class orderedLinkedList
{
public:
    …

    void mergeLists(orderedLinkedList<Type> &list1,
                    orderedLinkedList<Type> &list2);
        //This function creates a new list by merging the
        //elements of list1 and list2.
        //Postcondition: first points to the merged list; list1
        // and list2 are empty



};


template <class Type>
void orderedLinkedList::mergeLists(orderedLinkedList<Type> &list1,
                                   orderedLinkedList<Type> &list2)
{
    // Declare Iterator Variables for the List
    linkedListIterator<Type> ite1 = list1.begin();
    linkedListIterator<Type> ite2 = list2.begin();

    // Insert Elements of first list into new list
    while (ite1 != list1.end())
    {
        insert(*ite1);
        ++ite1;
    }

    // Insert Elements of second list into new list
    while (ite2 != list2.end())
    {
        insert(*ite2);
        ++ite2;
    }

    // Delete the elements of both lists
    list1.destroyList();
    list2.destroyList();
}
