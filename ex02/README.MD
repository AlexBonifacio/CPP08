<!-- // template <class T, class Container = std::deque<T> > // si on ne precise pas de valeur alors on utilise deque par defaut
// class stack
// {
// 	protected:
// 		Container c;
// };

// std::stack<int> s == std::stack<int, std::deque<int>> s
// std::stack<int, std::vector<int>> s
// stack est un adapateur de conteneur, ce n'est pas un conteneur
// il impose un comportement LIFO avec push, pop, top
// mais laisse le choix du stockage, deque, vector, list

// public:     typedef	       _Sequence			container_type;
// permet de rendre public le type de container
// on utlise typedef typename pour preciser que ce qui suit est un type et lorsque le type est dependant d'un template
// typedef my_int int; -> ok
// typedef T::value_type int -> pas ok
// typedef typename T::value_type int -> ok

// chaque container STL a un type iterator -->