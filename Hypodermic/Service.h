#ifndef		HYPODERMIC_SERVICE_H_
# define	HYPODERMIC_SERVICE_H_

# include <typeinfo>


namespace Hypodermic
{

	class Service
	{
	public:
        virtual const std::type_info& typeInfo() const = 0;
	};

} // namespace Hypodermic


#endif /* !HYPODERMIC_SERVICE_H_ */