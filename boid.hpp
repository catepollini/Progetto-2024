#ifndef BOID_HPP
#define BOID_HPP

#include "vector.hpp"

namespace pr{class Boid {
    private:
    sim::Vector position_;
    sim::Vector velocity_;

    public:
    Boid(sim::Vector position, sim::Vector velocity);
    sim::Vector get_pos() const;
    sim::Vector get_vel() const;
};
}

#endif