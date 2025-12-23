//
// Created by jxmwa on 12/20/2025.
//

#ifndef CORE_H
#define CORE_H

class Core {
public:
    Core();
    ~Core();
    void run();

private:
    void fixedUpdate(float FIXED_DT);
    void update();

};



#endif //CORE_H

