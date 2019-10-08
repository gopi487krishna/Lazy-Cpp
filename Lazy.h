#include<optional>
#include<functional>
template<typename T>
class Lazy
{
   std::optional<T> m_resource;
   std::function<T()>m_ctor_func;
public:
   Lazy(std::function<T()>ctor_func)
   {
       m_ctor_func=ctor_func; 
   }
   std::optional<T> operator ->()
   {
 	if(!m_resource)
	{
		m_resource=m_ctor_func();
	}
     return m_resource;
   }
};
