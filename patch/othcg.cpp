﻿
#include<unordered_map> 
#include<string> 

std::unordered_map<int,std::pair<int,int>>newcz={
{ 0x1c2d000 ,{0x0,0x2116} },
{ 0x1c2f800 ,{0x2116,0x1d4c} },
{ 0x1c31800 ,{0x3e62,0x1df8} },
{ 0x1c33800 ,{0x5c5a,0x1f5c} },
{ 0x1c35800 ,{0x7bb6,0x1958} },
{ 0x1c37800 ,{0x950e,0x4c5e} },
{ 0x209c800 ,{0xe16c,0x5d0} },
{ 0x209d000 ,{0xe73c,0x1446} },
{ 0x209e800 ,{0xfb82,0x12aa} },
{ 0x20a0000 ,{0x10e2c,0x128c} },
{ 0x20a1800 ,{0x120b8,0xd32} },
{ 0x20a2800 ,{0x12dea,0x179c} },
{ 0x20a4000 ,{0x14586,0x1126} },
{ 0x20a5800 ,{0x156ac,0xefe} },
{ 0x20a6800 ,{0x165aa,0x186c} },
{ 0x20a8800 ,{0x17e16,0x1110} },
{ 0x20aa000 ,{0x18f26,0x103a} },
{ 0x20ab800 ,{0x19f60,0xc30} },
{ 0x20ac800 ,{0x1ab90,0x130e} },
{ 0x20ae000 ,{0x1be9e,0x1604} },
{ 0x20af800 ,{0x1d4a2,0x160a} },
{ 0x20b1000 ,{0x1eaac,0x18b2} },
{ 0x20b3000 ,{0x2035e,0x159e} },
{ 0x20b4800 ,{0x218fc,0x1148} },
{ 0x20b6000 ,{0x22a44,0x14ee} },
{ 0x147de000 ,{0x23f32,0x1e6a} },
{ 0x147e0000 ,{0x25d9c,0x1bf6} },
{ 0x147e2000 ,{0x27992,0x1ae6} },
{ 0x147e4000 ,{0x29478,0xf8e} },
{ 0x147e5000 ,{0x2a406,0xaf6} },
{ 0x147e6000 ,{0x2aefc,0xfb6} },
{ 0x147e7000 ,{0x2beb2,0xb52} },
{ 0x147e8000 ,{0x2ca04,0xdec} },
{ 0x147e9000 ,{0x2d7f0,0xf76} },
{ 0x147ea000 ,{0x2e766,0x43c} },
{ 0x147ea800 ,{0x2eba2,0xa9e} },
{ 0x147eb800 ,{0x2f640,0x11ec} },
{ 0x147ed000 ,{0x3082c,0x10d0} },
{ 0x147ee800 ,{0x318fc,0x1c04} },
{ 0x147f0800 ,{0x33500,0x1ba4} },
{ 0x147f2800 ,{0x350a4,0x1ace} },
{ 0x147f4800 ,{0x36b72,0x12d8} },
{ 0x147f6000 ,{0x37e4a,0x2896} },
{ 0x147f9000 ,{0x3a6e0,0x20d8} },
{ 0x147fb800 ,{0x3c7b8,0x2068} },
{ 0x147fe000 ,{0x3e820,0x31d4} },
{ 0x14801800 ,{0x419f4,0x3390} },
{ 0x14805000 ,{0x44d84,0x2e22} },
{ 0x14808000 ,{0x47ba6,0x22da} },
{ 0x1480a800 ,{0x49e80,0x17ee} },
{ 0x1480c000 ,{0x4b66e,0x1682} },
{ 0x1480d800 ,{0x4ccf0,0x1502} },
{ 0x1480f000 ,{0x4e1f2,0x1668} },
{ 0x14810800 ,{0x4f85a,0x13ca} },
{ 0x14812000 ,{0x50c24,0x112a} },
{ 0x14813800 ,{0x51d4e,0x1652} },
{ 0x14815000 ,{0x533a0,0xebe} },
{ 0x14816000 ,{0x5425e,0x14f8} },
{ 0x14817800 ,{0x55756,0x14ac} },
{ 0x14819000 ,{0x56c02,0x1648} },
{ 0x1481a800 ,{0x5824a,0x7ac} },
{ 0x1481b000 ,{0x589f6,0x14a8} },
{ 0x1481c800 ,{0x59e9e,0x13b6} },
{ 0x1481e000 ,{0x5b254,0x136a} },
{ 0x1481f800 ,{0x5c5be,0x125e} },
{ 0x14821000 ,{0x5d81c,0x107a} },
{ 0x14822800 ,{0x5e896,0x1412} },
{ 0x14824000 ,{0x5fca8,0x964} },
{ 0x14825000 ,{0x6060c,0xccc} },
{ 0x14826000 ,{0x612d8,0x1c14} },
{ 0x14828000 ,{0x62eec,0x10a4} },
{ 0x14829800 ,{0x63f90,0x11dc} },
{ 0x1482b000 ,{0x6516c,0x173c} },
{ 0x1482c800 ,{0x668a8,0xe46} },
{ 0x1482d800 ,{0x676ee,0xa98} },
{ 0x1482e800 ,{0x68186,0xe9c} },
{ 0x1482f800 ,{0x69022,0x904} },
{ 0x14830800 ,{0x69926,0x8dc} },
{ 0x14831800 ,{0x6a202,0x1358} },
{ 0x14833000 ,{0x6b55a,0x88a} },
{ 0x14834000 ,{0x6bde4,0xca2} },
{ 0x14835000 ,{0x6ca86,0xd4a} },
{ 0x14836000 ,{0x6d7d0,0x13fc} },
{ 0x14837800 ,{0x6ebcc,0x132a} },
{ 0x14839000 ,{0x6fef6,0xa52} },
{ 0x1483a000 ,{0x70948,0x12d0} },
{ 0x1483b800 ,{0x71c18,0xd9e} },
{ 0x1483c800 ,{0x729b6,0x3406} },
{ 0x14840000 ,{0x75dbc,0x5964} },
{ 0x14846000 ,{0x7b720,0x70da} },
{ 0x1484d800 ,{0x827fa,0x8d6c} },
{ 0x14856800 ,{0x8b566,0xbd62} },
{ 0x14862800 ,{0x972c8,0xe100} },
{ 0x14871000 ,{0xa53c8,0xf852} },
{ 0x14881000 ,{0xb4c1a,0x12646} },
{ 0x14893800 ,{0xc7260,0x132a2} },
};
std::unordered_map<int,int>pakoffsetnew2old={
{ 0x3800 , 0x3800 },
{ 0x6800 , 0x6800 },
{ 0x9800 , 0x9800 },
{ 0x37800 , 0x37800 },
{ 0x80800 , 0x80800 },
{ 0x109000 , 0x109000 },
{ 0x173000 , 0x173000 },
{ 0x177000 , 0x177000 },
{ 0x1c5000 , 0x1c5000 },
{ 0x200000 , 0x200000 },
{ 0x25b000 , 0x25b000 },
{ 0x261000 , 0x261000 },
{ 0x26e000 , 0x26e000 },
{ 0x3db000 , 0x3db000 },
{ 0x3e2000 , 0x3e2000 },
{ 0x532800 , 0x532800 },
{ 0x53a000 , 0x53a000 },
{ 0x6a5800 , 0x6a5800 },
{ 0x6ad000 , 0x6ad000 },
{ 0x829800 , 0x829800 },
{ 0x831800 , 0x831800 },
{ 0x9da800 , 0x9da800 },
{ 0x9e2000 , 0x9e2000 },
{ 0xaec000 , 0xaec000 },
{ 0xaf2800 , 0xaf2800 },
{ 0xbfc800 , 0xbfc800 },
{ 0xc03800 , 0xc03800 },
{ 0xc05800 , 0xc05800 },
{ 0xd4e800 , 0xd4e800 },
{ 0xd94800 , 0xd94800 },
{ 0xdcf800 , 0xdcf800 },
{ 0xdd9000 , 0xdd9000 },
{ 0xddf000 , 0xddf000 },
{ 0xe23800 , 0xe23800 },
{ 0xe61800 , 0xe61800 },
{ 0xea5000 , 0xea5000 },
{ 0xee9000 , 0xee9000 },
{ 0xf26000 , 0xf26000 },
{ 0xf71800 , 0xf71800 },
{ 0xfc5000 , 0xfc5000 },
{ 0x1014800 , 0x1014800 },
{ 0x1065000 , 0x1065000 },
{ 0x10b1000 , 0x10b1000 },
{ 0x1101000 , 0x1101000 },
{ 0x1151800 , 0x1151800 },
{ 0x1199000 , 0x1199000 },
{ 0x11e6000 , 0x11e6000 },
{ 0x1236800 , 0x1236800 },
{ 0x128a800 , 0x128a800 },
{ 0x12ca800 , 0x12ca800 },
{ 0x1316000 , 0x1316000 },
{ 0x1361000 , 0x1361000 },
{ 0x13b1000 , 0x13b1000 },
{ 0x140f800 , 0x140f800 },
{ 0x1478800 , 0x1478800 },
{ 0x14dc000 , 0x14dc000 },
{ 0x1541800 , 0x1541800 },
{ 0x155a800 , 0x155a800 },
{ 0x1573800 , 0x1573800 },
{ 0x158d000 , 0x158d000 },
{ 0x15a6000 , 0x15a6000 },
{ 0x15c0800 , 0x15c0800 },
{ 0x15db000 , 0x15db000 },
{ 0x15f5000 , 0x15f5000 },
{ 0x160f800 , 0x160f800 },
{ 0x162a000 , 0x162a000 },
{ 0x1644000 , 0x1644000 },
{ 0x165e800 , 0x165e800 },
{ 0x1679000 , 0x1679000 },
{ 0x1694000 , 0x1694000 },
{ 0x16ae800 , 0x16ae800 },
{ 0x16c9800 , 0x16c9800 },
{ 0x16e4800 , 0x16e4800 },
{ 0x16fb000 , 0x16fb000 },
{ 0x1715000 , 0x1715000 },
{ 0x1730800 , 0x1730800 },
{ 0x174b800 , 0x174b800 },
{ 0x1767800 , 0x1767800 },
{ 0x1783800 , 0x1783800 },
{ 0x179f800 , 0x179f800 },
{ 0x17bb800 , 0x17bb800 },
{ 0x1ae6800 , 0x1ae6800 },
{ 0x1ae9000 , 0x1ae9000 },
{ 0x1aeb000 , 0x1aeb000 },
{ 0x1aed000 , 0x1aed000 },
{ 0x1aef800 , 0x1aef800 },
{ 0x1af1800 , 0x1af1800 },
{ 0x1af8000 , 0x1af8000 },
{ 0x1c2d000 , 0x1c2d000 },
{ 0x1c2f800 , 0x1c32800 },
{ 0x1c31800 , 0x1c37800 },
{ 0x1c33800 , 0x1c3d000 },
{ 0x1c35800 , 0x1c42800 },
{ 0x1c37800 , 0x1c47000 },
{ 0x1c3c800 , 0x1c53000 },
{ 0x1f67800 , 0x1f7e000 },
{ 0x209c800 , 0x20b3000 },
{ 0x209d000 , 0x20b4000 },
{ 0x209e800 , 0x20b7800 },
{ 0x20a0000 , 0x20ba800 },
{ 0x20a1800 , 0x20bd800 },
{ 0x20a2800 , 0x20c0000 },
{ 0x20a4000 , 0x20c4800 },
{ 0x20a5800 , 0x20c7800 },
{ 0x20a6800 , 0x20ca000 },
{ 0x20a8800 , 0x20ce800 },
{ 0x20aa000 , 0x20d1800 },
{ 0x20ab800 , 0x20d4800 },
{ 0x20ac800 , 0x20d6800 },
{ 0x20ae000 , 0x20da000 },
{ 0x20af800 , 0x20de000 },
{ 0x20b1000 , 0x20e2000 },
{ 0x20b3000 , 0x20e6800 },
{ 0x20b4800 , 0x20ea800 },
{ 0x20b6000 , 0x20ed800 },
{ 0x20b7800 , 0x2100000 },
{ 0x21be000 , 0x2206800 },
{ 0x2250800 , 0x2299000 },
{ 0x23a8000 , 0x23f0800 },
{ 0x24ce000 , 0x2516800 },
{ 0x268e800 , 0x26d7000 },
{ 0x2807000 , 0x284f800 },
{ 0x28a7000 , 0x28ef800 },
{ 0x28a9800 , 0x28f2000 },
{ 0x2b8f000 , 0x2bd7800 },
{ 0x2e30800 , 0x2e79000 },
{ 0x304e800 , 0x3097000 },
{ 0x328d800 , 0x32d6000 },
{ 0x3596800 , 0x35df000 },
{ 0x3599800 , 0x35e2000 },
{ 0x3815000 , 0x385d800 },
{ 0x3818000 , 0x3860800 },
{ 0x3b76000 , 0x3bbe800 },
{ 0x3b79800 , 0x3bc2000 },
{ 0x3ec1000 , 0x3f09800 },
{ 0x3ec4800 , 0x3f0d000 },
{ 0x430f800 , 0x4358000 },
{ 0x4313000 , 0x435b800 },
{ 0x46a9800 , 0x46f2000 },
{ 0x48d3800 , 0x491c000 },
{ 0x4999800 , 0x49e2000 },
{ 0x499c000 , 0x49e4800 },
{ 0x4a81000 , 0x4ac9800 },
{ 0x4ac2000 , 0x4b0a800 },
{ 0x4d6a800 , 0x4db3000 },
{ 0x4d6d000 , 0x4db5800 },
{ 0x4e7b000 , 0x4ec3800 },
{ 0x5120800 , 0x5169000 },
{ 0x5123000 , 0x516b800 },
{ 0x5284000 , 0x52cc800 },
{ 0x5286800 , 0x52cf000 },
{ 0x53e6000 , 0x542e800 },
{ 0x5706000 , 0x574e800 },
{ 0x57b2000 , 0x57fa800 },
{ 0x584e000 , 0x5896800 },
{ 0x5a27000 , 0x5a6f800 },
{ 0x5c6f800 , 0x5cb8000 },
{ 0x5fe8000 , 0x6030800 },
{ 0x638e000 , 0x63d6800 },
{ 0x6390800 , 0x63d9000 },
{ 0x65b0000 , 0x65f8800 },
{ 0x676b000 , 0x67b3800 },
{ 0x676d800 , 0x67b6000 },
{ 0x6770000 , 0x67b8800 },
{ 0x67c5000 , 0x680d800 },
{ 0x6997800 , 0x69e0000 },
{ 0x699a000 , 0x69e2800 },
{ 0x6aaf800 , 0x6af8000 },
{ 0x6ab2000 , 0x6afa800 },
{ 0x6bd0000 , 0x6c18800 },
{ 0x6bd2800 , 0x6c1b000 },
{ 0x6cb1000 , 0x6cf9800 },
{ 0x6cb3800 , 0x6cfc000 },
{ 0x6e8b800 , 0x6ed4000 },
{ 0x6e8e000 , 0x6ed6800 },
{ 0x6f9c800 , 0x6fe5000 },
{ 0x7254000 , 0x729c800 },
{ 0x730c800 , 0x7355000 },
{ 0x730f000 , 0x7357800 },
{ 0x7615000 , 0x765d800 },
{ 0x7776000 , 0x77be800 },
{ 0x7778800 , 0x77c1000 },
{ 0x7874800 , 0x78bd000 },
{ 0x7877000 , 0x78bf800 },
{ 0x7940000 , 0x7988800 },
{ 0x7a09000 , 0x7a51800 },
{ 0x7ad3800 , 0x7b1c000 },
{ 0x7b5a000 , 0x7ba2800 },
{ 0x7e36000 , 0x7e7e800 },
{ 0x8117800 , 0x8160000 },
{ 0x8220000 , 0x8268800 },
{ 0x8222000 , 0x826a800 },
{ 0x8692800 , 0x86db000 },
{ 0x8982800 , 0x89cb000 },
{ 0x8b20000 , 0x8b68800 },
{ 0x8bfd000 , 0x8c45800 },
{ 0x8cc5000 , 0x8d0d800 },
{ 0x8d6f800 , 0x8db8000 },
{ 0x8e2e000 , 0x8e76800 },
{ 0x8f6e000 , 0x8fb6800 },
{ 0x9000000 , 0x9048800 },
{ 0x9027000 , 0x906f800 },
{ 0x910b800 , 0x9154000 },
{ 0x922b000 , 0x9273800 },
{ 0x92bb800 , 0x9304000 },
{ 0x93b3000 , 0x93fb800 },
{ 0x95c2000 , 0x960a800 },
{ 0x98f8800 , 0x9941000 },
{ 0x9a49000 , 0x9a91800 },
{ 0x9a4b800 , 0x9a94000 },
{ 0x9b82800 , 0x9bcb000 },
{ 0x9b85000 , 0x9bcd800 },
{ 0x9c06800 , 0x9c4f000 },
{ 0x9f31000 , 0x9f79800 },
{ 0xa132000 , 0xa17a800 },
{ 0xa134800 , 0xa17d000 },
{ 0xa22d000 , 0xa275800 },
{ 0xa22f800 , 0xa278000 },
{ 0xa386000 , 0xa3ce800 },
{ 0xa388800 , 0xa3d1000 },
{ 0xa57c800 , 0xa5c5000 },
{ 0xa57f000 , 0xa5c7800 },
{ 0xaa6a000 , 0xaab2800 },
{ 0xac0a800 , 0xac53000 },
{ 0xac0d000 , 0xac55800 },
{ 0xacb6000 , 0xacfe800 },
{ 0xacb8800 , 0xad01000 },
{ 0xad60800 , 0xada9000 },
{ 0xae84800 , 0xaecd000 },
{ 0xae87000 , 0xaecf800 },
{ 0xaf51000 , 0xaf99800 },
{ 0xb03d000 , 0xb085800 },
{ 0xb03f800 , 0xb088000 },
{ 0xb0dc000 , 0xb124800 },
{ 0xb0de800 , 0xb127000 },
{ 0xb154800 , 0xb19d000 },
{ 0xb157000 , 0xb19f800 },
{ 0xb62c800 , 0xb675000 },
{ 0xb8ba000 , 0xb902800 },
{ 0xb939000 , 0xb981800 },
{ 0xb9ac800 , 0xb9f5000 },
{ 0xba59800 , 0xbaa2000 },
{ 0xbb16800 , 0xbb5f000 },
{ 0xbcac800 , 0xbcf5000 },
{ 0xbcaf000 , 0xbcf7800 },
{ 0xbed7800 , 0xbf20000 },
{ 0xbeda000 , 0xbf22800 },
{ 0xbfdc000 , 0xc024800 },
{ 0xbfde800 , 0xc027000 },
{ 0xc375800 , 0xc3be000 },
{ 0xcd5f800 , 0xcda8000 },
{ 0xcf2b000 , 0xcf73800 },
{ 0xd15d800 , 0xd1a6000 },
{ 0xd2b6000 , 0xd2fe800 },
{ 0xd2b8800 , 0xd301000 },
{ 0xd5ac000 , 0xd5f4800 },
{ 0xd7dd000 , 0xd825800 },
{ 0xd82a800 , 0xd873000 },
{ 0xd884000 , 0xd8cc800 },
{ 0xd96d800 , 0xd9b6000 },
{ 0xda28800 , 0xda71000 },
{ 0xdaa2800 , 0xdaeb000 },
{ 0xddaa800 , 0xddf3000 },
{ 0xdeaf800 , 0xdef8000 },
{ 0xe026000 , 0xe06e800 },
{ 0xe073800 , 0xe0bc000 },
{ 0xe099000 , 0xe0e1800 },
{ 0xe221000 , 0xe269800 },
{ 0xe66d800 , 0xe6b6000 },
{ 0xe670800 , 0xe6b9000 },
{ 0xe673800 , 0xe6bc000 },
{ 0xe676800 , 0xe6bf000 },
{ 0xe67a000 , 0xe6c2800 },
{ 0xe67d800 , 0xe6c6000 },
{ 0xe682000 , 0xe6ca800 },
{ 0xe686800 , 0xe6cf000 },
{ 0xe68b800 , 0xe6d4000 },
{ 0xe691000 , 0xe6d9800 },
{ 0xe697800 , 0xe6e0000 },
{ 0xe783000 , 0xe7cb800 },
{ 0xe879000 , 0xe8c1800 },
{ 0xee27800 , 0xee70000 },
{ 0xf467000 , 0xf4af800 },
{ 0xfb00000 , 0xfb48800 },
{ 0xfbff000 , 0xfc47800 },
{ 0xfd55000 , 0xfd9d800 },
{ 0x10011800 , 0x1005a000 },
{ 0x10647000 , 0x1068f800 },
{ 0x1071d800 , 0x10766000 },
{ 0x1078b800 , 0x107d4000 },
{ 0x10a6b800 , 0x10ab4000 },
{ 0x10b2f000 , 0x10b77800 },
{ 0x10ce0800 , 0x10d29000 },
{ 0x10e1e800 , 0x10e67000 },
{ 0x10ed8800 , 0x10f21000 },
{ 0x10edb000 , 0x10f23800 },
{ 0x1108e800 , 0x110d7000 },
{ 0x11091000 , 0x110d9800 },
{ 0x112b0800 , 0x112f9000 },
{ 0x112b3000 , 0x112fb800 },
{ 0x113be800 , 0x11407000 },
{ 0x11601800 , 0x1164a000 },
{ 0x118d3800 , 0x1191c000 },
{ 0x11b79000 , 0x11bc1800 },
{ 0x11b7b800 , 0x11bc4000 },
{ 0x11bfb000 , 0x11c43800 },
{ 0x11bfd800 , 0x11c46000 },
{ 0x11df2000 , 0x11e3a800 },
{ 0x11df4800 , 0x11e3d000 },
{ 0x12026800 , 0x1206f000 },
{ 0x121e1000 , 0x12229800 },
{ 0x1223a800 , 0x12283000 },
{ 0x12294000 , 0x122dc800 },
{ 0x122eb800 , 0x12334000 },
{ 0x12343000 , 0x1238b800 },
{ 0x125a4000 , 0x125ec800 },
{ 0x125a6800 , 0x125ef000 },
{ 0x126a0800 , 0x126e9000 },
{ 0x126a3000 , 0x126eb800 },
{ 0x12835000 , 0x1287d800 },
{ 0x12837800 , 0x12880000 },
{ 0x12a60000 , 0x12aa8800 },
{ 0x12a62800 , 0x12aab000 },
{ 0x12a65000 , 0x12aad800 },
{ 0x12a67800 , 0x12ab0000 },
{ 0x12ad7800 , 0x12b20000 },
{ 0x12b66800 , 0x12baf000 },
{ 0x12bd6000 , 0x12c1e800 },
{ 0x12cb2000 , 0x12cfa800 },
{ 0x12e37800 , 0x12e80000 },
{ 0x12fa5800 , 0x12fee000 },
{ 0x131ef800 , 0x13238000 },
{ 0x132e7800 , 0x13330000 },
{ 0x1347d000 , 0x134c5800 },
{ 0x1365f800 , 0x136a8000 },
{ 0x1382a800 , 0x13873000 },
{ 0x139eb800 , 0x13a34000 },
{ 0x13a71000 , 0x13ab9800 },
{ 0x13ae0000 , 0x13b28800 },
{ 0x13b5e000 , 0x13ba6800 },
{ 0x13c10000 , 0x13c58800 },
{ 0x13c8f800 , 0x13cd8000 },
{ 0x13d3a000 , 0x13d82800 },
{ 0x13dd8000 , 0x13e20800 },
{ 0x13e3c000 , 0x13e84800 },
{ 0x13e8d000 , 0x13ed5800 },
{ 0x13f15000 , 0x13f5d800 },
{ 0x13f78000 , 0x13fc0800 },
{ 0x13fc4800 , 0x1400d000 },
{ 0x1404c800 , 0x14095000 },
{ 0x14103800 , 0x1414c000 },
{ 0x14196800 , 0x141df000 },
{ 0x14248800 , 0x14291000 },
{ 0x142d8000 , 0x14320800 },
{ 0x1436b000 , 0x143b3800 },
{ 0x1441d000 , 0x14465800 },
{ 0x144d4800 , 0x1451d000 },
{ 0x14546000 , 0x1458e800 },
{ 0x145e9800 , 0x14632000 },
{ 0x14665000 , 0x146ad800 },
{ 0x146e1000 , 0x14729800 },
{ 0x14769800 , 0x147b2000 },
{ 0x147de000 , 0x14826800 },
{ 0x147e0000 , 0x1482c000 },
{ 0x147e2000 , 0x14831000 },
{ 0x147e4000 , 0x14835800 },
{ 0x147e5000 , 0x14838800 },
{ 0x147e6000 , 0x1483a800 },
{ 0x147e7000 , 0x1483d800 },
{ 0x147e8000 , 0x1483f800 },
{ 0x147e9000 , 0x14842000 },
{ 0x147ea000 , 0x14845000 },
{ 0x147ea800 , 0x14846000 },
{ 0x147eb800 , 0x14848000 },
{ 0x147ed000 , 0x1484c000 },
{ 0x147ee800 , 0x1484f000 },
{ 0x147f0800 , 0x14854000 },
{ 0x147f2800 , 0x14859000 },
{ 0x147f4800 , 0x1485e000 },
{ 0x147f6000 , 0x14861000 },
{ 0x147f9000 , 0x14868000 },
{ 0x147fb800 , 0x1486e000 },
{ 0x147fe000 , 0x14874000 },
{ 0x14801800 , 0x1487d000 },
{ 0x14805000 , 0x14886800 },
{ 0x14808000 , 0x1488f000 },
{ 0x1480a800 , 0x14895800 },
{ 0x1480c000 , 0x1489a000 },
{ 0x1480d800 , 0x1489e000 },
{ 0x1480f000 , 0x148a1800 },
{ 0x14810800 , 0x148a5800 },
{ 0x14812000 , 0x148a9000 },
{ 0x14813800 , 0x148ac000 },
{ 0x14815000 , 0x148b0000 },
{ 0x14816000 , 0x148b2800 },
{ 0x14817800 , 0x148b6800 },
{ 0x14819000 , 0x148ba800 },
{ 0x1481a800 , 0x148be800 },
{ 0x1481b000 , 0x148c0000 },
{ 0x1481c800 , 0x148c4000 },
{ 0x1481e000 , 0x148c7800 },
{ 0x1481f800 , 0x148cb000 },
{ 0x14821000 , 0x148ce800 },
{ 0x14822800 , 0x148d1800 },
{ 0x14824000 , 0x148d5000 },
{ 0x14825000 , 0x148d6800 },
{ 0x14826000 , 0x148d9000 },
{ 0x14828000 , 0x148de000 },
{ 0x14829800 , 0x148e1000 },
{ 0x1482b000 , 0x148e4800 },
{ 0x1482c800 , 0x148e8800 },
{ 0x1482d800 , 0x148eb000 },
{ 0x1482e800 , 0x148ed000 },
{ 0x1482f800 , 0x148ef800 },
{ 0x14830800 , 0x148f1000 },
{ 0x14831800 , 0x148f2800 },
{ 0x14833000 , 0x148f6000 },
{ 0x14834000 , 0x148f7800 },
{ 0x14835000 , 0x148fa000 },
{ 0x14836000 , 0x148fc800 },
{ 0x14837800 , 0x14900000 },
{ 0x14839000 , 0x14903800 },
{ 0x1483a000 , 0x14905800 },
{ 0x1483b800 , 0x14909000 },
{ 0x1483c800 , 0x1490b800 },
{ 0x14840000 , 0x1490f000 },
{ 0x14846000 , 0x14915000 },
{ 0x1484d800 , 0x1491c800 },
{ 0x14856800 , 0x14925800 },
{ 0x14862800 , 0x14931800 },
{ 0x14871000 , 0x14940000 },
{ 0x14881000 , 0x14950000 },
{ 0x14893800 , 0x14962800 },
{ 0x148a7000 , 0x14976000 },
{ 0x148bd800 , 0x1498c800 },
{ 0x148d4000 , 0x149a3000 },
};
std::unordered_map<int,int>oldfilesize={
{ 0x3800 , 0x3000 },
{ 0x6800 , 0x3000 },
{ 0x9800 , 0x2e000 },
{ 0x37800 , 0x49000 },
{ 0x80800 , 0x88800 },
{ 0x109000 , 0x6a000 },
{ 0x173000 , 0x4000 },
{ 0x177000 , 0x4e000 },
{ 0x1c5000 , 0x3b000 },
{ 0x200000 , 0x5b000 },
{ 0x25b000 , 0x6000 },
{ 0x261000 , 0xd000 },
{ 0x26e000 , 0x16d000 },
{ 0x3db000 , 0x7000 },
{ 0x3e2000 , 0x150800 },
{ 0x532800 , 0x7800 },
{ 0x53a000 , 0x16b800 },
{ 0x6a5800 , 0x7800 },
{ 0x6ad000 , 0x17c800 },
{ 0x829800 , 0x8000 },
{ 0x831800 , 0x1a9000 },
{ 0x9da800 , 0x7800 },
{ 0x9e2000 , 0x10a000 },
{ 0xaec000 , 0x6800 },
{ 0xaf2800 , 0x10a000 },
{ 0xbfc800 , 0x7000 },
{ 0xc03800 , 0x2000 },
{ 0xc05800 , 0x149000 },
{ 0xd4e800 , 0x46000 },
{ 0xd94800 , 0x3b000 },
{ 0xdcf800 , 0x9800 },
{ 0xdd9000 , 0x6000 },
{ 0xddf000 , 0x44800 },
{ 0xe23800 , 0x3e000 },
{ 0xe61800 , 0x43800 },
{ 0xea5000 , 0x44000 },
{ 0xee9000 , 0x3d000 },
{ 0xf26000 , 0x4b800 },
{ 0xf71800 , 0x53800 },
{ 0xfc5000 , 0x4f800 },
{ 0x1014800 , 0x50800 },
{ 0x1065000 , 0x4c000 },
{ 0x10b1000 , 0x50000 },
{ 0x1101000 , 0x50800 },
{ 0x1151800 , 0x47800 },
{ 0x1199000 , 0x4d000 },
{ 0x11e6000 , 0x50800 },
{ 0x1236800 , 0x54000 },
{ 0x128a800 , 0x40000 },
{ 0x12ca800 , 0x4b800 },
{ 0x1316000 , 0x4b000 },
{ 0x1361000 , 0x50000 },
{ 0x13b1000 , 0x5e800 },
{ 0x140f800 , 0x69000 },
{ 0x1478800 , 0x63800 },
{ 0x14dc000 , 0x65800 },
{ 0x1541800 , 0x19000 },
{ 0x155a800 , 0x19000 },
{ 0x1573800 , 0x19800 },
{ 0x158d000 , 0x19000 },
{ 0x15a6000 , 0x1a800 },
{ 0x15c0800 , 0x1a800 },
{ 0x15db000 , 0x1a000 },
{ 0x15f5000 , 0x1a800 },
{ 0x160f800 , 0x1a800 },
{ 0x162a000 , 0x1a000 },
{ 0x1644000 , 0x1a800 },
{ 0x165e800 , 0x1a800 },
{ 0x1679000 , 0x1b000 },
{ 0x1694000 , 0x1a800 },
{ 0x16ae800 , 0x1b000 },
{ 0x16c9800 , 0x1b000 },
{ 0x16e4800 , 0x16800 },
{ 0x16fb000 , 0x1a000 },
{ 0x1715000 , 0x1b800 },
{ 0x1730800 , 0x1b000 },
{ 0x174b800 , 0x1c000 },
{ 0x1767800 , 0x1c000 },
{ 0x1783800 , 0x1c000 },
{ 0x179f800 , 0x1c000 },
{ 0x17bb800 , 0x32b000 },
{ 0x1ae6800 , 0x2800 },
{ 0x1ae9000 , 0x2000 },
{ 0x1aeb000 , 0x2000 },
{ 0x1aed000 , 0x2800 },
{ 0x1aef800 , 0x2000 },
{ 0x1af1800 , 0x6800 },
{ 0x1af8000 , 0x135000 },
{ 0x1c2d000 , 0x5800 },
{ 0x1c32800 , 0x5000 },
{ 0x1c37800 , 0x5800 },
{ 0x1c3d000 , 0x5800 },
{ 0x1c42800 , 0x4800 },
{ 0x1c47000 , 0xc000 },
{ 0x1c53000 , 0x32b000 },
{ 0x1f7e000 , 0x135000 },
{ 0x20b3000 , 0x1000 },
{ 0x20b4000 , 0x3800 },
{ 0x20b7800 , 0x3000 },
{ 0x20ba800 , 0x3000 },
{ 0x20bd800 , 0x2800 },
{ 0x20c0000 , 0x4800 },
{ 0x20c4800 , 0x3000 },
{ 0x20c7800 , 0x2800 },
{ 0x20ca000 , 0x4800 },
{ 0x20ce800 , 0x3000 },
{ 0x20d1800 , 0x3000 },
{ 0x20d4800 , 0x2000 },
{ 0x20d6800 , 0x3800 },
{ 0x20da000 , 0x4000 },
{ 0x20de000 , 0x4000 },
{ 0x20e2000 , 0x4800 },
{ 0x20e6800 , 0x4000 },
{ 0x20ea800 , 0x3000 },
{ 0x20ed800 , 0x12800 },
{ 0x2100000 , 0x106800 },
{ 0x2206800 , 0x92800 },
{ 0x2299000 , 0x157800 },
{ 0x23f0800 , 0x126000 },
{ 0x2516800 , 0x1c0800 },
{ 0x26d7000 , 0x178800 },
{ 0x284f800 , 0xa0000 },
{ 0x28ef800 , 0x2800 },
{ 0x28f2000 , 0x2e5800 },
{ 0x2bd7800 , 0x2a1800 },
{ 0x2e79000 , 0x21e000 },
{ 0x3097000 , 0x23f000 },
{ 0x32d6000 , 0x309000 },
{ 0x35df000 , 0x3000 },
{ 0x35e2000 , 0x27b800 },
{ 0x385d800 , 0x3000 },
{ 0x3860800 , 0x35e000 },
{ 0x3bbe800 , 0x3800 },
{ 0x3bc2000 , 0x347800 },
{ 0x3f09800 , 0x3800 },
{ 0x3f0d000 , 0x44b000 },
{ 0x4358000 , 0x3800 },
{ 0x435b800 , 0x396800 },
{ 0x46f2000 , 0x22a000 },
{ 0x491c000 , 0xc6000 },
{ 0x49e2000 , 0x2800 },
{ 0x49e4800 , 0xe5000 },
{ 0x4ac9800 , 0x41000 },
{ 0x4b0a800 , 0x2a8800 },
{ 0x4db3000 , 0x2800 },
{ 0x4db5800 , 0x10e000 },
{ 0x4ec3800 , 0x2a5800 },
{ 0x5169000 , 0x2800 },
{ 0x516b800 , 0x161000 },
{ 0x52cc800 , 0x2800 },
{ 0x52cf000 , 0x15f800 },
{ 0x542e800 , 0x320000 },
{ 0x574e800 , 0xac000 },
{ 0x57fa800 , 0x9c000 },
{ 0x5896800 , 0x1d9000 },
{ 0x5a6f800 , 0x248800 },
{ 0x5cb8000 , 0x378800 },
{ 0x6030800 , 0x3a6000 },
{ 0x63d6800 , 0x2800 },
{ 0x63d9000 , 0x21f800 },
{ 0x65f8800 , 0x1bb000 },
{ 0x67b3800 , 0x2800 },
{ 0x67b6000 , 0x2800 },
{ 0x67b8800 , 0x55000 },
{ 0x680d800 , 0x1d2800 },
{ 0x69e0000 , 0x2800 },
{ 0x69e2800 , 0x115800 },
{ 0x6af8000 , 0x2800 },
{ 0x6afa800 , 0x11e000 },
{ 0x6c18800 , 0x2800 },
{ 0x6c1b000 , 0xde800 },
{ 0x6cf9800 , 0x2800 },
{ 0x6cfc000 , 0x1d8000 },
{ 0x6ed4000 , 0x2800 },
{ 0x6ed6800 , 0x10e800 },
{ 0x6fe5000 , 0x2b7800 },
{ 0x729c800 , 0xb8800 },
{ 0x7355000 , 0x2800 },
{ 0x7357800 , 0x306000 },
{ 0x765d800 , 0x161000 },
{ 0x77be800 , 0x2800 },
{ 0x77c1000 , 0xfc000 },
{ 0x78bd000 , 0x2800 },
{ 0x78bf800 , 0xc9000 },
{ 0x7988800 , 0xc9000 },
{ 0x7a51800 , 0xca800 },
{ 0x7b1c000 , 0x86800 },
{ 0x7ba2800 , 0x2dc000 },
{ 0x7e7e800 , 0x2e1800 },
{ 0x8160000 , 0x108800 },
{ 0x8268800 , 0x2000 },
{ 0x826a800 , 0x470800 },
{ 0x86db000 , 0x2f0000 },
{ 0x89cb000 , 0x19d800 },
{ 0x8b68800 , 0xdd000 },
{ 0x8c45800 , 0xc8000 },
{ 0x8d0d800 , 0xaa800 },
{ 0x8db8000 , 0xbe800 },
{ 0x8e76800 , 0x140000 },
{ 0x8fb6800 , 0x92000 },
{ 0x9048800 , 0x27000 },
{ 0x906f800 , 0xe4800 },
{ 0x9154000 , 0x11f800 },
{ 0x9273800 , 0x90800 },
{ 0x9304000 , 0xf7800 },
{ 0x93fb800 , 0x20f000 },
{ 0x960a800 , 0x336800 },
{ 0x9941000 , 0x150800 },
{ 0x9a91800 , 0x2800 },
{ 0x9a94000 , 0x137000 },
{ 0x9bcb000 , 0x2800 },
{ 0x9bcd800 , 0x81800 },
{ 0x9c4f000 , 0x32a800 },
{ 0x9f79800 , 0x201000 },
{ 0xa17a800 , 0x2800 },
{ 0xa17d000 , 0xf8800 },
{ 0xa275800 , 0x2800 },
{ 0xa278000 , 0x156800 },
{ 0xa3ce800 , 0x2800 },
{ 0xa3d1000 , 0x1f4000 },
{ 0xa5c5000 , 0x2800 },
{ 0xa5c7800 , 0x4eb000 },
{ 0xaab2800 , 0x1a0800 },
{ 0xac53000 , 0x2800 },
{ 0xac55800 , 0xa9000 },
{ 0xacfe800 , 0x2800 },
{ 0xad01000 , 0xa8000 },
{ 0xada9000 , 0x124000 },
{ 0xaecd000 , 0x2800 },
{ 0xaecf800 , 0xca000 },
{ 0xaf99800 , 0xec000 },
{ 0xb085800 , 0x2800 },
{ 0xb088000 , 0x9c800 },
{ 0xb124800 , 0x2800 },
{ 0xb127000 , 0x76000 },
{ 0xb19d000 , 0x2800 },
{ 0xb19f800 , 0x4d5800 },
{ 0xb675000 , 0x28d800 },
{ 0xb902800 , 0x7f000 },
{ 0xb981800 , 0x73800 },
{ 0xb9f5000 , 0xad000 },
{ 0xbaa2000 , 0xbd000 },
{ 0xbb5f000 , 0x196000 },
{ 0xbcf5000 , 0x2800 },
{ 0xbcf7800 , 0x228800 },
{ 0xbf20000 , 0x2800 },
{ 0xbf22800 , 0x102000 },
{ 0xc024800 , 0x2800 },
{ 0xc027000 , 0x397000 },
{ 0xc3be000 , 0x9ea000 },
{ 0xcda8000 , 0x1cb800 },
{ 0xcf73800 , 0x232800 },
{ 0xd1a6000 , 0x158800 },
{ 0xd2fe800 , 0x2800 },
{ 0xd301000 , 0x2f3800 },
{ 0xd5f4800 , 0x231000 },
{ 0xd825800 , 0x4d800 },
{ 0xd873000 , 0x59800 },
{ 0xd8cc800 , 0xe9800 },
{ 0xd9b6000 , 0xbb000 },
{ 0xda71000 , 0x7a000 },
{ 0xdaeb000 , 0x308000 },
{ 0xddf3000 , 0x105000 },
{ 0xdef8000 , 0x176800 },
{ 0xe06e800 , 0x4d800 },
{ 0xe0bc000 , 0x25800 },
{ 0xe0e1800 , 0x188000 },
{ 0xe269800 , 0x44c800 },
{ 0xe6b6000 , 0x3000 },
{ 0xe6b9000 , 0x3000 },
{ 0xe6bc000 , 0x3000 },
{ 0xe6bf000 , 0x3800 },
{ 0xe6c2800 , 0x3800 },
{ 0xe6c6000 , 0x4800 },
{ 0xe6ca800 , 0x4800 },
{ 0xe6cf000 , 0x5000 },
{ 0xe6d4000 , 0x5800 },
{ 0xe6d9800 , 0x6800 },
{ 0xe6e0000 , 0xeb800 },
{ 0xe7cb800 , 0xf6000 },
{ 0xe8c1800 , 0x5ae800 },
{ 0xee70000 , 0x63f800 },
{ 0xf4af800 , 0x699000 },
{ 0xfb48800 , 0xff000 },
{ 0xfc47800 , 0x156000 },
{ 0xfd9d800 , 0x2bc800 },
{ 0x1005a000 , 0x635800 },
{ 0x1068f800 , 0xd6800 },
{ 0x10766000 , 0x6e000 },
{ 0x107d4000 , 0x2e0000 },
{ 0x10ab4000 , 0xc3800 },
{ 0x10b77800 , 0x1b1800 },
{ 0x10d29000 , 0x13e000 },
{ 0x10e67000 , 0xba000 },
{ 0x10f21000 , 0x2800 },
{ 0x10f23800 , 0x1b3800 },
{ 0x110d7000 , 0x2800 },
{ 0x110d9800 , 0x21f800 },
{ 0x112f9000 , 0x2800 },
{ 0x112fb800 , 0x10b800 },
{ 0x11407000 , 0x243000 },
{ 0x1164a000 , 0x2d2000 },
{ 0x1191c000 , 0x2a5800 },
{ 0x11bc1800 , 0x2800 },
{ 0x11bc4000 , 0x7f800 },
{ 0x11c43800 , 0x2800 },
{ 0x11c46000 , 0x1f4800 },
{ 0x11e3a800 , 0x2800 },
{ 0x11e3d000 , 0x232000 },
{ 0x1206f000 , 0x1ba800 },
{ 0x12229800 , 0x59800 },
{ 0x12283000 , 0x59800 },
{ 0x122dc800 , 0x57800 },
{ 0x12334000 , 0x57800 },
{ 0x1238b800 , 0x261000 },
{ 0x125ec800 , 0x2800 },
{ 0x125ef000 , 0xfa000 },
{ 0x126e9000 , 0x2800 },
{ 0x126eb800 , 0x192000 },
{ 0x1287d800 , 0x2800 },
{ 0x12880000 , 0x228800 },
{ 0x12aa8800 , 0x2800 },
{ 0x12aab000 , 0x2800 },
{ 0x12aad800 , 0x2800 },
{ 0x12ab0000 , 0x70000 },
{ 0x12b20000 , 0x8f000 },
{ 0x12baf000 , 0x6f800 },
{ 0x12c1e800 , 0xdc000 },
{ 0x12cfa800 , 0x185800 },
{ 0x12e80000 , 0x16e000 },
{ 0x12fee000 , 0x24a000 },
{ 0x13238000 , 0xf8000 },
{ 0x13330000 , 0x195800 },
{ 0x134c5800 , 0x1e2800 },
{ 0x136a8000 , 0x1cb000 },
{ 0x13873000 , 0x1c1000 },
{ 0x13a34000 , 0x85800 },
{ 0x13ab9800 , 0x6f000 },
{ 0x13b28800 , 0x7e000 },
{ 0x13ba6800 , 0xb2000 },
{ 0x13c58800 , 0x7f800 },
{ 0x13cd8000 , 0xaa800 },
{ 0x13d82800 , 0x9e000 },
{ 0x13e20800 , 0x64000 },
{ 0x13e84800 , 0x51000 },
{ 0x13ed5800 , 0x88000 },
{ 0x13f5d800 , 0x63000 },
{ 0x13fc0800 , 0x4c800 },
{ 0x1400d000 , 0x88000 },
{ 0x14095000 , 0xb7000 },
{ 0x1414c000 , 0x93000 },
{ 0x141df000 , 0xb2000 },
{ 0x14291000 , 0x8f800 },
{ 0x14320800 , 0x93000 },
{ 0x143b3800 , 0xb2000 },
{ 0x14465800 , 0xb7800 },
{ 0x1451d000 , 0x71800 },
{ 0x1458e800 , 0xa3800 },
{ 0x14632000 , 0x7b800 },
{ 0x146ad800 , 0x7c000 },
{ 0x14729800 , 0x88800 },
{ 0x147b2000 , 0x74800 },
{ 0x14826800 , 0x5800 },
{ 0x1482c000 , 0x5000 },
{ 0x14831000 , 0x4800 },
{ 0x14835800 , 0x3000 },
{ 0x14838800 , 0x2000 },
{ 0x1483a800 , 0x3000 },
{ 0x1483d800 , 0x2000 },
{ 0x1483f800 , 0x2800 },
{ 0x14842000 , 0x3000 },
{ 0x14845000 , 0x1000 },
{ 0x14846000 , 0x2000 },
{ 0x14848000 , 0x4000 },
{ 0x1484c000 , 0x3000 },
{ 0x1484f000 , 0x5000 },
{ 0x14854000 , 0x5000 },
{ 0x14859000 , 0x5000 },
{ 0x1485e000 , 0x3000 },
{ 0x14861000 , 0x7000 },
{ 0x14868000 , 0x6000 },
{ 0x1486e000 , 0x6000 },
{ 0x14874000 , 0x9000 },
{ 0x1487d000 , 0x9800 },
{ 0x14886800 , 0x8800 },
{ 0x1488f000 , 0x6800 },
{ 0x14895800 , 0x4800 },
{ 0x1489a000 , 0x4000 },
{ 0x1489e000 , 0x3800 },
{ 0x148a1800 , 0x4000 },
{ 0x148a5800 , 0x3800 },
{ 0x148a9000 , 0x3000 },
{ 0x148ac000 , 0x4000 },
{ 0x148b0000 , 0x2800 },
{ 0x148b2800 , 0x4000 },
{ 0x148b6800 , 0x4000 },
{ 0x148ba800 , 0x4000 },
{ 0x148be800 , 0x1800 },
{ 0x148c0000 , 0x4000 },
{ 0x148c4000 , 0x3800 },
{ 0x148c7800 , 0x3800 },
{ 0x148cb000 , 0x3800 },
{ 0x148ce800 , 0x3000 },
{ 0x148d1800 , 0x3800 },
{ 0x148d5000 , 0x1800 },
{ 0x148d6800 , 0x2800 },
{ 0x148d9000 , 0x5000 },
{ 0x148de000 , 0x3000 },
{ 0x148e1000 , 0x3800 },
{ 0x148e4800 , 0x4000 },
{ 0x148e8800 , 0x2800 },
{ 0x148eb000 , 0x2000 },
{ 0x148ed000 , 0x2800 },
{ 0x148ef800 , 0x1800 },
{ 0x148f1000 , 0x1800 },
{ 0x148f2800 , 0x3800 },
{ 0x148f6000 , 0x1800 },
{ 0x148f7800 , 0x2800 },
{ 0x148fa000 , 0x2800 },
{ 0x148fc800 , 0x3800 },
{ 0x14900000 , 0x3800 },
{ 0x14903800 , 0x2000 },
{ 0x14905800 , 0x3800 },
{ 0x14909000 , 0x2800 },
{ 0x1490b800 , 0x3800 },
{ 0x1490f000 , 0x6000 },
{ 0x14915000 , 0x7800 },
{ 0x1491c800 , 0x9000 },
{ 0x14925800 , 0xc000 },
{ 0x14931800 , 0xe800 },
{ 0x14940000 , 0x10000 },
{ 0x14950000 , 0x12800 },
{ 0x14962800 , 0x13800 },
{ 0x14976000 , 0x16800 },
{ 0x1498c800 , 0x16800 },
{ 0x149a3000 , 0x16800 },
};
std::unordered_map<int,int>newfilesize={
{ 0x3800 , 0x3000 },
{ 0x6800 , 0x3000 },
{ 0x9800 , 0x2e000 },
{ 0x37800 , 0x49000 },
{ 0x80800 , 0x88800 },
{ 0x109000 , 0x6a000 },
{ 0x173000 , 0x4000 },
{ 0x177000 , 0x4e000 },
{ 0x1c5000 , 0x3b000 },
{ 0x200000 , 0x5b000 },
{ 0x25b000 , 0x6000 },
{ 0x261000 , 0xd000 },
{ 0x26e000 , 0x16d000 },
{ 0x3db000 , 0x7000 },
{ 0x3e2000 , 0x150800 },
{ 0x532800 , 0x7800 },
{ 0x53a000 , 0x16b800 },
{ 0x6a5800 , 0x7800 },
{ 0x6ad000 , 0x17c800 },
{ 0x829800 , 0x8000 },
{ 0x831800 , 0x1a9000 },
{ 0x9da800 , 0x7800 },
{ 0x9e2000 , 0x10a000 },
{ 0xaec000 , 0x6800 },
{ 0xaf2800 , 0x10a000 },
{ 0xbfc800 , 0x7000 },
{ 0xc03800 , 0x2000 },
{ 0xc05800 , 0x149000 },
{ 0xd4e800 , 0x46000 },
{ 0xd94800 , 0x3b000 },
{ 0xdcf800 , 0x9800 },
{ 0xdd9000 , 0x6000 },
{ 0xddf000 , 0x44800 },
{ 0xe23800 , 0x3e000 },
{ 0xe61800 , 0x43800 },
{ 0xea5000 , 0x44000 },
{ 0xee9000 , 0x3d000 },
{ 0xf26000 , 0x4b800 },
{ 0xf71800 , 0x53800 },
{ 0xfc5000 , 0x4f800 },
{ 0x1014800 , 0x50800 },
{ 0x1065000 , 0x4c000 },
{ 0x10b1000 , 0x50000 },
{ 0x1101000 , 0x50800 },
{ 0x1151800 , 0x47800 },
{ 0x1199000 , 0x4d000 },
{ 0x11e6000 , 0x50800 },
{ 0x1236800 , 0x54000 },
{ 0x128a800 , 0x40000 },
{ 0x12ca800 , 0x4b800 },
{ 0x1316000 , 0x4b000 },
{ 0x1361000 , 0x50000 },
{ 0x13b1000 , 0x5e800 },
{ 0x140f800 , 0x69000 },
{ 0x1478800 , 0x63800 },
{ 0x14dc000 , 0x65800 },
{ 0x1541800 , 0x19000 },
{ 0x155a800 , 0x19000 },
{ 0x1573800 , 0x19800 },
{ 0x158d000 , 0x19000 },
{ 0x15a6000 , 0x1a800 },
{ 0x15c0800 , 0x1a800 },
{ 0x15db000 , 0x1a000 },
{ 0x15f5000 , 0x1a800 },
{ 0x160f800 , 0x1a800 },
{ 0x162a000 , 0x1a000 },
{ 0x1644000 , 0x1a800 },
{ 0x165e800 , 0x1a800 },
{ 0x1679000 , 0x1b000 },
{ 0x1694000 , 0x1a800 },
{ 0x16ae800 , 0x1b000 },
{ 0x16c9800 , 0x1b000 },
{ 0x16e4800 , 0x16800 },
{ 0x16fb000 , 0x1a000 },
{ 0x1715000 , 0x1b800 },
{ 0x1730800 , 0x1b000 },
{ 0x174b800 , 0x1c000 },
{ 0x1767800 , 0x1c000 },
{ 0x1783800 , 0x1c000 },
{ 0x179f800 , 0x1c000 },
{ 0x17bb800 , 0x32b000 },
{ 0x1ae6800 , 0x2800 },
{ 0x1ae9000 , 0x2000 },
{ 0x1aeb000 , 0x2000 },
{ 0x1aed000 , 0x2800 },
{ 0x1aef800 , 0x2000 },
{ 0x1af1800 , 0x6800 },
{ 0x1af8000 , 0x135000 },
{ 0x1c2d000 , 0x2800 },
{ 0x1c2f800 , 0x2000 },
{ 0x1c31800 , 0x2000 },
{ 0x1c33800 , 0x2000 },
{ 0x1c35800 , 0x2000 },
{ 0x1c37800 , 0x5000 },
{ 0x1c3c800 , 0x32b000 },
{ 0x1f67800 , 0x135000 },
{ 0x209c800 , 0x800 },
{ 0x209d000 , 0x1800 },
{ 0x209e800 , 0x1800 },
{ 0x20a0000 , 0x1800 },
{ 0x20a1800 , 0x1000 },
{ 0x20a2800 , 0x1800 },
{ 0x20a4000 , 0x1800 },
{ 0x20a5800 , 0x1000 },
{ 0x20a6800 , 0x2000 },
{ 0x20a8800 , 0x1800 },
{ 0x20aa000 , 0x1800 },
{ 0x20ab800 , 0x1000 },
{ 0x20ac800 , 0x1800 },
{ 0x20ae000 , 0x1800 },
{ 0x20af800 , 0x1800 },
{ 0x20b1000 , 0x2000 },
{ 0x20b3000 , 0x1800 },
{ 0x20b4800 , 0x1800 },
{ 0x20b6000 , 0x1800 },
{ 0x20b7800 , 0x106800 },
{ 0x21be000 , 0x92800 },
{ 0x2250800 , 0x157800 },
{ 0x23a8000 , 0x126000 },
{ 0x24ce000 , 0x1c0800 },
{ 0x268e800 , 0x178800 },
{ 0x2807000 , 0xa0000 },
{ 0x28a7000 , 0x2800 },
{ 0x28a9800 , 0x2e5800 },
{ 0x2b8f000 , 0x2a1800 },
{ 0x2e30800 , 0x21e000 },
{ 0x304e800 , 0x23f000 },
{ 0x328d800 , 0x309000 },
{ 0x3596800 , 0x3000 },
{ 0x3599800 , 0x27b800 },
{ 0x3815000 , 0x3000 },
{ 0x3818000 , 0x35e000 },
{ 0x3b76000 , 0x3800 },
{ 0x3b79800 , 0x347800 },
{ 0x3ec1000 , 0x3800 },
{ 0x3ec4800 , 0x44b000 },
{ 0x430f800 , 0x3800 },
{ 0x4313000 , 0x396800 },
{ 0x46a9800 , 0x22a000 },
{ 0x48d3800 , 0xc6000 },
{ 0x4999800 , 0x2800 },
{ 0x499c000 , 0xe5000 },
{ 0x4a81000 , 0x41000 },
{ 0x4ac2000 , 0x2a8800 },
{ 0x4d6a800 , 0x2800 },
{ 0x4d6d000 , 0x10e000 },
{ 0x4e7b000 , 0x2a5800 },
{ 0x5120800 , 0x2800 },
{ 0x5123000 , 0x161000 },
{ 0x5284000 , 0x2800 },
{ 0x5286800 , 0x15f800 },
{ 0x53e6000 , 0x320000 },
{ 0x5706000 , 0xac000 },
{ 0x57b2000 , 0x9c000 },
{ 0x584e000 , 0x1d9000 },
{ 0x5a27000 , 0x248800 },
{ 0x5c6f800 , 0x378800 },
{ 0x5fe8000 , 0x3a6000 },
{ 0x638e000 , 0x2800 },
{ 0x6390800 , 0x21f800 },
{ 0x65b0000 , 0x1bb000 },
{ 0x676b000 , 0x2800 },
{ 0x676d800 , 0x2800 },
{ 0x6770000 , 0x55000 },
{ 0x67c5000 , 0x1d2800 },
{ 0x6997800 , 0x2800 },
{ 0x699a000 , 0x115800 },
{ 0x6aaf800 , 0x2800 },
{ 0x6ab2000 , 0x11e000 },
{ 0x6bd0000 , 0x2800 },
{ 0x6bd2800 , 0xde800 },
{ 0x6cb1000 , 0x2800 },
{ 0x6cb3800 , 0x1d8000 },
{ 0x6e8b800 , 0x2800 },
{ 0x6e8e000 , 0x10e800 },
{ 0x6f9c800 , 0x2b7800 },
{ 0x7254000 , 0xb8800 },
{ 0x730c800 , 0x2800 },
{ 0x730f000 , 0x306000 },
{ 0x7615000 , 0x161000 },
{ 0x7776000 , 0x2800 },
{ 0x7778800 , 0xfc000 },
{ 0x7874800 , 0x2800 },
{ 0x7877000 , 0xc9000 },
{ 0x7940000 , 0xc9000 },
{ 0x7a09000 , 0xca800 },
{ 0x7ad3800 , 0x86800 },
{ 0x7b5a000 , 0x2dc000 },
{ 0x7e36000 , 0x2e1800 },
{ 0x8117800 , 0x108800 },
{ 0x8220000 , 0x2000 },
{ 0x8222000 , 0x470800 },
{ 0x8692800 , 0x2f0000 },
{ 0x8982800 , 0x19d800 },
{ 0x8b20000 , 0xdd000 },
{ 0x8bfd000 , 0xc8000 },
{ 0x8cc5000 , 0xaa800 },
{ 0x8d6f800 , 0xbe800 },
{ 0x8e2e000 , 0x140000 },
{ 0x8f6e000 , 0x92000 },
{ 0x9000000 , 0x27000 },
{ 0x9027000 , 0xe4800 },
{ 0x910b800 , 0x11f800 },
{ 0x922b000 , 0x90800 },
{ 0x92bb800 , 0xf7800 },
{ 0x93b3000 , 0x20f000 },
{ 0x95c2000 , 0x336800 },
{ 0x98f8800 , 0x150800 },
{ 0x9a49000 , 0x2800 },
{ 0x9a4b800 , 0x137000 },
{ 0x9b82800 , 0x2800 },
{ 0x9b85000 , 0x81800 },
{ 0x9c06800 , 0x32a800 },
{ 0x9f31000 , 0x201000 },
{ 0xa132000 , 0x2800 },
{ 0xa134800 , 0xf8800 },
{ 0xa22d000 , 0x2800 },
{ 0xa22f800 , 0x156800 },
{ 0xa386000 , 0x2800 },
{ 0xa388800 , 0x1f4000 },
{ 0xa57c800 , 0x2800 },
{ 0xa57f000 , 0x4eb000 },
{ 0xaa6a000 , 0x1a0800 },
{ 0xac0a800 , 0x2800 },
{ 0xac0d000 , 0xa9000 },
{ 0xacb6000 , 0x2800 },
{ 0xacb8800 , 0xa8000 },
{ 0xad60800 , 0x124000 },
{ 0xae84800 , 0x2800 },
{ 0xae87000 , 0xca000 },
{ 0xaf51000 , 0xec000 },
{ 0xb03d000 , 0x2800 },
{ 0xb03f800 , 0x9c800 },
{ 0xb0dc000 , 0x2800 },
{ 0xb0de800 , 0x76000 },
{ 0xb154800 , 0x2800 },
{ 0xb157000 , 0x4d5800 },
{ 0xb62c800 , 0x28d800 },
{ 0xb8ba000 , 0x7f000 },
{ 0xb939000 , 0x73800 },
{ 0xb9ac800 , 0xad000 },
{ 0xba59800 , 0xbd000 },
{ 0xbb16800 , 0x196000 },
{ 0xbcac800 , 0x2800 },
{ 0xbcaf000 , 0x228800 },
{ 0xbed7800 , 0x2800 },
{ 0xbeda000 , 0x102000 },
{ 0xbfdc000 , 0x2800 },
{ 0xbfde800 , 0x397000 },
{ 0xc375800 , 0x9ea000 },
{ 0xcd5f800 , 0x1cb800 },
{ 0xcf2b000 , 0x232800 },
{ 0xd15d800 , 0x158800 },
{ 0xd2b6000 , 0x2800 },
{ 0xd2b8800 , 0x2f3800 },
{ 0xd5ac000 , 0x231000 },
{ 0xd7dd000 , 0x4d800 },
{ 0xd82a800 , 0x59800 },
{ 0xd884000 , 0xe9800 },
{ 0xd96d800 , 0xbb000 },
{ 0xda28800 , 0x7a000 },
{ 0xdaa2800 , 0x308000 },
{ 0xddaa800 , 0x105000 },
{ 0xdeaf800 , 0x176800 },
{ 0xe026000 , 0x4d800 },
{ 0xe073800 , 0x25800 },
{ 0xe099000 , 0x188000 },
{ 0xe221000 , 0x44c800 },
{ 0xe66d800 , 0x3000 },
{ 0xe670800 , 0x3000 },
{ 0xe673800 , 0x3000 },
{ 0xe676800 , 0x3800 },
{ 0xe67a000 , 0x3800 },
{ 0xe67d800 , 0x4800 },
{ 0xe682000 , 0x4800 },
{ 0xe686800 , 0x5000 },
{ 0xe68b800 , 0x5800 },
{ 0xe691000 , 0x6800 },
{ 0xe697800 , 0xeb800 },
{ 0xe783000 , 0xf6000 },
{ 0xe879000 , 0x5ae800 },
{ 0xee27800 , 0x63f800 },
{ 0xf467000 , 0x699000 },
{ 0xfb00000 , 0xff000 },
{ 0xfbff000 , 0x156000 },
{ 0xfd55000 , 0x2bc800 },
{ 0x10011800 , 0x635800 },
{ 0x10647000 , 0xd6800 },
{ 0x1071d800 , 0x6e000 },
{ 0x1078b800 , 0x2e0000 },
{ 0x10a6b800 , 0xc3800 },
{ 0x10b2f000 , 0x1b1800 },
{ 0x10ce0800 , 0x13e000 },
{ 0x10e1e800 , 0xba000 },
{ 0x10ed8800 , 0x2800 },
{ 0x10edb000 , 0x1b3800 },
{ 0x1108e800 , 0x2800 },
{ 0x11091000 , 0x21f800 },
{ 0x112b0800 , 0x2800 },
{ 0x112b3000 , 0x10b800 },
{ 0x113be800 , 0x243000 },
{ 0x11601800 , 0x2d2000 },
{ 0x118d3800 , 0x2a5800 },
{ 0x11b79000 , 0x2800 },
{ 0x11b7b800 , 0x7f800 },
{ 0x11bfb000 , 0x2800 },
{ 0x11bfd800 , 0x1f4800 },
{ 0x11df2000 , 0x2800 },
{ 0x11df4800 , 0x232000 },
{ 0x12026800 , 0x1ba800 },
{ 0x121e1000 , 0x59800 },
{ 0x1223a800 , 0x59800 },
{ 0x12294000 , 0x57800 },
{ 0x122eb800 , 0x57800 },
{ 0x12343000 , 0x261000 },
{ 0x125a4000 , 0x2800 },
{ 0x125a6800 , 0xfa000 },
{ 0x126a0800 , 0x2800 },
{ 0x126a3000 , 0x192000 },
{ 0x12835000 , 0x2800 },
{ 0x12837800 , 0x228800 },
{ 0x12a60000 , 0x2800 },
{ 0x12a62800 , 0x2800 },
{ 0x12a65000 , 0x2800 },
{ 0x12a67800 , 0x70000 },
{ 0x12ad7800 , 0x8f000 },
{ 0x12b66800 , 0x6f800 },
{ 0x12bd6000 , 0xdc000 },
{ 0x12cb2000 , 0x185800 },
{ 0x12e37800 , 0x16e000 },
{ 0x12fa5800 , 0x24a000 },
{ 0x131ef800 , 0xf8000 },
{ 0x132e7800 , 0x195800 },
{ 0x1347d000 , 0x1e2800 },
{ 0x1365f800 , 0x1cb000 },
{ 0x1382a800 , 0x1c1000 },
{ 0x139eb800 , 0x85800 },
{ 0x13a71000 , 0x6f000 },
{ 0x13ae0000 , 0x7e000 },
{ 0x13b5e000 , 0xb2000 },
{ 0x13c10000 , 0x7f800 },
{ 0x13c8f800 , 0xaa800 },
{ 0x13d3a000 , 0x9e000 },
{ 0x13dd8000 , 0x64000 },
{ 0x13e3c000 , 0x51000 },
{ 0x13e8d000 , 0x88000 },
{ 0x13f15000 , 0x63000 },
{ 0x13f78000 , 0x4c800 },
{ 0x13fc4800 , 0x88000 },
{ 0x1404c800 , 0xb7000 },
{ 0x14103800 , 0x93000 },
{ 0x14196800 , 0xb2000 },
{ 0x14248800 , 0x8f800 },
{ 0x142d8000 , 0x93000 },
{ 0x1436b000 , 0xb2000 },
{ 0x1441d000 , 0xb7800 },
{ 0x144d4800 , 0x71800 },
{ 0x14546000 , 0xa3800 },
{ 0x145e9800 , 0x7b800 },
{ 0x14665000 , 0x7c000 },
{ 0x146e1000 , 0x88800 },
{ 0x14769800 , 0x74800 },
{ 0x147de000 , 0x2000 },
{ 0x147e0000 , 0x2000 },
{ 0x147e2000 , 0x2000 },
{ 0x147e4000 , 0x1000 },
{ 0x147e5000 , 0x1000 },
{ 0x147e6000 , 0x1000 },
{ 0x147e7000 , 0x1000 },
{ 0x147e8000 , 0x1000 },
{ 0x147e9000 , 0x1000 },
{ 0x147ea000 , 0x800 },
{ 0x147ea800 , 0x1000 },
{ 0x147eb800 , 0x1800 },
{ 0x147ed000 , 0x1800 },
{ 0x147ee800 , 0x2000 },
{ 0x147f0800 , 0x2000 },
{ 0x147f2800 , 0x2000 },
{ 0x147f4800 , 0x1800 },
{ 0x147f6000 , 0x3000 },
{ 0x147f9000 , 0x2800 },
{ 0x147fb800 , 0x2800 },
{ 0x147fe000 , 0x3800 },
{ 0x14801800 , 0x3800 },
{ 0x14805000 , 0x3000 },
{ 0x14808000 , 0x2800 },
{ 0x1480a800 , 0x1800 },
{ 0x1480c000 , 0x1800 },
{ 0x1480d800 , 0x1800 },
{ 0x1480f000 , 0x1800 },
{ 0x14810800 , 0x1800 },
{ 0x14812000 , 0x1800 },
{ 0x14813800 , 0x1800 },
{ 0x14815000 , 0x1000 },
{ 0x14816000 , 0x1800 },
{ 0x14817800 , 0x1800 },
{ 0x14819000 , 0x1800 },
{ 0x1481a800 , 0x800 },
{ 0x1481b000 , 0x1800 },
{ 0x1481c800 , 0x1800 },
{ 0x1481e000 , 0x1800 },
{ 0x1481f800 , 0x1800 },
{ 0x14821000 , 0x1800 },
{ 0x14822800 , 0x1800 },
{ 0x14824000 , 0x1000 },
{ 0x14825000 , 0x1000 },
{ 0x14826000 , 0x2000 },
{ 0x14828000 , 0x1800 },
{ 0x14829800 , 0x1800 },
{ 0x1482b000 , 0x1800 },
{ 0x1482c800 , 0x1000 },
{ 0x1482d800 , 0x1000 },
{ 0x1482e800 , 0x1000 },
{ 0x1482f800 , 0x1000 },
{ 0x14830800 , 0x1000 },
{ 0x14831800 , 0x1800 },
{ 0x14833000 , 0x1000 },
{ 0x14834000 , 0x1000 },
{ 0x14835000 , 0x1000 },
{ 0x14836000 , 0x1800 },
{ 0x14837800 , 0x1800 },
{ 0x14839000 , 0x1000 },
{ 0x1483a000 , 0x1800 },
{ 0x1483b800 , 0x1000 },
{ 0x1483c800 , 0x3800 },
{ 0x14840000 , 0x6000 },
{ 0x14846000 , 0x7800 },
{ 0x1484d800 , 0x9000 },
{ 0x14856800 , 0xc000 },
{ 0x14862800 , 0xe800 },
{ 0x14871000 , 0x10000 },
{ 0x14881000 , 0x12800 },
{ 0x14893800 , 0x13800 },
{ 0x148a7000 , 0x16800 },
{ 0x148bd800 , 0x16800 },
{ 0x148d4000 , 0x16800 },
};