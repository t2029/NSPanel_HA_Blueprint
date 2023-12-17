# Creating `nspanel_us_land.HMI` from `nspanel_eu.HMI`:

## Program.s:
Change to `display_mode=3`

## Page `home`:
1. Change left_bt_pic (x,y,w,h) from ( 47,307,120,3) to (467,173,3,120)
2. Change right_bt_pic(x,y,w,h) from (288,307,120,3) to (467, 27,3,120)
3. Rotate pictures 30 & 31 by 90degrees - You will find the rotated pics under pics folder where this instruction file is.

# Creating `nspanel_CJK_xxx.HMI` from `nspanel_xxx.HMI`:

## Program.s:
Change to `charset=2`

## Fonts:
1. Replace `ubuntuXX` fonts by the ones available under this folder
* Note that not all fonts are available.
* Note that CJK font names might not match it's size. This should be ignored.