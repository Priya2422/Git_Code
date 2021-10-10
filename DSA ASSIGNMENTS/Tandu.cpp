#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

struct poly
{
    int coeff;
    int x;
    int y;
    int z;
    struct poly * next;
};

class polynomial
{
private :
    poly *head;

public:
    polynomial():head(NULL)
    {
    }

    void getdata();
    void display();
    void insert(poly *prv,poly *curr,poly *p);
    polynomial operator + (polynomial );
};

polynomial polynomial :: operator +(polynomial px2)
{
    polynomial px;
    poly *t1,*t2,*t3,*last;
    t1 = head;
    t2 = px2.head;
    px.head = NULL;

    while(t1 != NULL && t2 != NULL)
    {
        t3 = new poly;
        t3->next = NULL;
        if(t1->x == t2->x && t1->y == t2->y && t1->z == t2->z)
        {
            t3->coeff = t1->coeff + t2->coeff;
            t3->x = t1->x;
            t3->y = t1->y;
            t3->z = t1->z;
            t1 = t1->next;
            t2 = t2->next;
        }
        elseif(t1->x > t2->x)
        {    t3->coeff = t1->coeff;
            t3->x = t1->x;
            t3->y = t1->y;
            t3->z = t1->z;
            t1 = t1->next;
        }
        elseif(t1->x < t2->x)
        {       t3->coeff = t2->coeff;
            t3->x = t2->x;
            t3->y = t2->y;
            t3->z = t2->z;
            t2 = t2->next;
        }
        elseif(t1->y > t2->y)
        {    t3->coeff = t1->coeff;
            t3->x = t1->x;
            t3->y = t1->y;
            t3->z = t1->z;
            t1 = t1->next;
        }
        elseif(t1->y < t2->y)
        {    t3->coeff = t2->coeff;
            t3->x = t2->x;
            t3->y = t2->y;
            t3->z = t2->z;
            t2 = t2->next;
        }
        elseif(t1->z > t2->z)
        {    t3->coeff = t1->coeff;
            t3->x = t1->x;
            t3->y = t1->y;
            t3->z = t1->z;
            t1 = t1->next;
        }
        elseif(t1->z < t2->z)
        {    t3->coeff = t2->coeff;
            t3->x = t2->x;
            t3->y = t2->y;
            t3->z = t2->z;
            t2 = t2->next;
        }
        if(px.head == NULL)
            px.head = t3;
        else
            last->next = t3;
        last = t3;
    }
    if(t1 == NULL)
        t3->next = t2;
    else
        t3->next = t1;
    return px;

}

void polynomial :: insert(poly *prv,poly *curr,poly *node)
{
    if(node->x == curr->x && node->y == curr->y && node->z == curr->z)
    {
        curr->coeff += node->coeff;
        delete node;
    }
    elseif((node->x > curr->x) || (node->x == curr->x && node->y > curr->y) || (node->x == curr->x && node->y == curr->y && node->z > curr->z))
    {
        node->next = curr;
        prv->next = node;
    }
    else
    {
        prv = curr;
        curr = curr->next;
        if(curr == NULL)
        {
            prv->next = node;
            node->next = NULL;
            return;
        }
        insert(prv,curr,node);
    }
    return;
}

void polynomial :: getdata()
{
    int tempcoeff;
    poly *node;
    while(1)
    {    cout << endl << "Coefficient : ";

    cin >> tempcoeff;
        if (tempcoeff==0)
            break;
        node = new poly;
        node->coeff = tempcoeff;
        cout << endl << "Power of X : ";
        cin >> node->x;
        cout << endl << "Power of Y : ";
        cin >> node->y;
        cout << endl << "Power of Z : ";
        cin >> node->z;
        if(head == NULL)
        {
            node->next = NULL;
            head = node;
        }
        elseif(node->x == head->x && node->y == head->y && node->z == head->z)
        {
            head->coeff += node->coeff;
            delete node;
        }

        elseif((node->x > head->x) || (node->x == head->x && node->y > head->y) || (node->x == head->x && node->y == head->y && node->z > head->z))
        {
            node->next = head;
            head = node;
        }
        elseif (head->next == NULL)
        {
            head->next = node;
            node->next = NULL;
        }
        else
            insert(head,head->next,node);
    }
}

void polynomial :: display()
{
    poly *temp;
    temp = head;
    cout << endl << "Polynomial :: ";
    while(temp != NULL)
    {
        if(temp->coeff < 0)
            cout << " - ";
        cout << abs(temp->coeff);
        if(temp->x != 0)
            cout << "x^" << temp->x;
        if(temp->y != 0)
            cout << "y^" << temp->y;
        if(temp->z != 0)
            cout << "z^" << temp->z;
        if(temp->next->coeff > 0)
            cout << " + ";
        temp = temp->next;
    }
    cout << " = 0";
}

void main()
{
    polynomial px1,px2,px3;
    clrscr();
    px1.getdata();
    px2.getdata();
    px3 = px1 + px2;
    px1.display();
    px2.display();
    px3.display();
    getch();
}