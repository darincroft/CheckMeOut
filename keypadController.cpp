#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart->addObserver(this);
  cart = items;
  display.refresh(*cart);
}
