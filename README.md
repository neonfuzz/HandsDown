My implementation of the Hands Down Gold Layout, as defined on [Alan Reiser's Hands Down website](https://sites.google.com/alanreiser.com/handsdown).

Code is largely my own, though heavily inspired by [Alan Reiser's own QMK implementation](https://github.com/moutis/HandsDown). That being said, `adaptive.c` is inspired more by [`replicaJunction`'s adaptive pull request](https://github.com/qmk/qmk_firmware/pull/14034).

Successfully compiled with qmk firmware 0.21.6

Features
========

Linger
------
Some keys produce different values if pressed and held.

  * C &rarr; COM
  * K &rarr; KE
  * O &rarr; OWN
  * Q &rarr; QU
  * brackets <[{(, quotes '", and asterisks * &rarr; will make a matching set of two and put the cursor between them
  * punctuation .?! will add a space and capitalize the next letter

Adaptive
--------
Sets of keys pressed quickly one after another will produce different output than if they were to be pressed individually or slowly.

 * A, &rarr; AU
 * BD &rarr; BL
 * CW &rarr; CD
 * DB &rarr; LB
 * FX &rarr; FR
 * GM &rarr; GL
 * VM &rarr; VL
 * LF &rarr; LS
 * MV &rarr; MB
 * PV &rarr; LV
 * PM &rarr; PL
 * WC &rarr; WR
 * ,A &rarr; UA
 * .: &rarr; .COM

Combos
------
Sets of keys pressed together (chorded) will produce different output than if they were pressed individually. Many of these combinations were inspired by the Teeline shorthand. See `combos.c` for the full list.

 * Off-map alphas (JP &rarr; Z and UK &rarr; Q)
 * H-digraphs e.g., DN &rarr; TH
 * Common word pieces e.g., ANG, ITY, SUPER
 * Pronouns e.g., I'VE, THEMSELVES, YOU'LL

If you press BACKSPACE after having typed a combo, the entire combo will be backspace'd.

Overrides
---------
Change default shifted behavior of some keys.

 * SHIFT + . &rarr; &
 * SHIFT + , &rarr; |
 * SHIFT + / &rarr; *
 * SHIFT + ? &rarr; !
 * SHIFT + _ &rarr; -
 * SHIFT + : &rarr; ;
 * SHIFT + BACKSPACE &rarr; DELETE

Unique caps lock
----------------
Several different intelligent modes for capslock. All modes end when toggled, or when ESC or ENTER are pressed

 * **ALLCAPS**: MAKE EVERYTHING CAPITALIZED
 * **CAPSWORD**: make a SINGLE word all-caps
 * **TITLECAPS**: Make The First Letter After SPACE Capitalized (doesn't [currently] work with combos)
 * **LAMPOON**: aLtErNaTe CapItAl lEtTeRs

Supported Keyboards
===================
 * Ergodox EZ
 * Ergodox Moonlander
