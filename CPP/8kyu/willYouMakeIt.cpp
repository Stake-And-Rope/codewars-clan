/*
 * Kata's URL - https://www.codewars.com/kata/5861d28f124b35723e00005e/train/cpp
 * Difficutly - 8kyu
 * Submitter - karastoyanov
 */

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  // TODO
    if (fuel_left * mpg >= distance_to_pump) {
        return true;
    } else {
        return false;
    }
}
