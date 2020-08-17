#include "type.h"
#include "stdio.h"
#include "const.h"
#include "protect.h"
#include "string.h"
#include "fs.h"
#include "proc.h"
#include "tty.h"
#include "console.h"
#include "global.h"
#include "proto.h"

/*****************************************************************************
 *                                animation
 *****************************************************************************/
/**
 * An animation 
 *
 *****************************************************************************/
PUBLIC void animation()
{

int i = 0;
reset();
printf(";------;;;;;;;;;;;;;.;....................................;.;;;;;;;;;;;-----;---\n");
printf("----;-;-;;;;;;;;;....;............... ......................;;;;;;;;;;;;-;---;;-\n");
printf("-;;;--;;;;;;;;;;;.....................     ... .................;;;;;;;;;;---;;;\n");
printf(";--;-;;;;-;;;;;;.................. . ..  .    .  ...............;.;;;-;;;;;;;;-;\n");
printf(";;---;;;;;;;;;;;;.............. . .       .   . .  ...........;.;;;;;;;;;;;----;\n");
printf("----;;;;;;;;;;............. ..   .   .... ..  . .... . ...........;;;;;;;-;;----\n");
printf("-;;--;;;;;;;;................      ..      .    .   . ............;;;;;;;;;;;---\n");
printf(";;-;;;;;;;;................. ..    .      .        ..  ...........;;;;;;;;;-;;--\n");
printf("--;-;;;;;;;........... .       .      ... .            .. ..........;.;;;;;;;;;;\n");
printf("--;;;;;;;;;.......... .. ..     .   .        ..       ..  ...........;;;;;;;;;--\n");
printf("---;;;;;;.;............    .. .. .    !??!.    ....       ............;;;;;;;;;;\n");
printf("---;;;;;;;......... ..    ....   ;NNNNNNNNNNNN...     . ...............;;;;;;;;;\n");
printf(";;;;;;;;;;.........  .   .   ..NNNNNNNNNNNNNNNNNQ   .  .  . ..........;.;;;;;;-;\n");
printf("-;-;;;;;......... ..  .    . 7NNNNN-    . . -NNNNN:   ..   . ...........;;;;;;;-\n");
printf(";;;;;;...........  .   .    NNNNO. .   .  ..   QNNNN  .    .  .........;;.;;;;;;\n");
printf(";;;;;;;;.............  .   NNNN.    . ..  ..     NNNN    .     .......;;.;;;;-;-\n");
printf(";;;;;.;........... .. .   NNN..    .      .       -NNN  ..    . . ....;.;;;;;;;;\n");
printf(";;;;;;;;......... .      NNN.               .       NNN   .    .........;;.;;;;;\n");
printf(";;;;;;........  .    .. NNN. .            .      .   NNN. .. .   ........;.;;;;;\n");
printf(";;;;;;;......... ...   ONN.       ...         .      ;NN>. ..  ..........;;;;;;;\n");
printf(";;;;;.;....... .....   NNN.     .       .  . ...    . NNN..   .  ..........;;;;;\n");
printf(";;;;;;....... ... . . NNN  .   N. ..     .. ..      . .NNN   ... .........;;;;;;\n");
printf(";;;;;;.......       . NN>    . N   ...           .    .ONN. .  . .........;;;;;;\n");
printf(";;;;;.........       ?NN     .NN .       .  .    .      NN:   .     ........;;;;\n");
printf(";;;;;........ .. .   NNN  . .NN.. ....    .        .. . NNN   .   .........;;;;;\n");
printf(";;;;..........    ...NN . . NN.  .  .. ..   . .      . ..NN.. .   .........;;;;;\n");
printf(";;;;;........      . NN   .7N               ... N. .  .  NN       ..........;;;;\n");
printf(";;;;.;..... .  .  . >NN   .NN .    .  .      . NN      . NN;  .  ..........;.;;;\n");
printf(";;;;;.......  .     HNN  . NN .              .QNNNQ      NNC.. . ..........;;;;;\n");
printf(";;;;......... ...   NNN  . >N!            .   NNNNN      NNQ..   .. ........;;;;\n");
printf(";;;;..........      NNN ..  NN: ..    ... . .NNNNNNN .   NNH....    ........;;;;\n");
printf(";;;;........  . .   NNN    . NNN-    .  .  NNNNNNNNN    .NNO.. . ...........;;;;\n");
printf(";;;;.;........ .    7NN     . QNNNNNN-.  QNNNNNNNN>      NN-      .........;.;;;\n");
printf(";;;;............   ..NN .     .NNNNNNNNNNNNNNNNNN .   .-NNN . .    .......;;;;;;\n");
printf(";;;;;........  .     NN        NNNNNNNNNNNNNNNNNNNN  :NNNNN         ........;;;;\n");
printf(";;;;........ . . ....NNQ  $NNNNNNNNNNNNNNNNNNNNNNNNNNNNONNN.   . ..........;;;;;\n");
printf(";;;;;..........   .  QNN  NNNNNNNNNNNNNNNNNNNNNNNNNNN. .NNC       ........;;;;;;\n");
printf(";;;;;.........     .  NN.?NNHNNNNNNNNNNNNNNNNNN  .  .. -NN        .........;;;;;\n");
printf(";;;;;;........   . .  NNNNN  .  NNNN NNNNNNNNNN  .   . NNN    .  ...........;;;;\n");
printf(";;;;;;..............   NNNN    NNNNH. .NNN??NN.     ..$NN .. .  .........;;;;;;;\n");
printf(";;;;;;;.......  .      NNNN    NNN-  .   . HNN.    .. NNH      ...........;;;;;;\n");
printf(";;;;;;..........        NNN    NN ..       CNN .  . .NNN     . . .........;;;;;;\n");
printf(";;;;;;..........         NNN . NN       .   NN   .  NNN.     .  ........;.;;;;;;\n");
printf(";;;;;;;....... .  ..  .  .NNN. NN ..     .  ?NN  . NNN    .  .. .........;;;;;;;\n");
printf(";;;;;;;..........     .   .NNN>-N  .      .  NNC ?NNN .  .    ..........;.;;;;;;\n");
printf("-;;;;;;;;;......... . .   . NNNNNN   . .   .. NNNNNN .  ...............;;;;;;-;-\n");
printf(";;;;;;;;;......... . .  ..  .NNNNNC .        $NNNNN .    . .   .........;;;;;;;;\n");
printf(";;;;;;;;......... ..      .    NNNNNNNNNNNNNNNNNN      .   .  ........;.;;;;;;;;\n");
printf(";;;;;;;;;.........  .    .       NNNNNNNNNNNNNN .      ..   ...........;;;;;;;;;\n");
printf("-;;;;;;;;;;.......... .   .   .     .QNNNN$. ... .  ..     .. ........;;;;;;;;--\n");
printf("---;;;;;;;;.;............       ..      . .       . .      ...........;;;;;;;;;;\n");
printf("---;;;;;;;;.............  ...     . .. ...  . ...   .   ...........;;.;;;;;;---;\n");
printf("--;;;;;;;;;.;......... .    .   .     .  .  . . ..       ...........;;;;;;;-;;-;\n");
printf("---;;;;;;;;;;.;........... .  .   ..   .. ..   .  ..  .............;;;;;;;--;;--\n");
printf(";;-;;;;;;;;;;;;..........                        .   ..............;;;;;;;;;;;;-\n");
printf("--;-;;;;;;;;.;.;.;.............. .  ....   .  .. ... ..........;.;;;;;;;;-;-----\n");
printf(";----;-;;;-;;;;.;;............... .....  .. . .................;;.;;;;-;-------;\n");
printf(";;;-;;-;;;;;;;;;;;;............... .. .. . ...... .............;;;;;;;;;--;;-;--\n");
printf("-;--;-;-;;;;;;;;;;;;............... .......................;..;;;;;;;;;;;-;;;---\n");
printf(";-;;;--;;;;;;;;;;;;;.;...................................;;;;;;;;;;;;;;;--------\n");
milli_delay(500);


reset();
printf(";------;;;;;;;;;;;;;.....................................;..;;;;;;;;;;;;--;;----\n");
printf("----;-;-;;;;;;;;;.;.................. ......................;;;;;;;;;;;;-;---;;;\n");
printf("-;;;--;;;;;;;;;;;;............... ...   .   ...................;;;;;;;;;;;;--;;;\n");
printf(";--;-;;;;-;;;;;;...........  ...          . . .  ...............;;;;;;;;;;;;;;-;\n");
printf(";;---;;;;;;;;;;;;............. .. .       .   . .  .............;;;;;;;;;;-----;\n");
printf("----;;;;;;;;;;................   .            .  .  ..............;;;;;;;-;;----\n");
printf(";;;--;;;;;;;;.;............ .                         ............;;;;;;;;;;;;--\n");
printf(";;-;;;;;;;;;...........   .                   .        .  ........;;;;;;;;;-;;--\n");
printf("--;-;;;;;;............                               M  .   ..........;;;;;;;;;;\n");
printf("-;;;;;;;;;;;...........  .                                ..........;.;;;;;;;;-;\n");
printf("---;;;;;;.;........ ...               >CC>.                 ..........;;;;;;;;;;\n");
printf("-;-;;;;;;............       .    :NNNNNNNNNNNN- .           ........;..;;;;;;;;;\n");
printf("-;;;;;;;;;.........            NNNNNNNNNNNNNNNNNH            . .......;.;;;;;;;;\n");
printf("-;-;;;;;.........     .      CNNNNN-        :NNNNN>   .    . .........;.;;;;;;;-\n");
printf(";;;;;;;.........            NNNNO              QNNNN          . ........;;;;;;;;\n");
printf(";;;;;;;;;......... .   .   NNNN      . .         NNNN    .     ........;.;;;;;;-\n");
printf(";;;;;;;...;......         NNN;  .                 :NNN .       .. ....;.;;;;;;;;\n");
printf(";;;;;;;;.......          NNN                        NNN   .      .......;;.;;;;;\n");
printf(";;;;;;........  .  .    NNN                          NNN         ........;.;;;;;\n");
printf(";;;;;;;.........   .   QNN.        .                 -NN?        ........;;;;;;;\n");
printf(";;;;;;;........        NNN                            NNN        .........;;;;;;\n");
printf(";;;;;;..........      NNN      N.            .         NNN       .........;;;;;;\n");
printf(";;;;;........         NN>      N?                .     ONNM        .......;;;;;;\n");
printf(";;;;;.........       ONN     .NN                        NN>         ........;;;;\n");
printf(";;;;;........ .      NNN     NN           .             NNN       . .......;;;;;\n");
printf(";;;;;.........   .   NN     NN   .     ..     .         .NN       .........;;;;;\n");
printf(";;;;;...... .   M    NN    ;N                   N        NN        ........;;;;;\n");
printf(";;;;.......         7NN    NN                 .NN        NN-      . .......;;;;;\n");
printf(";;;;........        NNN    NN                 $NNN-      NNO        . .....;;;;;\n");
printf(";;;;.;.......       NNN    ;N$                NNNNN      NNN     .. .......;;;;;\n");
printf(";;;;........ .      NNN     NN7  .      ..   NNNNNNH     NNN.       ........;;;;\n");
printf(";;;;........    .   NNN     .NNN- .       ;NNNNNNNNN     NNQ  .   ..........;;;;\n");
printf(";;;;....... .     . CNN       $NNNNNN7   NNNNNNNNNN    . NN!      . .......;;;;;\n");
printf(";;;;;.......  ..     NN        NNNNNNNNNNNNNNNNNN      . NN   .    . .....;;;;;;\n");
printf(";;;;;.......         NN        NNNNNNNNNNNNNNNNNN-       NN         .......;;;;;\n");
printf(";;;;;....... .    .. NNH     $NNNNNNNNNNNNNNNNNNNN.     NNN       . .......;;;;;\n");
printf(";;;;;.........       NNN  .QNNNNNNNNNNNNNNNNNNNNNNN     NNO       ........;;;;;;\n");
printf(";;;;..........        NN.  NNNNNNNNNNNNNNNNNNNNNNNNNN NNNN        .........;;;;;\n");
printf(";;;;.;........        NNN   NNNNNNNN !NNNNNNNNN> .NNNNNNNN       ...........;;;;\n");
printf(";;;;;;..........       NN?  NNNNQ- .   $H?  NNN     7QNNN        . . ....;;;;;;;\n");
printf(";;;;;;;.......         NNN   NN             NNN       NNN        ........;;;;;;;\n");
printf(";;;;;;..........        NNN  NN .            NN      NNN         .........;;;;;;\n");
printf(";;;;;;....... ..         NNN NN    .         NN  .  NNN         ..........;;;;;;\n");
printf(";;;;;;;.......           ;NNNNN               NN . NNN.       . .........;;;;;;;\n");
printf(";;;;;;;..........     .   ;NNNNN          .   NN CNNN.         .........;;;;;;;;\n");
printf("-;;;;;;;;..........   .   . NNNN     .         -NNNN .        .........;;;;;;-;-\n");
printf(";;;;;;;;;....... .           NNNNNO          $NNNNN   .        .........;;;;;;;;\n");
printf(";;;;;;;;............      .    NNNNNNNNNNNNNNNNNN             ........;.;;;;;;;;\n");
printf(";;;;;;;;;.......... .            NNNNNNNNNNNNNN              ...........;;;;;;;;\n");
printf("-;;;;;;;;;;...........   .          -NNNNNH; ..            ...........;;;;;;;;--\n");
printf("---;;;;;;.;............          .                   .      ..........;;;;;;;;;;\n");
printf("---;;;;;;;;;...........           . .           .       ...........;;.;;;;;;----\n");
printf("--;;;;;;;;;.;......... .  .        .                .  .  ........;;;;;;;;;-;;-;\n");
printf("---;;;;;;;;;;.;........ ..    .   ..      .           .............;;;;;;;-;;;--\n");
printf(";;-;;;;;;;;;;;;...........                      .     ... .........;;;;;;;;;;;;-\n");
printf("--;-;;;;;;;;.;.;.;.............. .   . .      .  ..  . ........;.;;;;;;;;;;-----\n");
printf(";----;-;;;-;;;;.;.............. . . .       . . ...............;;.;;;;-;--------\n");
printf(";;;-;;-;;;;;;;;;;..................... .   . ..................;.;;;;;;;--;;----\n");
printf("-;--;-;;;;;;;;;;;;;;..............  ..... .. ..............;.;;;;;;;;;;;;-;;;;--\n");
printf(";-;;;--;;;;;;;;;;;;;;.....................  ..............;;;;.;;;;;;;;;--------\n");
milli_delay(500);

reset();
printf("------;;;;;;;;;;;;;;.;....................................;..;;;;;;;;;;---;-----\n");
printf("----;-;-;;;;;;;;;....;............... ......................;;;;;;;;;;;;-;--;;--\n");
printf("-;;;--;;;;;;;;;;;.....................   .  ...................;;;;;;;;;;;---;;;\n");
printf(";--;-;;;;-;;;;;...................   ..  .  . .  .............;.;.;;;-;;;;;;;;-;\n");
printf(";;---;;;;;;;;;;;;................ .     . . . . .  .............;.;;;;;;;;;----;\n");
printf("----;;;;;;;;;;................   .  . ...... .. . .... ...........;;;;;;;-;;----\n");
printf("-;;--;;;;;;;;.............. .                   .   . ............;;;;;;;;;;;;--\n");
printf(";;-;;;;;;;;.................  .    .         ..        ...........;;;;;;;;;-;;-;\n");
printf("--;-;;;;;;;........... .  .       .      .   .         ...............;;;;;;;;;;\n");
printf("--;;;;;;;;;.......... .. ..   . .            ..     . .   ............;;;;;;;;--\n");
printf("---;;;;;;.;............          .    >CC>.    ..    .  .   ..........;;;;;;;;;;\n");
printf("---;;;;;;;.............    ..    :NNNNNNNNNNNN-..     . ... ...........;;;;;;-;;\n");
printf(";;;;;;;;;;.........  .   .     NNNNNNNNNNNNNNNNNH   .  .  . ..........;.;;;;;;-;\n");
printf("-;-;;;;;......... ..  . .    CNNNNN-  ..  . :NNNNN>   ..   .............;;;;;;;-\n");
printf(";;;;;;...........           NNNNO  .           QNNNN       .  ..........;;;;;;;;\n");
printf(";;;;;;;;.............  .  .NNNN. .   ..... .  . .NNNN    ....  ..........;;;;;--\n");
printf(";;;;;.;...........        NNN;. . .      .    . . :NNN. .      .. ....;.;;;;;;;;\n");
printf(";;;;;;;;......... .      NNN.   .     .       . . . NNN   .    .........;;.;;;;;\n");
printf(";;;;;;........  .  .    NNN. .        ..     . . .   NNN  ..     ........;.;;;;-\n");
printf(";;;;;;;......... ...   QNN.     .....  .     ..      -NN?        ........;;;;;;;\n");
printf(";;;;;.;....... .....   NNN.     .             .    . .NNN        ..........;;;;;\n");
printf(";;;;;;....... ... .   NNN  .   NN  .       . . . .. . .NNN   . . . .......;;;;;;\n");
printf(";;;;;;.......       . NN>    . NN           .    .     ONN  .    .........;;;;;;\n");
printf(";;;;;.........       ONN     .ON            .    .      NN>  .  .   ........;;;;\n");
printf(";;;;;........ .. .   NNN.    NN   .       .   .     . . NNN   . . .........;;;;;\n");
printf(";;;;..........    .. NN   . NN .     . .  .   . .. . .  .NN...    ..........;;;;\n");
printf(";;;;;........        NN .   N:  .             . N        NN       ..........;;;;\n");
printf(";;;;.;.......  .    7NN    >N .    .          .$N      . NN-  .  ..........;;;;;\n");
printf(";;;;.........  ..   NNN    :N                  NNNN      NNO     ..........;;;;;\n");
printf(";;;;......... ..    NNN  .. NN  .  .      .  .NNNNNQ   . NNN  . . . .......;.;;;\n");
printf(";;;;...........     NNN     NNN ..  .   ...  NNNNNNN .   NNN .    ..........;;;;\n");
printf(";;;;.........   . . NNN   ...ONNQ;?>...    NNNNNNNNN    .NNQ  .   ..........;;;;\n");
printf(";;;;.......... .  . CNN       .NNNNNNN.  QNNNNNNNNN!.  . NN!   .  .........;.;;;\n");
printf(";;;;;...........   . NN    .  .QNNNNNNNNNNNNNNNNN .   .. NN   .    .......;;;;;;\n");
printf(";;;;;........  .     NN     .  NNNNNNNNNNNNNNNNNN     .  NN     .   .......;.;;;\n");
printf(";;;;........ . . ... NNH  . ...NNNNNNNNNNNNNNNNNN .     NNN.     ..........;;;;;\n");
printf(";;;;;.......... ..   NNN  .   NNNNNNNNNNNNNNNNNNN .     NNO   . . ........;;;;;;\n");
printf(";;;;;.........     .  NN. .. NNNNNNNNNNNNNNNNNNNN>.    -NN.       ..........;;;;\n");
printf(";;;;;;........        NNN..  NNNNNNN  NNNNNNNN NNN     NNN    .  ........;..;;;;\n");
printf(";;;;;;..........   .   NN?. !NN NNN.        NN.;NNO  .$NN .. .  .........;;;;;;;\n");
printf(";;;;;;;........      . NNN. QNN NNN ..      NNNNNNNNNNNNN    . ..........;;;;;;;\n");
printf(";;;;;;.;.........    .. NNN.QN. .HNN    . ..!NNNNNNNNNNN    .... ........;;;;;;;\n");
printf(";;;;;;...........   .    NNN7N    .NN        .   .  NNN     .   ........;.;;;;;;\n");
printf(";;;;;;........ .. .   .  ;NNNNN     N    ..      . NNN.       . . .......;.;;;;;\n");
printf(";;;;;;;...........    . . ;NNNN . . !     . . .  CNNN.  ..    ..........;;;;;;;;\n");
printf("-;;;;;;;;;........... .   . NNNN .   . .. ..  ..NNNN .  ...............;.;;;;-;-\n");
printf(";;;;;;;;;......... .    ..  .NNNNNO    .   . $NNNNN .          .........;;;;;;;;\n");
printf(";;;;;;;;;........ ..      ..   NNNNNNNNNNNNNNNNNN..    .   . .........;.;;;;;;;;\n");
printf(";;;;;;;;;.........  .    .       NNNNNNNNNNNNNN             ...........;;;;;;;;;\n");
printf("-;;;;;;;;;;.......... .   .         -NNNNNH; ..   . .      .. ........;;;;;;;;--\n");
printf("---;;;;;;;;.............      . ..      ...    .  .  .      ..........;;;;;;;;;;\n");
printf("---;;;;;;;;.............  ...     . .. ... .  ...       ...........;;.;;;;;;--;-\n");
printf("--;;;;;;;;;.;......... ...  .   .  .  .       . ...     . ..........;;;;;;;;;;-;\n");
printf("---;;;;;;;;;;.;........ .. .      ..   .. . .  .  .   .............;.;;;;;--;;--\n");
printf(";;-;;;;;;;;;;;;;..........                .           .............;;;;;;;;-;;;-\n");
printf("--;-;;;;;;;;.;.;................    . ...  .  .. ... ..........;.;;;;;;;;;;;----\n");
printf(";----;-;;;-;;;;.;......................  .. . ..................;.;;;;-;--------\n");
printf(";;;-;;--;;;;;;;;;;................ .....   .. ..................;;;;;;;;--;;----\n");
printf("-;--;--;;;;;;;;.;;;;............... . ........................;;;;;;;-;;;-;;;---\n");
printf(";-;;;--;;;;;;;;;;;;;.;.................... ..............;.;.;.;;;;;;;;;--------\n");
milli_delay(500);


reset();
printf(";------;;;;;;;;;;;;;.;....................................;.;;;;;;;;;;;----;---;\n");
printf("----;-;-;;;;;;;;;....;............... ......................;;;;;;;;;;;;-;--;;;-\n");
printf("-;;;--;;;;;;;;;;;.....................   .  ...................;;;;;;;;;;;;--;;;\n");
printf(";--;-;;;;-;;;;;...................   ..  .  . .  .............;.;.;;;-;;;;;;;;-;\n");
printf(";;---;;;;;;;;;;;;................ .     . . . . .  .............;.;;;;;;;;;----;\n");
printf("----;;;;;;;;;;................   .  . ...... .. . .... ...........;;;;;;;-;;----\n");
printf("-;;--;;;;;;;;.............. .                   .   . ............;;;;;;;;;;;;;-\n");
printf(";;-;;;;;;;;.................  .    .         ..        ...........;.;;;;;;;-;;-;\n");
printf("--;-;;;;;;;........... .  .       .      .   .         ...............;;;;;;;;;;\n");
printf("--;;;;;;;;;.......... .. ..   . .            ..       .   ...........;;;;;;;;;-;\n");
printf("---;;;;;;.;............          .    >CC>.    ..    .  . . ..........;;;;;;;;;;\n");
printf("---;;;;;;;.............    ..    :NNNNNNNNNNNN-..     . ... ...........;;;;;;;-;\n");
printf(";;;;;;;;;;.........  .   .     NNNNNNNNNNNNNNNNNH   .  .  . ..........;.;;;;;;;;\n");
printf("-;-;;;;;......... ..  . .    CNNNNN-  ..  . :NNNNN>   ..  ............;.;;;;;;;-\n");
printf(";;;;;;...........           NNNNO              QNNNN  .       .........;;;;;;;;;\n");
printf(";;;;;;;;.............  .   NNNN.     ..... .  . .NNNN.   ....  ..........;;;;;--\n");
printf(";;;;;.;...........        NNN;. . .. .   .    . . :NNN  .      .. ....;.;;;;;;;;\n");
printf(";;;;;;;;......... .      NNN. . .     .       . . . NNN        . .......;;.;;;;;\n");
printf(";;;;;;........  .  .    NNN. .        ..     . . .   NNN  ..  .. ........;.;;;;-\n");
printf(";;;;;;;......... ...   QNN.     . ..   .     ..      -NN?  .    .........;;;;;;;\n");
printf(";;;;;.;....... .....   NNN.    ..             .     . NNN      . .........;;;;;;\n");
printf(";;;;;;....... ... .   NNN  .  .ON          . . . .. .  NNN    .. .........;;;;;;\n");
printf(";;;;;;.......       . NN>      NN           .    . .   ONN       . .......;;;;;;\n");
printf(";;;;;.........       ONN     ..N-           .    .      NN>  .. .   ........;;;;\n");
printf(";;;;;........ .. .   NNN.    $N:  .       .   .    ..   NNN   ..  . ......;;;;;;\n");
printf(";;;;..........    .. NN   . NN;.     . .  .   . .. . .  .NN.. ... ..........;;;;\n");
printf(";;;;;........ .      NN     NQ  .               N        NN.    . ..........;;;;\n");
printf(";;;;.;..... .       7NN   .!N      .           QN .    . NN-  .   .........;;;;;\n");
printf(";;;;.........       NNN    >N            .     NNN$      NNO.. .  .........;;;;;\n");
printf(";;;;......... .     NNN  .. NN  .  .          NNNNN$     NNN..  ... .......;.;;;\n");
printf(";;;;........ .      NNN     NNO ..  .   .... -NNNNNN .   NNN....   .........;;;;\n");
printf(";;;;........    .   NNN    . NNN .  . .   .NNNNNNNNN  .  NNQ.. . ...........;;;;\n");
printf(";;;;..........    . CNN. .   .;NNNNNNN    NNNNNNNNN7.    NN!.  .  .........;;;;;\n");
printf(";;;;;...........   ..NN .      NNNNNNNNNNNNNNNNNN7.   .. NN.. .    .......;;;;;;\n");
printf(";;;;;........  .     NN .   . .NNNNNNNNNNNNNNNNNN   :NN  NN     .  ........;;.;;\n");
printf(";;;;;....... . ... ..NNH     .NNNNNNNNNNNNNNNNNNNN.NNN .NNN..  .  .........;;;;;\n");
printf(";;;;;..........   .  NNN. . HNNNNNNNNNNNNNNNNNNNNNNNH ..NNO   . . ........;;;;;;\n");
printf(";;;;.......... .      NN. . NNNNNNNNNNNNNNNNNNNNNNNQ.. -NN       ...........;;;;\n");
printf(";;;;;;........     .  NNN. ?NN. NNNQ ?NNNNNNNNNN ..    NNN    .. ........;..;;;;\n");
printf(";;;;;;............ .   NN? NN7  NNN.  .>NQ!  NNN     .$NN  . .  .........;;;;;;;\n");
printf(";;;;;;;.......       . NNN.NN   NNC   .  . . .NN$     NNN       ...........;;;;;\n");
printf(";;;;;;.;........        NNNNN   NNH.     .   .NNN   .NNN    .. . ........;;;;;;;\n");
printf(";;;;;;;..........        NNNN.   NN          . NNNNNNNN ..      ..........;;;;;;\n");
printf(";;;;;;;....... .  .  .. .;NNN.   NN             7NNNNN.  .   .  .........;;;;;;;\n");
printf(";;;;;;;...........    .   ;NNN>   NN      .   .  CNNN.  .     ..........;.;;;;;;\n");
printf("-;;;;;;;;;........  . ... ..NNNN . N   ..     ..NNNN    ...............;;;;;;-;-\n");
printf(";;;;;;;;;...........   .  .. NNNNNO          $NNNNN   .    . . .........;;;;;;;-\n");
printf(";;;;;;;;..;........      ...   NNNNNNNNNNNNNNNNNN..          .........;.;;;;;;;;\n");
printf(";;;;;;;;;.........  .. . .       NNNNNNNNNNNNNN       .     ...........;;;;;;;;;\n");
printf("-;;;;;;;;;;............  ..         -NNNNNH;  .   . .      ...........;;;;;;;;-;\n");
printf("---;;;;;;;;.;;..........    .   ..        .    .  .        ...........;;;;;;;;;;\n");
printf("---;;;;;;;;............. ....     . .     ..  ....      ...........;;;;;;;;;----\n");
printf("--;;;;;;;;;.;......... . .  ..                .  .. .. .. ..........;;;;;;;;;;-;\n");
printf("---;;;;;;;;;;;;........ ..        ..      . .  .  .   .............;.;;;;;-;;;--\n");
printf(";;-;;;;;;;;;;;;...........             .  .          ..............;;;;;;;;;;;;-\n");
printf("--;-;;;;;;;;.;.;.;..............  .. ...   .   ..... ..........;.;;;;;;;;-;-----\n");
printf(";----;-;;;-;;;;;;;.....................  .... .................;;;;;;;-;--------\n");
printf(";;;-;;-;;;;;;;;;;;;............... .....   . ..................;;;;;;;;;-;;-----\n");
printf("-;--;-;;;;;;;;;.;;;;............... .......................;;.;;;;;;;;;;;-;;;;--\n");
printf(";-;;;--;;;;;;;;;;;;;;;.................... ................;;;;;;;;;;;;;-------\n");
milli_delay(500);

reset();
}

