#include<bits/stdc++.h>
using namespace std;
class arr
{
private:
    int sizee;
    int length;
    int*item;
public:
    arr(int arrsize)
    {
sizee =arrsize;
length=0;
item= new int [arrsize];
    }
   void fil()
   {
       int num_of_items;
       cout<<"How Many items you want to fill"<<endl;
       cin>>num_of_items;
       if(num_of_items >sizee)
       {
           cout<<"You Cannot exceed the array size"<<endl;
           return;
       }else {
           for (int i=0; i< num_of_items;i++)
           {

               cout<<"Enter Item num "<<i<<endl;
               cin>>item[i];
               length++;


       }
   }
   }
   void display ()
   {
       cout<<"Display ArraybItems"<<endl;
              for (int i=0; i< length;i++)
              {
                  cout<<item[i]<<" ";
              }
              cout<<endl;

   }
   int getsize()
   {
       return sizee;
   }
   int getlength()
   {
       return length;
   }
   int Search (int key)
   {
       int index =-1;
       for (int i=0; i< length;i++)
       {
           if (item[i] == key){
            index =i;
           break;
           }

       }
          return index;
   }
   void append(int newitem)
   {
       if (length< sizee)
       {
           item[length] = newitem;
           length++;
       }else {
           cout<<"Array Is Full"<<endl;
       }
   }
   void Insert (int index, int newitem)
   {
       if (index >=0 && index<sizee)
       {
          for(int i= length ; i>index ; i-- )
          {
              item[i]= item[i-1];

          }
          item[index]=newitem;
            length++;
       }else
       {
              cout<<"Error - index out of Range"<<endl;
       }
   }
void Delete (int index)
{
         if (index >=0 && index<sizee)
         {
                for(int i=index ; i<length -1 ; i++)
                {
                    item[i]= item[i+1];
                    length--;
                }
         }   else
       {
              cout<<"Error - index out of Range"<<endl;
       }
}
void enlarge (int newsize)
{
    if (newsize<=sizee)
    {
        cout<<"New size must be Large"<<endl;
        return;
    }else {
        sizee= newsize;
        int *temp= item;
        item = new int [newsize];
        for (int i=0; i<length;i++)
        {
            item[i]=temp[i];
        }
        delete[]temp;
    }
}
void Merge(arr other)
{
    int newsize= sizee +other.getsize();
      int *temp= item;
        item = new int [newsize];
          for (int i=0; i<length;i++)
        {
            item[i]=temp[i];
        }
        delete[]temp;
        int j=length;
        for (int i=0; i<other.getlength();i++)
        {
            item[j]=other.item[i];
            j++;
        }
        length=length + other.getlength();
        sizee= newsize;
}
};
int main()
{
    int arrsize ;
    cout<<"Enter The Array Size"<<endl;
    cin>>arrsize;
 arr myarr (arrsize);
 myarr.fil();
 cout<<"Array Size "<<myarr.getsize()<<endl;
 cout<<"Array Length "<<myarr.getlength()<<endl;
 myarr.display();
 /*
 cout<<"Enter The Value To Search "<<endl;
 int key ;
 cin>>key;
int index= myarr.Search(key);
 if (index==-1)
 {
     cout<<"Item not found"<<endl;
 }else{
        cout<<"Item found="<<index<<endl;
 }

 int newitem;

 cout<<"Enter New Item"<<endl;
cin>>newitem;
 myarr.append(newitem);
  myarr.display();

int index;
  cout<<"Enter Index & item"<<endl;
  cin>>index;
  cin>>newitem;
   myarr.Insert(index,newitem);
     myarr.display();
      cout<<"Array Size "<<myarr.getsize()<<endl;
 cout<<"Array Length "<<myarr.getlength()<<endl;

 int index;
  cout<<"Enter The index Delete"<<endl;
    cin>>index;
   myarr.Delete(index);
        myarr.display();
      cout<<"Array Size "<<myarr.getsize()<<endl;
 cout<<"Array Length "<<myarr.getlength()<<endl;

 int newsize;
 cout<<"Enter New Size"<<endl;
 cin>>newsize;
 myarr.enlarge(newsize);
       cout<<"Array Size "<<myarr.getsize()<<endl;
 cout<<"Array Length "<<myarr.getlength()<<endl;
  myarr.display();
*/
 arr other(3);
 cout<<"New array other"<<endl;
  other.fil();
   myarr.Merge(other);
          cout<<"Array Size "<<myarr.getsize()<<endl;
 cout<<"Array Length "<<myarr.getlength()<<endl;
   myarr.display();
    return 0;
}

