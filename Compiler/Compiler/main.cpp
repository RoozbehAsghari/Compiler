//
//  main.cpp
//  Compiler
//
//  Created by roozbeh on 11/14/22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;
struct Token
{
    int row,col;
    int blockNo=0;
    string SymbolType;
   
    string name;
};
int main() {
    string lexical[500][5];
    int sh=0;

    Token t=*new Token();
    cout<<"Name"<<"    "<<"Row"<<"    "<<"Column"<<"     "<<"Block Number"<<"     "<<"Symbol Type"<<endl;
    int block=0,i=0;
    int b[100];
    int r=1;
     

      string myText,text;

    ifstream MyReadFile("/Users/roozbeh/Documents/lessons/Compiler/Untitled.txt");
      while (getline(MyReadFile,myText)) {
          istringstream iss(myText);
              string word;
          int t1=0;
          int w=0,f=0,p1=0,p2=0,v=0,in=0,s=0,c=0,e=0,pa1=0,pa2=0,d=0,d1=0,d2=0,n=0,id=0,re=0,plus=0,mines=0,equal=0,accent=0,divide=0,remain=0,assign=0,pp=0,mm=0,zero=0;
          int index=0;

              while(iss >> word) {
                  int flag=0;
                  double lol = atof(word.c_str());
                  if(lol!=0)
                  {
                      flag=1;

                      t.blockNo=b[i];

                      index= myText.find(lol,n);
                      if(index!=-1)
                          t.col=index;
                      n=index+1;                      t.row=r;
                      t.SymbolType="Number";
                      t.name=word;
                      cout<<t.name<<"       "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                      lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                      sh++;
                  }
                  else{

                      if(word=="//")
                      {
                          flag=1;

                          t1++;
                          
                     t1=t1%2;
                      }
                      
                      
                     
                      
                
                   
                      if(word=="if"&& t1==0){
                          flag=1;

                          t.blockNo=b[i];

                          index= myText.find("if",f);
                          if(index!=-1)
                              t.col=index;
                          f=index+1;                      t.row=r;
                          t.SymbolType="keyWord";
                          t.name="if";
                          cout<<t.name<<"       "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      }
                      if(word=="while" && t1==0){
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("while",w);
                              if(index!=-1)
                                  t.col=index;
                              w=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="While";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      }
                      if(word=="{" && t1==0){
                          flag=1;

                          block++;
                          i++;

                          b[i]=block;
                          t.blockNo=b[i];
                          index= myText.find("{",p1);
                          if(index!=-1)
                              t.col=index;
                          p1=index+1;                      t.row=r;
                          t.SymbolType="Punctuator";
                          t.name="{";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                         
                      }
                      
                      
                      
                      if(word=="}" && t1==0){
                          flag=1;

                          t.blockNo=b[i];
                          index= myText.find("}",p2);
                          if(index!=-1)
                              t.col=index;
                          p2=index+1;                            t.row=r;
                          t.SymbolType="Punctuator";
                          t.name="}";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                          t.blockNo--;
                          i--;

                     
                    }
                      
                      if(word=="void"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("void",v);
                              if(index!=-1)
                                  t.col=index;
                            v=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="void";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      if(word=="int"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("int",in);
                              if(index!=-1)
                                  t.col=index;
                            in=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="int";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="return"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("return",re);
                              if(index!=-1)
                                  t.col=index;
                            re=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="return";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      if(word=="+"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("+",plus);
                              if(index!=-1)
                                  t.col=index;
                            plus=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="+";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="++"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("++",pp);
                              if(index!=-1)
                                  t.col=index;
                            pp=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="++";
                          cout<<t.name<<"       "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="--"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("--",mm);
                              if(index!=-1)
                                  t.col=index;
                            mm=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="--";
                          cout<<t.name<<"       "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="-"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("-",mines);
                              if(index!=-1)
                                  t.col=index;
                            mines=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="-";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="="&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("=",assign);
                              if(index!=-1)
                                  t.col=index;
                            assign=index+1;
                              
                    
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="=";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      }
                      if(word=="*"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("*",accent);
                              if(index!=-1)
                                  t.col=index;
                            accent=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="*";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="/"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("/",divide);
                              if(index!=-1)
                                  t.col=index;
                            divide=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="/";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="=="&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("==",equal);
                              if(index!=-1)
                                  t.col=index;
                            equal=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Moghayese";
                          t.name="==";
                          cout<<t.name<<"       "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="%"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("%",remain);
                              if(index!=-1)
                                  t.col=index;
                            remain=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Operator";
                          t.name="%";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"            "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word=="switch"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("switch",s);
                              if(index!=-1)
                                  t.col=index;
                            s=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="switch";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      if(word=="case"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("case",c);
                              if(index!=-1)
                                  t.col=index;
                            c=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="case";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      if(word=="else"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("else",e);
                              if(index!=-1)
                                  t.col=index;
                            e=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="keyWord";
                          t.name="else";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      if(word=="("&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find("(",pa1);
                              if(index!=-1)
                                  t.col=index;
                            pa1=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Punctuator";
                          t.name="(";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word==")"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find(")",pa2);
                              if(index!=-1)
                                  t.col=index;
                            pa2=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Punctuator";
                          t.name=")";
                          cout<<t.name<<"    "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word==";"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find(";",d);
                              if(index!=-1)
                                  t.col=index;
                            d=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Delimeter";
                          t.name=";";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word==":"&& t1==0)
                      {
                          flag=1;

                          t.blockNo=b[i];
                          
                              index= myText.find(";",d1);
                              if(index!=-1)
                                  t.col=index;
                            d1=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Delimeter";
                          t.name=":";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      if(word==","&& t1==0)
                      {
                          flag=1;
                          t.blockNo=b[i];
                          
                              index= myText.find(",",d2);
                              if(index!=-1)
                                  t.col=index;
                            d2=index+1;
                              
                          
                          t.row=r;
                          t.SymbolType="Delimeter";
                          t.name=",";
                          cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                          lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                          sh++;
                      
                      }
                      
                      
                  }
                  if(word=="0"&& t1==0)
                  {
                      flag=1;

                      t.blockNo=b[i];
                      
                          index= myText.find("0",zero);
                          if(index!=-1)
                              t.col=index;
                        zero=index+1;
                          
                      
                      t.row=r;
                      t.SymbolType="Number";
                      t.name="0";
                      cout<<t.name<<"        "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"             "<<t.SymbolType<<endl;
                      lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                      sh++;
                  
                  }
             if(flag==0 && t1==0)
             {
                 t.blockNo=b[i];
                 
                     index= myText.find(word,id);
                     if(index!=-1)
                         t.col=index;
                   id=index+1;
                     
                 
                 t.row=r;
                 t.SymbolType="Identifier";
                 t.name=word;
                 cout<<t.name<<"     "<<t.row<<"        "<<t.col<<"           "<<t.blockNo<<"          "<<t.SymbolType<<endl;
                 lexical[sh][0]=t.name;lexical[sh][1]=to_string(t.row);lexical[sh][2]=to_string(t.col);lexical[sh][3]=to_string(t.blockNo);lexical[sh][4]=t.SymbolType;
                 sh++;
             }
                  flag=0;
              }
        
          r++;
          }
        

    

      MyReadFile.close();
    int porsesh;
    cout<<"do you";
    cin>>porsesh;
    if(porsesh==1)
    {
        for (int ma=0;ma<sh;ma++)
        {
            for(int ja=0;ja<5;ja++)
            {
                cout<<lexical[ma][ja]<<"    ";

            }
            cout<<endl;
        }
    }
    return 0;
}
