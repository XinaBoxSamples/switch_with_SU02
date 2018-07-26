void main_code(void) {
  if (SU02.getState()) {

    OD01.set2X();
    OD01.println("    ON");
    OD01.set1X();
    OD01.println("");
    OD01.println("Please toggle the");
    OD01.println("power switch.");
  } else {
    OD01.set2X();
    OD01.println("    OFF");
    OD01.set1X();
    OD01.println("");
    OD01.println("Please toggle the");
    OD01.println("power switch.");
  }
}

