#ifndef __AST_VISITOR_H__
#define __AST_VISITOR_H__

#include "ASTBlock.hh"
#include "ASTBoolean.hh"
#include "ASTBranch.hh"
#include "ASTCommand.hh"
#include "ASTCondition.hh"
#include "ASTNoOp.hh"
#include "ASTNumeric.hh"
#include "ASTRequire.hh"
#include "ASTSieve.hh"
#include "ASTString.hh"
#include "ASTTag.hh"
#include "ASTTest.hh"

namespace sieve
{

class ASTVisitor {
public:
    virtual void walk( ASTSieve *root ) =0;

    virtual void visit( ASTBlock* ) =0;
    virtual void visit( ASTBoolean* ) =0;
    virtual void visit( ASTBranch* ) =0;
    virtual void visit( ASTCommand* ) =0;
    virtual void visit( ASTCondition* ) =0;
    virtual void visit( ASTNoOp* ) =0;
    virtual void visit( ASTNumeric* ) =0;
    virtual void visit( ASTRequire* ) =0;
    virtual void visit( ASTSieve* ) =0;
    virtual void visit( ASTString* ) =0;
    virtual void visit( ASTTag* ) =0;
    virtual void visit( ASTTest* ) =0;
};

} // namespace sieve

#endif
