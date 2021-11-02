# CTGAP Keyboard Layouts
This is a log of the layouts I have created. If you are interested in using one, you are responsible for your own implementation.
## CTGAP 3.0
This originally began as an attempt to fit IanDoug's X1 layout into a 3x10 grid. I then stumbled onto BEAKL mod Ian, which was essentially that. X1 seemed to have everything I looked for in a layout: high middle finger usage, low travel distance, and lower index usage than Colemak-DH. BEAKL mod Ian maintained that while keeping alphas and common punctuation within the main 3x10 area. Because I'm more used to vowels on the right hand, I mirrored it. After further experimentation, I realized that the original BEAKL 4 vowel hand was more comfortable for me. The resulting layout has the consonant arrangement of BEAKL mod Ian with `v` and `z` swapped to accomodate for angle mod on ANSI boards (something I no longer account for) and the vowel arrangement of BEAKL 4, with punctuation rearranged to accomodate for standard US shift states. This layout has a rather high SFB rate, especially compared to some of the layouts I have used in the past (Hands Down Reference, ISRT, CTGAP 2.0).
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
### Heatmap
![Heatmap](https://github.com/CTGAP/ctgap-keyboard-layout/blob/main/klanext/ctgap-3.en.ergodox_heatmap.PNG?raw=true)
## CTGAP 2.0
This is an experimental version of CTGAP referred to by Apsu's [APT](https://github.com/Apsu/APT). I deleted the original repo in mid June 2021, but I feel that it makes sense to address it here. The original goal of this layout was to reduce the frequency of pinky-ring NFBs on MTGAP while maintaining its low DSFB rate and distance. The punctuation was taken from Alan Reiser's [Hands Down Reference](https://sites.google.com/alanreiser.com/handsdown#h.s6920vg5spfm). Although the `o'` bigram contributed to DSFB distance, I no longer cared about its performance on Genkey and instead wanted to maximize its comfort and usability for me.
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
