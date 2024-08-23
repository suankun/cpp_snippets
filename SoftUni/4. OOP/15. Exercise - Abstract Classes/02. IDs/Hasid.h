#ifndef _HAS_ID_H_
#define _HAS_ID_H_


struct HasId {

    virtual int getId() const = 0;

    virtual ~HasId() = default;

};


#endif  // _HAS_ID_H_