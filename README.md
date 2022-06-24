# CTGAP's Keyboard Layouts

This is a log of the layouts I have created. If you are interested in using one, you are responsible for your own implementation.

## CTGAP 4.0

This layout is a return to form after the failed experiment that was version 3.0. The goal was to polish the experimental version 2.0 into something more usable. This once existed in the form of Apsu's [APT](https://github.com/Apsu/APT), but it has morphed into something that no longer remotely resembles any of my layouts (or anything I would peronally use, for that matter). One of the most common criticisms of version 2.0 was the index imbalance; the right index was severely underused compared to the left index. That issue is resolved in this version, with only a 0.8% difference in usage between the index fingers compared to 3.8% in version 2.0. I also reduced top row pinky usage, swapping out `w` in exchange for `x`.

```
x c l m k  j y o u /
r s t h b  p n e i a
q g w d v  z f ' , .
```

### [Genkey](https://github.com/semilin/geney) Breakdown

```
Rolls (l): 18.34%
        Inward: ~14.35%
        Outward: ~3.99%
Rolls (r): 26.81%
        Inward: ~15.55%
        Outward: ~11.25%
Alternates: ~37.94%
Onehands: ~2.27%
Redirects: ~5.17%
Finger Speed (weighted): [0.21 1.60 2.52 2.39 1.46 2.03 1.22 0.61]
Finger Speed (unweighted): [0.31 5.75 12.09 13.14 8.02 9.73 4.39 0.92]
Highest Speed (weighted): 2.52 (LM)
Highest Speed (unweighted): 13.14 (LI)
Index Usage: 14.0% 13.2%
SFBs: 1.062%
DSFBs: 6.816%
LSBs: 1.30%
```

## CTGAP 3.0

This originally began as an attempt to fit IanDoug's X1 layout into a 3x10 grid. I then stumbled onto BEAKL mod Ian, which was essentially that. X1 seemed to have everything I looked for in a layout: high middle finger usage, low travel distance, and lower index usage than Colemak-DH. BEAKL mod Ian maintained that while keeping alphas and common punctuation within the main 3x10 area. Because I'm more used to vowels on the right hand, I mirrored it. After further experimentation, I realized that the original BEAKL 4 vowel hand was more comfortable for me. The resulting layout has the consonant arrangement of BEAKL mod Ian with `v` and `z` swapped to accomodate for angle mod on ANSI boards and the vowel arrangement of BEAKL 4, with punctuation rearranged to accomodate for standard US shift states.

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

This is an experimental version of my layout referred to by Apsu's [APT](https://github.com/Apsu/APT). I deleted the original repo in mid June 2021, but I feel that it makes sense to address it here. The original goal of this layout was to reduce the frequency of pinky-ring NFBs on MTGAP while maintaining its low DSFB rate and distance. The punctuation was taken from Alan Reiser's [Hands Down Reference](https://sites.google.com/alanreiser.com/handsdown#h.s6920vg5spfm).

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
