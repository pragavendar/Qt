#ifndef GRAPHICOBJECTS_H
#define GRAPHICOBJECTS_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
 * Compisote design pattern used for when  describes a group of objects
 * that is treated the same way as a single instance of the same type of object
*/
struct GraphicObject{
    virtual void draw() = 0;
};

struct ButtonGrahicObject : GraphicObject{
    string name;
    ButtonGrahicObject(string _name = "btn"):name(_name){}
    void draw(){cout << " Button" << endl;}
};
struct Widget:GraphicObject{
   string name;

   Widget(string _name = "widget"):name(_name){}
   void draw(){cout << "Widget" << endl;}
};

struct CompositeObject : GraphicObject{
    std::vector<GraphicObject*> objs;
    void draw(){
        for(auto &i :objs){
            i->draw();
        }
    }
    void addGraphicObject(GraphicObject *obj){
        objs.push_back(obj);
    }
};

void client(){
    ButtonGrahicObject b1,b2,b3;
    Widget w1,w2,w4;
    CompositeObject obj;
    obj.addGraphicObject(&b1);
    obj.addGraphicObject(&b2);
    obj.addGraphicObject(&b3);
    obj.addGraphicObject(&w1);
    obj.addGraphicObject(&w2);
    obj.addGraphicObject(&w4);
    obj.draw();
}



#endif // GRAPHICOBJECTS_H
