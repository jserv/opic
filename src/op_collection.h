#ifndef OP_COLLECTION_H
#define OP_COLLECTION_H 1
#include <stdint.h>
#include <stdbool.h>
#include "op_macros.h"
#include "op_trait.h"

OP_BEGIN_DECLS

OP_DECLARE_TYPECLASS(OPCollection);
#define OPCollection_OP_METHODS coll_contains, coll_containsAll, coll_isEmpty, \
  coll_size, coll_toArray, coll_type
OP_DECLARE_METHOD(coll_contains,      bool, OPObject* obj, OPGeneric element);
OP_DECLARE_METHOD(coll_containsAll,   bool, OPObject* obj, OPObject* collection);
OP_DECLARE_METHOD(coll_isEmpty,       bool, OPObject* obj);
OP_DECLARE_METHOD(coll_size,      uint64_t, OPObject* obj);
//OP_DECLARE_METHOD(coll_toArray,       bool, OPObject* obj, void* ptr, size_t* size);
OP_DECLARE_METHOD(coll_type,        OPType, OPObject* obj);

OP_DECLARE_TYPECLASS(OPMutableCollection);
#define OPMutableCollection_OP_METHODS mcoll_initWithType, mcoll_add, mcoll_addAll, \
  mcoll_clear, mcoll_removeIf, mcoll_retainAll
OP_DECLARE_METHOD(mcoll_initWithType, void, OPObject* obj, OPType type);
OP_DECLARE_METHOD(mcoll_add,          bool, OPObject* obj, OPGeneric element);
OP_DECLARE_METHOD(mcoll_addAll,       bool, OPObject* obj, OPObject* collection);
OP_DECLARE_METHOD(mcoll_clear,        void, OPObject* obj);
OP_DECLARE_METHOD(mcoll_removeIf,     bool, OPObject* obj, fp_predicate predicate);
OP_DECLARE_METHOD(mcoll_retainAll,    bool, OPObject* obj, OPObject* collection);
//OP_DECLARE_METHOD(mcoll_remove,       bool, OPObject* obj, OPGeneric element);
//OP_DECLARE_METHOD(mcoll_removeAll,    bool, OPObject* obj, OPObject* collection);

OP_END_DECLS
#endif /* OP_COLLECTION_H */