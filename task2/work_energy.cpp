//
// Created by shiva on 15-09-2024.
//
#include <iostream>

class calc{
    public:
        static float work_done(float force, float distance){
            float work_done = force*distance;
            return work_done;
        }
        static float change_in_kinetic(float force, float distance){
            float del_KE = force*distance;
            return del_KE; // according to work energy theorem "del K.E = work done on that object"
        }
};


//for testing
int main(){
    float f = 100;
    float d = 50;
    float work, delta_KE;
    work = calc::work_done(f,d);
    std::cout<<"work done is "<<work<<std::endl;
    delta_KE = calc::change_in_kinetic(f, d);
    std::cout<<"change in kinetic energy is "<<delta_KE<<std::endl;
    return 0;
}