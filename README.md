# CTGAP Keyboard Layouts

## CTGAP 3.0
```
v p l c f  k u o y j
r n t s d  ' a e i h
z b m g w  x , . ; q
```
### [Genkey](https://github.com/semilin/genkey) Breakdown
```
Rolls (l): 21.73%
        Inward: ~14.06%
        Outward: ~7.67%
Rolls (r): 20.36%
        Inward: ~16.98%
        Outward: ~3.37%
Alternates: ~43.98%
Onehands: ~1.52%
Redirects: ~1.94%
Finger Speed (weighted): [1.36 0.70 2.36 4.32 2.45 2.70 0.38 0.03]
Finger Speed (unweighted): [2.04 2.52 11.33 23.74 13.49 12.97 1.37 0.05]
Highest Speed (weighted): 4.32 (LI)
Highest Speed (unweighted): 23.74 (LI)
Index Usage: 19.1% 13.3%
SFBs: 1.508%
DSFBs: 7.863%
LSBs: 1.14%
```
### KLAnext Results
![Results](https://github.com/CTGAP/ctgap-keyboard-layout/blob/main/klanext/results.PNG)
### Heatmap
![Heatmap](https://github.com/CTGAP/ctgap-keyboard-layout/blob/main/klanext/ctgap-3.en.ergodox_heatmap.PNG?raw=true)
### Implementations
[Angle mod](https://colemakmods.github.io/ergonomic-mods/angle.html) is essential to implementation on row-stagger keyboards.
#### ANSI
```
-----------------Shifted-----------------
~  !  @  #  $  %  ^  &  *  (  )  {  }
    V  P  L  C  F  K  U  O  Y  J  ?  +  |
     R  N  T  S  D  "  A  E  I  H  _
       B  M  G  W  Z  X  <  >  :  Q

----------------Unshifted----------------
`  1  2  3  4  5  6  7  8  9  0  [  ]
    v  p  l  c  f  k  u  o  y  j  /  =  \
     r  n  t  s  d  '  a  e  i  h  -
       b  m  g  w  z  x  ,  .  ;  q
```
#### ISO
```
----------------Shifted----------------
¬  !  "  ₤  $  %  ^  &  *  (  )  {  }
    V  P  L  C  F  K  U  O  Y  J  ?  +
     R  N  T  S  D  @  A  E  I  H  _  ~
    Z  B  M  G  W  |  X  <  >  :  Q

---------------Unshifted---------------
`  1  2  3  4  5  6  7  8  9  0  [  ]
    v  p  l  c  f  k  u  o  y  j  /  =
     r  n  t  s  d  '  a  e  i  h  -  #
    z  b  m  g  w  \  x  ,  .  ;  q
```
#### Matrix
```
-----------------Shifted-----------------
~  !  @  #  $  %  ^  &  *  (  )  {  }
   V  P  L  C  F  K  U  O  Y  J  ?  +  |
   R  N  T  S  D  "  A  E  I  H  _
   Z  B  M  G  W  X  <  >  :  Q

----------------Unshifted----------------
`  1  2  3  4  5  6  7  8  9  0  [  ]
   v  p  l  c  f  k  u  o  y  j  /  =  \
   r  n  t  s  d  '  a  e  i  h  -
   z  b  m  g  w  x  ,  .  ;  q
```
The implementations shown above are of the reference version. Please feel free to make any modifications in your implementation to better suit your personal preferences.
### My Implementation
![Personal Implementation](https://github.com/CTGAP/ctgap-keyboard-layout/blob/main/qmk/ctgap_personal_implementation.png)
## CTGAP 2.0 (Deprecated)
This is an experimental version of CTGAP referred to by Apsu's [APT Keyboard Layout](https://github.com/Apsu/APT). I deleted the original repo in mid June 2021, but I feel that it makes sense to address it here. If you are interested in using this layout, please consider [APT](https://github.com/Apsu/APT) instead; it is in many ways a more refined version of the layout shown here.
```
w c l d k  j y o u /
r s t h m  p n e i a
q v g f b  z x ' , .
```
### [Genkey](https://github.com/semilin/genkey) Breakdown
```
Rolls (l): 19.17%
        Inward: ~14.25%
        Outward: ~4.93%
Rolls (r): 25.43%
        Inward: ~15.54%
        Outward: ~9.89%
Alternates: ~39.09%
Onehands: ~2.19%
Redirects: ~4.78%
Finger Speed (weighted): [1.13 1.60 2.24 2.29 1.31 2.03 1.22 0.61]
Finger Speed (unweighted): [1.70 5.74 10.73 12.59 7.23 9.73 4.39 0.92]
Highest Speed (weighted): 2.29 (LI)
Highest Speed (unweighted): 12.59 (LI)
Index Usage: 15.1% 11.3%
SFBs: 1.007%
DSFBs: 6.803%
LSBs: 1.33%
```
### Heatmap
![Heatmap](https://github.com/CTGAP/ctgap-keyboard-layout/blob/main/klanext/ctgap-2.en.ergodox_heatmap.PNG?raw=true)

Note: This page is a WIP. I plan to add:
- CTGAP 3.0 downloads for Windows, MacOS, and Linux
- Personal QMK Keymaps of CTGAP 3.0 for Dactyl Manuform 3x5/4x5 and Corne/CRKBD 3x5
