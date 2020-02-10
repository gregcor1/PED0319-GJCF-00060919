#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <conio.h> // para poder usar el getch

using namespace std;
   struct adress{
      string numberh;
      string col;
      string mum;
      string Dep;
      String Depa[

   }
   
   struct main info{}
   //tiempo de espera
   
   struct delibery{
       string name;
       
       string adre;
          int cel;
          char pago;
   }
   
   struct restaurant{
   string namer;
   int personn;
   char pago;
 string vector[3];
       vector[0]=pizza;
       vector[1]=pasta;
       vector[2]=lasagna;

   }
   typedef Pedido T;
const T noValido = {{" "},-1,-1,-1,-1};

// Registros: nodo y Cola
struct Nodo{
    T elemento;
    struct Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

// Prototipos de funciones para Cola
void initialize(Cola *q);
bool empty(Cola *q);
T front(Cola *q);
T back(Cola *q);
void enqueue(Cola *q, T x);
T dequeue(Cola *q);
int size(Cola *q);

struct pizza{
    Cola colaPedidos;
    int tipodepago;
};
pizza pizzafest;


void add();void add2();  void show1(); void remove(); void show(); void order(); void login(); 
   int seemain(); void acceses();void nextd(); void nextr(); void timed(); void timer(); void calculate();
   
int main{

cout<<"----------------------------------------------------------------------------"<<endl;
cout<<"|                  BIENVENIDO A Pizza fest-GJCF-00060919                   |"<<endl;
cout<<"|  para ingresar al sistema escribir de logueo por favor                   |"<<endl;
cout<<"|  escribir la palabra secreta pizza                                       |"<<endl;
cout<<"|                                                                          |"<<endl;
cout<<"----------------------------------------------------------------------------"<<endl;
cout << "Opcion: ";
    cin >> opcion; cin.ignore();
    
    if(opcion == pizza)
        login();}
    else if(opcion == PIZZA){
        login();}
    else if(opcion == Pizza){
        login() ;}

}
void login(){
    int opcion = 0;
cout<<"----------------------------------------------------------------------------"<<endl;
cout<<"|            BIENVENIDO AL SISTEMA DE USUARIOS                             |"<<endl;
cout<<"| 1. ADMINISTARDOR                                                         |"<<endl;
cout<<"| 2. TRABAJADOR                                                            |"<<endl;
cout<<"| 3. SALIR                                                                 |"<<endl;
cout<<"----------------------------------------------------------------------------"<<endl;
    cout << "Opcion: ";
    cin >> opcion; cin.ignore();
    
    if(opcion == 1)
        acceses();}
    else if(opcion == 2){
        acceses();}
    else if(opcion == 3){
        return 0 ;}

        else if(opcion>3!){
        cout << "opcion incoreecta\n";
        return 0;}

using namespace std;

void acceses()
{
    vector<string> usuarios;
    vector<string> claves;
    
    // Se añaden usuarios al vector
    usuarios.push_back("admin");
    usuarios.push_back("trabajador");
   
    
    // Se añaden claves al vector
    claves.push_back("iostream");
    claves.push_back("iostream");
   
    
    string usuario, password;
    
    int contador = 0;
    bool ingresa = false;
    
    do {
        system("cls");
        cout << "|----------------------|"<< endl;
        cout << "|  LOGIN DE USUARIO    |" << endl;
        cout << "|  ----------------    |" << endl;
        cout << "|                      |"<< endl;
        cout << "|----------------------|"<< endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);
        
        char caracter;
        
        cout << "\tPassword: ";
        caracter = getch();
        
        password = "";
        
        while (caracter != ENTER) {
        
            if (caracter != BACKSPACE) {
                password.push_back(caracter);
                cout << "*";
                
            } else {
                if (password.length() > 0) {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }
            
            caracter = getch();
        }
        
        for (int i = 0; i < usuarios.size(); i++) {
            if (usuarios[i] == usuario && claves[i] == password) {
                ingresa = true;
                break;
            }
        }
        
        if (!ingresa) {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }
        
    } while (ingresa == false && contador < 3);
    
    if (ingresa == false) {
        cout << "\n\tUsted no pudo ingresar al sistema. CHAOOOOOOO" << endl;
    } else {
        cout << "\n\n\tBienvenido al sistema" << endl;
       seemain();
    }

    cin.get();
    
    return 0;
}


       void seemain();
        for(int i = 0; i <= 12; i++)
    bool continuar = true;
    do{
        int opcion = 0;
        cout << " 1. Agregar orden a domicilio.\n";
        cout << "2.Agregar orden en restaurante.\n";
        cout << "3. Ver ordenes a domicilio.\n";
        cout << "4.Ver ordenes en restaurante.\n";
        cout << "5.Despachar ordenes a domicilio.\n";
        cout << "6.Despachar ordenes a restaurante.\n";
        cout << "7.Ver tiempo promedio de espera domicilio.\n";
        cout << "8.Ver tiempo promedio de espera restaurante.\n";
        cout << "9.Cancelar orden .\n"; //(domicilio o restaurante, solo admin)
        cout << "10.Calcular total de ventas.\n";
        cout << "11.Cambiar de usuario.\n";
        cout << "12.Salir.\n";
       
        cout << "Opcion: ";
        cin >> opcion; cin.ignore();
        
        switch(opcion){
            case 1: add(); break;
            case 2: add2(); break;
            case 3: show(); break;
            case 4: show1(); break;
            case 5: nextd(); break;
            case 6: nextr(); break;
            case 7: timed(); break;
            case 8: timer(); break;
            case 9: remove(); break;
            case 10: calculate(); break;
            case 11: login(); break;
            case 12: continuar = false;
            default: cout << "Opcion no valida.\n"; break;
        }
    }while(continuar);

    return 0;
}
   
   void initialize(Cola *q){
    q->frente = NULL;
    q->final = NULL;
}

bool empty(Cola *q){
    return (q->frente==NULL) ? true : false;
}

T front(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    return (q->frente)->elemento;
}

T back(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    return (q->final)->elemento;
}

void enqueue(Cola *q, T x){
    Nodo *unNodo = new Nodo;
    unNodo->elemento = x;
    unNodo->siguiente = NULL;
    
    if(q->final==NULL)
        q->frente = unNodo;
    else
        (q->final)->siguiente = unNodo;
        
    q->final = unNodo;
}

T dequeue(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    Nodo *unNodo = q->frente;
    T x = unNodo->elemento;
    q->frente = unNodo->siguiente;
    if(q->frente==NULL)
        q->final = NULL;
    delete(unNodo);
    return x;
}

int size(Cola *q){
    Cola colaTemporal;
    initialize(&colaTemporal);
    
    int contador = 0;
    // Transfiriendo desde q hasta colaTemporal
    while(!empty(q)){
        T elemento = dequeue(q);
        enqueue(&colaTemporal, elemento);
        contador++;
    }
    // Transfiriendo desde colaTemporal hasta q
    while(!empty(&colaTemporal)){
        T elemento = dequeue(&colaTemporal);
        enqueue(q, elemento);
    }
    return contador;
}

// Funciones 
void add(){
    //datos del pedido
    Pedido unPedido;
    cout << "Digite su name: "; getline(cin, unPedido.name);
    cout << "Dígite su oreden"; getline(cin, unpedido.)
    cout << "Numero de la adre: "; cin >> unPedido.adre; cin.ignore();
    cout << "su número de num: "; cin >> unPedido.num; cin.ignore();
    cout << "Tipo de pago: "; cin >> unPedido.tipo; cin.ignore();

    void add1(){
    // datos del pedido
    Pedido unPedido;
    cout << "Digite su name: "; getline(cin, unPedido.name);
    cout << "Numero de la adre: "; cin >> unPedido.adre; cin.ignore();
    cout << "su número de num: "; cin >> unPedido.num; cin.ignore();
    cout << "Tipo de pago: "; cin >> unPedido.tipo; cin.ignore();
  
    unPedido.tiempo = (unPedido.num+unPedido.tipo) * 90;
    
    // Agregar a la cola
    enqueue(&pizzafest.colaPedidos, unPedido);
    //  contadores
    pizzafest.tipodepago += (unPedido.num+unPedido.tipo);
}

void show(){
    cout << "Pedidos en espera: " << size(&pizzafest.colaPedidos) << endl;
    cout << "tipo de pagos: " << pizzafest.tipodepago << endl;
}

void show1(){
    cout << "Pedidos en espera: " << size(&pizzafest.colaPedidos) << endl;
    cout << "tipo de pagos: " << pizzafest.tipodepago << endl;
}

void nextd(){
    Pedido pedidoDespachado = dequeue(&pizzafest.colaPedidos);
    cout << "Familia " << pedidoDespachado.name << " su pedido esta listo\n";
    cout << "Se encuentran en la adre " << pedidoDespachado.adre << endl;
}
void nextr(){
    Pedido pedidoDespachado = dequeue(&pizzafest.colaPedidos);
    cout << "Familia " << pedidoDespachado.name << " su pedido esta listo\n";
    cout << "Se encuentran en la adre " << pedidoDespachado.adre << endl;
}

void vertodos(){
    Cola colaTemporal;
    initialize(&colaTemporal);
    
    // Transfiriendo desde pizzafest.colaPedidos hasta colaTemporal
    while(!empty(&pizzafest.colaPedidos)){
        Pedido unPedido = dequeue(&pizzafest.colaPedidos);
        enqueue(&colaTemporal, unPedido);
        
        cout << "Info del pedido: " << unPedido.name << ", ";
        cout << "num: " << unPedido.num << ", ";
        cout<<"si su pago es por tarjeta poner c si es cash poner p"<<
        cout << "tipo de pago: " << unPedido.tipo << ", ";
        
    }
    // Transfiriendo desde colaTemporal hasta pizzafest.colaPedidos
    while(!empty(&colaTemporal)){
        T elemento = dequeue(&colaTemporal);
        enqueue(&pizzafest.colaPedidos, elemento);
    }
}
   
   