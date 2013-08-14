#ifndef CSYMPY_FUNCTIONS_H
#define CSYMPY_FUNCTIONS_H

#include <gmpxx.h>

#include "basic.h"

namespace CSymPy {

class Function : public Basic {
};

class Sin : public Function {
private:
    Teuchos::RCP<Basic> arg_; // The 'arg' in sin(arg)

public:
    Sin(const Teuchos::RCP<Basic> &arg);
    virtual std::size_t __hash__() const;
    virtual bool __eq__(const Basic &o) const;
    virtual std::string __str__() const;

    bool is_canonical(const Teuchos::RCP<Basic> &arg);
};

// This uses canonicalize:
Teuchos::RCP<Basic> sin(const Teuchos::RCP<Basic> &arg);


} // CSymPy

#endif
