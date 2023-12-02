#include<iostream>
using namespace std;
class button
{
public:
    static int total_button;
    int button_id,font_size,width,height;
    string name,caption,fill_color;
    string border_color,font,font_color,border_style;
    button(int id)
    {
        total_button+=1;
        button_id=id;
        font_size=12;
        width=30;
        height=20;
        name="Button1";
        caption="Disney";
        fill_color="Red";
        border_color="Black";
        font="Times New Roman";
        font_color="Black";
        border_style="Potrait";
    }
    button(button &b_copy)
    {
        total_button=b_copy.total_button;
        button_id = b_copy.button_id;
        font_size = b_copy.font_size;
        width = b_copy.width;
        height = b_copy.height;
        name = b_copy.name;
        caption = b_copy.caption;
        fill_color = b_copy.fill_color;
        border_color = b_copy.border_color;
        font = b_copy.font;
        font_color = b_copy.font_color;
        border_style = b_copy.border_style;
    }
    void show_button_properties()
    {
        cout<<"\n-------------------------------------\n";
        cout<<"BUTTON ID:"<<button_id;
        cout<<"\nNAME:"<<name;
        cout<<"\nCAPTION:"<<caption;
        cout<<"\nFILL COLOR:"<<fill_color;
        cout<<"\nBORDER COLOR:"<<border_color;
        cout<<"\nBORDER STYLE:"<<border_style;
        cout<<"\nFONT:"<<font;
        cout<<"\nFONT SIZE:"<<font_size;
        cout<<"\nFONT COLOR:"<<font_color;
        cout<<"\nWIDTH:"<<width;
        cout<<"\nHEIGHT:"<<height;

    }
    void get_propertiesm(int id,string n,int f_size)
    {
        button_id=id;
        name=n;
        font_size=f_size;

    }
    void get_propertiesm(string cap,string fill_clr)
    {
        caption=cap;
        fill_color=fill_clr;
    }
    void get_propertiess(int w,int h,string b_clr)
    {
        width=w;
        height=h;
        border_color=b_clr;
    }
    void get_propertiess(string f, string f_clr, string f_style)
    {
        font=f;
        font_color=f_clr;
        border_style=f_style;
    }

};
int button::total_button=0;
int main()
{
    int i=0,id,num=1;
    button *b[100];
    while(num==1)
    {
        cout<<"Enter the button id:";
        cin>>id;
        b[i]=new button(id);
        cout << "DEFAULT VALUES OF BUTTON:";
        b[i]->show_button_properties();
        cout << "\n---------------------------------------\n";
        b[i]->get_propertiesm(id, "B1", 15);
        b[i]->get_propertiesm("Charm", "Violet");
        b[i]->get_propertiess(100, 50, "Grey");
        b[i]->get_propertiess("Arial", "Blue", "Math");
        cout << "UPDATED VALUES OF BUTTON:";
        b[i]->show_button_properties();
        i++;
        cout<<"Do you want to continue(1/0)?";
        cin>>num;
    }
    button b1(*b[0]);
    cout << "\nVALUES OF NEW OBJECT(Using copy constructor):";
    b1.show_button_properties();
}

