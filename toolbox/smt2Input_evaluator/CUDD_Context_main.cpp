#include <metaSMT/DirectSolver_Context.hpp>
#include <metaSMT/API/Stack.hpp>
#include <metaSMT/backend/CUDD_Context.hpp>
typedef metaSMT::DirectSolver_Context<metaSMT::Stack<metaSMT::solver::CUDD_Context> > ContextType;
#include "main.cpp"
