#ifndef PRATOS_H
#define PRATOS_H

typedef struct
{
    int prioridade;
    int tempo;
    char nome[51];
}Prato;

const Prato pratos[]=
{
        {83390, 467, "bubble-and-squeak-88"},
    {142233, 34, "steak-and-ale-pie-688"},
    {151430, 761, "bubble-and-squeak-144"},
    {155895, 531, "cottage-pie-785"},
    {195253, 80, "steak-and-ale-pie-959"},
    {14734, 501, "bubble-and-squeak-945"},
    {86327, 329, "poitin-429"},
    {185626, 112, "cottage-pie-630"},
    {229398, 367, "fish-and-chips-915"},
    {10789, 905, "ploughman's-lunch-655"},
    {298730, 397, "bubble-and-squeak-646"},
    {167124, 638, "cottage-pie-242"},
    {275730, 667, "steak-and-ale-pie-704"},
    {39414, 370, "cottage-pie-52"},
    {16487, 407, "poitin-717"},
    {36280, 846, "steak-and-ale-pie-782"},
    {50431, 579, "ploughman's-lunch-614"},
    {106731, 435, "ploughman's-lunch-247"},
    {231478, 926, "fish-and-chips-752"},
    {282024, 511, "fish-and-chips-856"},
    {185641, 975, "poitin-278"},
    {139333, 369, "steak-and-ale-pie-751"},
    {280132, 70, "fish-and-chips-635"},
    {258170, 80, "fish-and-chips-513"},
    {77247, 928, "fish-and-chips-74"},
    {283426, 349, "steak-and-ale-pie-847"},
    {186363, 946, "ploughman's-lunch-258"},
    {236390, 563, "steak-and-ale-pie-715"},
    {27353, 204, "fish-and-chips-511"},
    {290401, 69, "poitin-155"},
    {222457, 830, "fish-and-chips-380"},
    {243699, 446, "ploughman's-lunch-181"},
    {85151, 162, "cottage-pie-688"},
    {201888, 509, "poitin-867"},
    {42713, 78, "bubble-and-squeak-821"},
    {272576, 341, "fish-and-chips-989"},
};

const int num_pratos = sizeof(pratos) / sizeof(pratos[0]);

#endif // PRATOS_H
