#include "Mover.h"
#include "Position.h"
#include "Vector.h"
#include "IStepperRegistrar.h"

Mover::Mover(Position& pos, const Position& target,
             SpeedQuantity speed, IStepperRegistrar& registrar)
    : pos_(pos)
    , target_(target)
    , speed_(speed)
    , registrar_(registrar)
{
    registrar_.suscribe(*this);
}

Mover::~Mover()
{
    registrar_.unsuscribe(*this);
}

void Mover::teleport() const
{
    pos_.x = target_.x;
    pos_.y = target_.y;
}

void Mover::step(TimeQuantity elapsed)
{
    const Direction direct = normalize(make_vector(pos_, target_));
    pos_.x += direct.x * (speed_ * elapsed);
    pos_.y += direct.y * (speed_ * elapsed);
}

