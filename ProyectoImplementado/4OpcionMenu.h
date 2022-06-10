/*ESPE
*Enunciado del problema:
*   Realizar el codigo de la catedra en clases (POO)
*Autor 
* Camila Rivera
* Christian Román
*Fecha de creacion
*   10-06-2022
*Fecha de modificacion
*   10 - 06 -2022
*Grupo #2
*Github del grupo:
* https://github.com/Grupo8-4698-EstructuraDeDatos/4698-Grupo8-EstructuradeDatos
*/
#pragma once
#include <string>
#include <functional>
#include <vector>
#include <map>
#include <memory>
    

class MenuOptionArgumentBase
{
public:
    virtual ~MenuOptionArgumentBase() = 0;
};

inline MenuOptionArgumentBase::~MenuOptionArgumentBase() {}

///////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class MenuOptionArgument : public MenuOptionArgumentBase {
public:
    typedef T Type;
    explicit MenuOptionArgument(const Type& value);
    /**
    * @return get_value
    */
    Type get_value();

    /**
    * @param value
    * @return set_value
    */
    void set_value(Type value);
private:
    Type value;
};

template <typename T>
MenuOptionArgument<T>::MenuOptionArgument(const T& value): value(value) {}

template <typename T>
/**
 * @return get_value
 */
T MenuOptionArgument<T>::get_value() {
    return value;
}

template <typename T>
void MenuOptionArgument<T>::set_value(T value) {
    this->value = value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

class MenuOptionArguments {
public:
    MenuOptionArguments();

    template <typename T>
    void add(std::string key, MenuOptionArgument<T> *argument);

    template <typename T>
    void add(std::string key, T value);

    template <typename T>
    /**
    * @return get_value
    */
    T get(std::string key);

    template <typename T>

    /**
    * @param value
    * @return set_value
    */
    void set(std::string key, T value);

    bool has(std::string key);
    
private:
    std::map<std::string, std::unique_ptr<MenuOptionArgumentBase>> *arguments;
};

inline MenuOptionArguments::MenuOptionArguments() {
    arguments = new std::map<std::string, std::unique_ptr<MenuOptionArgumentBase>>();
}

template <typename T>
void MenuOptionArguments::add(std::string key, MenuOptionArgument<T> *argument) {
    (*arguments)[key] = std::unique_ptr<MenuOptionArgumentBase>(argument);
}

template <typename T>
void MenuOptionArguments::add(std::string key, T value) {
    add(key, new MenuOptionArgument<T>(value));
}

template <typename T>
/**
* @return get_value
*/
T MenuOptionArguments::get(std::string key) {
    auto arg = dynamic_cast<MenuOptionArgument<T>&>(*((*arguments)[key]));
    return arg.get_value();
}

template <typename T>

/**
 * @param value
 * @return set_value
 */
void MenuOptionArguments::set(std::string key, T value) {
    auto arg = dynamic_cast<MenuOptionArgument<T>&>(*((*arguments)[key]));
    arg.set_value(value);
}

inline bool MenuOptionArguments::has(std::string key) {
    return !(arguments->find(key) == arguments->end());
}


///////////////////////////////////////////////////////////////////////////////////////////////////

typedef std::function<void(MenuOptionArguments args)> MenuOptionCallback;

class MenuOption {
public:
    MenuOption(std::string label, MenuOptionCallback callback);
    MenuOption(std::string label, MenuOptionCallback callback, bool wait_after_exec);
    MenuOption(std::string label, MenuOptionCallback callback, MenuOptionArguments arguments);
    MenuOption(std::string label, MenuOptionCallback callback, MenuOptionArguments arguments, bool wait_after_exec);
    std::string get_label();
    void execute();
    bool should_wait();
    MenuOptionArguments &get_args();

private:
    std::string label;
    MenuOptionCallback callback;
    bool wait_after_exec = true;
    MenuOptionArguments arguments;
};
