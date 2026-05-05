/*
    por si no funciona el launch.json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug C++",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "build cpp"
        }
    ]
}*/
/*
    por si no funciona el tasks.json
    {
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build cpp",
            "type": "cppbuild",
            "command": "g++",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": ["$gcc"],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
*/
/*
    Tnodo *Start;
    Tnodo *CrearListaVacia(){
        return NULL;
    }
    Start = CrearListaVacia;
    
    typedef struct Tnodo
    {
        int valor;
        Tnodo Sig;
    }Tnodo;


    Nuevo Nodo
    Tnodo * CrearNodo(int valor)
    {
        Tnodo *NNodo = (Tnodo *) malloc (sizeof(Tnodo));
        NNodo->Valor = valor;
        NNodo->siguiente = NULL;
        return NNodo;
    }
    
    Insercion: al inicio de lista
    typedef struct Tnodo
    {
        int valor;
        Tnodo sig;
    }Tnodo;

    void InsertarNodo(Tnodo ** Start,Tnodo *Nodo)
    {
        Nodo->siguiente = *Start;
        *Start = Nodo;
    }

    Insercion al final de la lista
    void InsertarAlFinal(Tnodo *Start,Tnodo *Nodo){
        Tnodo * Aux = Start;
        while(Aux->siguiente)
        {
            Aux=Aux->siguiente;
        }
        Aux->siguiente=Nodo
    }
    
    Buscar un elemento en la lista
    Tnodo *buscarNodo(Tnodo * Start,int idBuscado){
        Tnodo *Aux = Start;
        while(Aux && Aux->id != idBuscado){
            Aux=Aux -> siguiente;
        }
            return Aux;
    }

    eliminacion de un nodo
    Tnodo *QuitarNodo(Tnodo **Start,int dato){
        Tnodo *nodoAux ? (*Start);
        Tnodo *nodoAnt = NULL;
        while (nodoAux != NULL && nodoAux->dato != dato){
            nodoAnt = nodoAux;
            nodoAux = nodoAux->siguiente;
        }
        if (nodoAux != NULL){
            if (nodoAux == (*Start)){
                (*Start) = nodoAux->siguiente;
            }else{
                nodoAnt->siguiente = nodoAux->siguiente;
            }
                nodoAux->siguiente = NULL;
        }
                return (nodoAux);
    }
    
    eliminar el nodo
    void EliminarNodo(Tnodo *nodo){
        if(nodo)free(nodo);
    }
*/