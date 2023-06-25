#!/usr/bin/node

/*
 * Kata's URL - https://www.codewars.com/kata/54edbc7200b811e956000556/train/javascript
 * Difficulty - 8kyu
 * Submitter - karastoyanov
 *
 */

function countSheeps(arrayOfSheep){

    let counter = 0;

    for (let i = 0; i <= arrayOfSheep.length; i++) {
        if (arrayOfSheep[i] == true) {
            counter++;
        }
    }
    return counter;
}

countSheeps([true,  true,  true,  false,
              true,  true,  true,  true ,
              true,  false, true,  false,
              true,  false, false, true ,
              true,  true,  true,  true ,
              false, false, true,  true ]);

