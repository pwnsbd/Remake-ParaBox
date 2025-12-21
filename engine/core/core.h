//
// Created by jxmwa on 12/20/2025.
//

#ifndef PARABOX_CORE_H
#define PARABOX_CORE_H

class Core {
public:
    Core();
    ~Core();
    void run();

private:
    void fixedUpdate(float FIXED_DT);
    void update();

};



#endif //PARABOX_CORE_H

