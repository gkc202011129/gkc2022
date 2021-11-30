GKC Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/GKC-Project/GKC.svg?branch=master)](https://travis-ci.org/GKC-Project/GKC) [![GitHub version](https://badge.fury.io/gh/GKC-Project%2FGKC.svg)](https://badge.fury.io/gh/GKC-Project%2FGKC)

GKC is a cutting-edge cryptocurrency with many functions that most other cryptocurrencies do not have.

1. The POS function design with entrusted PO is adopted, and the number of DPOS nodes is not limited. Currently, there are more than 110 effective DPOS nodes;
2. Use sigma protocol for anonymous transactions;
3. Fast transactions with guaranteed zero confirmation transactions, which we call SwiftTX;
4. Decentralized blockchain voting provides consensus for the advanced consensus-based Masternode technology, which is used to protect the network and provide the above functions. Each Masternode has a 10K GKC mortgage;
5. Integrated EVM virtual, with Turing complete smart contract.

### Build
See depends/README.md


### Coin Specs
<table>
<tr><td>Algo</td><td>scrypt</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>PoW Coin Supply</td><td>23,509,830 GKC</td></tr>
<tr><td>PoS Coin Supply</td><td>5,942,999 GKC</td></tr>
<tr><td>Season Supply</td><td>2,464,800 GKC</td></tr>
<tr><td>Total Supply</td><td>31,917,629 GKC</td></tr>
</table>


### PoW Rewards Breakdown

First_Block	Last_Block	Miner	Total	Acc
1	1	23000000.00000000 	23000000.00000000 	23000000.00000000 
2	3000	170.00000000 	509830.00000000 	23509830.00000000 


### PoS Rewards Breakdown

First_Block	Last_Block	Miner	Masternodes	Entrust	Fund	Total	Acc
3001	245435	1.20000000 	0.60000000 	6.60000000 	0.00000000 	2036454.00000000 	2036454.00000000 
245436	360120	1.20000000 	0.48000000 	6.60000000 	0.35000000 	949591.80000000 	2986045.80000000 
360121	717240	0.60000000 	0.24000000 	3.30000000 	0.17500000 	1478476.80000000 	4464522.60000000 
717241	1074360	0.30000000 	0.12000000 	1.65000000 	0.08750000 	739238.40000000 	5203761.00000000 
1074361	1431480	0.15000000 	0.06000000 	0.82500000 	0.04375000 	369619.20000000 	5573380.20000000 
1431481	1788600	0.07500000 	0.03000000 	0.41250000 	0.02187500 	184809.60000000 	5758189.80000000 
1788601	2145720	0.03750000 	0.01500000 	0.20625000 	0.01093750 	92404.80000000 	5850594.60000000 
2145721	2502840	0.01875000 	0.00750000 	0.10312500 	0.00546875 	46202.40000000 	5896797.00000000 
2502841	2859960	0.00937500 	0.00375000 	0.05156250 	0.00273438 	23101.20000000 	5919898.20000000 
2859961	3217080	0.00468750 	0.00187500 	0.02578125 	0.00136719 	11550.60000000 	5931448.80000000 
3217081	3574200	0.00234375 	0.00093750 	0.01289063 	0.00068359 	5775.30000000 	5937224.10000000 
3574201	3931320	0.00117188 	0.00046875 	0.00644531 	0.00034180 	2887.65000000 	5940111.75000000 
3931321	4288440	0.00058594 	0.00023438 	0.00322266 	0.00017090 	1443.82500000 	5941555.57500000 
4288441	4645560	0.00029297 	0.00011719 	0.00161133 	0.00008545 	721.91250000 	5942277.48750000 
4645561	5002680	0.00014648 	0.00005859 	0.00080566 	0.00004272 	360.95625000 	5942638.44375000 
5002681	5359800	0.00007324 	0.00002930 	0.00040283 	0.00002136 	180.47812500 	5942818.92187500 
5359801	5716920	0.00003662 	0.00001465 	0.00020142 	0.00001068 	90.23906250 	5942909.16093750 
5716921	6074040	0.00001831 	0.00000732 	0.00010071 	0.00000534 	45.11953125 	5942954.28046875 
6074041	6431160	0.00000916 	0.00000366 	0.00005035 	0.00000267 	22.55976563 	5942976.84023437 
6431161	6788280	0.00000458 	0.00000183 	0.00002518 	0.00000134 	11.27988281 	5942988.12011719 
6788281	7145400	0.00000229 	0.00000092 	0.00001259 	0.00000067 	5.63994141 	5942993.76005859 
7145401	7502520	0.00000114 	0.00000046 	0.00000629 	0.00000033 	2.81997070 	5942996.58002930 
7502521	7859640	0.00000057 	0.00000023 	0.00000315 	0.00000017 	1.40998535 	5942997.99001465 
7859641	8216760	0.00000029 	0.00000011 	0.00000157 	0.00000008 	0.70499268 	5942998.69500732 
8216761	8573880	0.00000014 	0.00000006 	0.00000079 	0.00000004 	0.35249634 	5942999.04750366 
8573881	8931000	0.00000007 	0.00000003 	0.00000039 	0.00000002 	0.17624817 	5942999.22375183 
8931001	9288120	0.00000004 	0.00000001 	0.00000020 	0.00000001 	0.08812408 	5942999.31187592 
9288121	9645240	0.00000002 	0.00000001 	0.00000010 	0.00000001 	0.04406204 	5942999.35593796 
9645241	10002360	0.00000001 	0.00000000 	0.00000005 	0.00000000 	0.02203102 	5942999.37796898 
10002361	INF	0.00000000 	0.00000000 	0.00000002 	0.00000000 	0.00000000 	5942999.37796898 


### Season Rewards Breakdown

First_Block	Last_Block	Season	Reward	Total	Acc
3001	245435	5	156000.00000000 	780000.00000000 	780000.00000000 
245436	360120	3	145600.00000000 	436800.00000000 	1216800.00000000 
360121	717240	8	78000.00000000 	624000.00000000 	1840800.00000000 
717241	1074360	8	39000.00000000 	312000.00000000 	2152800.00000000 
1074361	1431480	8	19500.00000000 	156000.00000000 	2308800.00000000 
1431481	1788600	8	9750.00000000 	78000.00000000 	2386800.00000000 
1788601	2145720	8	4875.00000000 	39000.00000000 	2425800.00000000 
2145721	2502840	8	2437.50000000 	19500.00000000 	2445300.00000000 
2502841	2859960	8	1218.75000000 	9750.00000000 	2455050.00000000 
2859961	3217080	8	609.37500000 	4875.00000000 	2459925.00000000 
3217081	3574200	8	304.68750000 	2437.50000000 	2462362.50000000 
3574201	3931320	8	152.34375000 	1218.75000000 	2463581.25000000 
3931321	4288440	8	76.17187500 	609.37500000 	2464190.62500000 
4288441	4645560	8	38.08593750 	304.68750000 	2464495.31250000 
4645561	5002680	8	19.04296875 	152.34375000 	2464647.65625000 
5002681	5359800	8	9.52148438 	76.17187500 	2464723.82812500 
5359801	5716920	8	4.76074219 	38.08593750 	2464761.91406250 
5716921	6074040	8	2.38037109 	19.04296875 	2464780.95703125 
6074041	6431160	8	1.19018555 	9.52148438 	2464790.47851562 
6431161	6788280	8	0.59509277 	4.76074219 	2464795.23925781 
6788281	7145400	8	0.29754639 	2.38037109 	2464797.61962891 
7145401	7502520	8	0.14877319 	1.19018555 	2464798.80981445 
7502521	7859640	8	0.07438660 	0.59509277 	2464799.40490723 
7859641	8216760	8	0.03719330 	0.29754639 	2464799.70245361 
8216761	8573880	8	0.01859665 	0.14877319 	2464799.85122681 
8573881	8931000	8	0.00929832 	0.07438660 	2464799.92561340 
8931001	9288120	8	0.00464916 	0.03719330 	2464799.96280670 
9288121	9645240	8	0.00232458 	0.01859665 	2464799.98140335 
9645241	10002360	8	0.00116229 	0.00929832 	2464799.99070168 
10002361	10359480	8	0.00058115 	0.00464916 	2464799.99535084 
10359481	10716600	8	0.00029057 	0.00232458 	2464799.99767542 
10716601	11073720	8	0.00014529 	0.00116229 	2464799.99883771 
11073721	11430840	8	0.00007264 	0.00058115 	2464799.99941885 
11430841	11787960	8	0.00003632 	0.00029057 	2464799.99970943 
11787961	12145080	8	0.00001816 	0.00014529 	2464799.99985471 
12145081	12502200	8	0.00000908 	0.00007264 	2464799.99992736 
12502201	12859320	8	0.00000454 	0.00003632 	2464799.99996368 
12859321	13216440	8	0.00000227 	0.00001816 	2464799.99998184 
13216441	13573560	8	0.00000114 	0.00000908 	2464799.99999092 
13573561	13930680	8	0.00000057 	0.00000454 	2464799.99999546 
13930681	14287800	8	0.00000028 	0.00000227 	2464799.99999773 
14287801	14644920	8	0.00000014 	0.00000114 	2464799.99999886 
14644921	15002040	8	0.00000007 	0.00000057 	2464799.99999943 
15002041	15359160	8	0.00000004 	0.00000028 	2464799.99999972 
15359161	15716280	8	0.00000002 	0.00000014 	2464799.99999986 
15716281	16073400	8	0.00000001 	0.00000007 	2464799.99999993 
16073401	INF	8	0.00000000 	0.00000000 	2464799.99999993 