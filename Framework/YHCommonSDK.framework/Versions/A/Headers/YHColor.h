//
//  YHColor.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#ifndef YHColor_h
#define YHColor_h

#define RGBA(R/*红*/, G/*绿*/, B/*蓝*/, A/*透明*/) \
[UIColor colorWithRed:R/255.f green:G/255.f blue:B/255.f alpha:A]

//-----颜色规范.start-----//

//主色、主灰色
#define colorMain           [UIColor colorWithHexString:@"#196ffa"]
#define colorMainGray       [UIColor colorWithHexString:@"#edf3fe"]

//辅色
#define colorSecondary1     [UIColor colorWithHexString:@"#20d06a"]
#define colorSecondary2     [UIColor colorWithHexString:@"#ff7800"]
#define colorSecondary3     [UIColor colorWithHexString:@"#ef482c"]

//辅灰色
#define colorSecondaryGray1 [UIColor colorWithHexString:@"#ebfcf2"]
#define colorSecondaryGray2 [UIColor colorWithHexString:@"#fcf3eb"]
#define colorSecondaryGray3 [UIColor colorWithHexString:@"#fcedeb"]

//灰色
#define colorBlack          [UIColor colorWithHexString:@"#000000"]
#define colorDarkGray       [UIColor colorWithHexString:@"#999999"]
#define colorGray           [UIColor colorWithHexString:@"#cccccc"]
#define colorLightGray      [UIColor colorWithHexString:@"#dddddd"]
#define colorWhiteGray      [UIColor colorWithHexString:@"#eeeeee"]
#define colorWhite          [UIColor colorWithHexString:@"#ffffff"]

//文字灰色
#define colorTextBlack      [UIColor colorWithHexString:@"#333333"]
#define colorTextDarkGray   [UIColor colorWithHexString:@"#666666"]
#define colorTextGray       [UIColor colorWithHexString:@"#999999"]
#define colorTextLightGray  [UIColor colorWithHexString:@"#dddddd"]
#define colorTextWhite      [UIColor colorWithHexString:@"#ffffff"]

//背景色
#define colorBg             [UIColor colorWithHexString:@"#f5f5f5"]
#define colorBgWhite        [UIColor colorWithHexString:@"#ffffff"]

//-----颜色规范.end-----//

#define colorHalfVisible [UIColor colorWithHue:0 saturation:0 brightness:0 alpha:0.7] //半透明

#define colorTransparent [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.1]//透明

#define colorClear [UIColor clearColor]//透明


//-----其他颜色-----//

#define colorffffff [UIColor colorWithHexString:@"#FFFFFF"]

#define color000000 [UIColor colorWithHexString:@"#000000"]

#define color333333 [UIColor colorWithHexString:@"#333333"]

#define colorf5f5f5 [UIColor colorWithHexString:@"#f5f5f5"]
//#define color5087ff [UIColor colorWithHexString:@"#5087ff"] //loginview bgcolor

#define color2760dc [UIColor colorWithHexString:@"#2760dc"]

#define colorb35087 [UIColor colorWithHexString:@"#b35087"]

#define colora7c3ff [UIColor colorWithHexString:@"#a7c3ff"]

#define color749bff [UIColor colorWithHexString:@"#749bff"]

/*tab color*/
#define color5087ff [UIColor colorWithHexString:@"#5087ff"]//seledted color

#define color828b9f [UIColor colorWithHexString:@"#828b9f"]//unselected color

#define colorefeff4 [UIColor colorWithHexString:@"#efeff4"]//gray color

/* */
#define coloradadad [UIColor colorWithHexString:@"#adadad"]

#define colorfaa028 [UIColor colorWithHexString:@"#faa028"]//橙色

#define colora8c3ff [UIColor colorWithHexString:@"#a8c3ff"]//浅蓝

#define color206fef [UIColor colorWithHexString:@"#206fef"]//

#define colorf7f8fa [UIColor colorWithHexString:@"#f7f8fa"]//

#define colorf79c46 [UIColor colorWithHexString:@"#f79c46"]//

#define color4d83ff [UIColor colorWithHexString:@"#4d83ff"]

#define color848383 [UIColor colorWithHexString:@"#848383"]

#define color747474 [UIColor colorWithHexString:@"#747474"]

#define color5a88f7 [UIColor colorWithHexString:@"#5a88f7"]

#define colorecf1fd [UIColor colorWithHexString:@"#ecf1fd"]//progress bg
#define colorfaa942 [UIColor colorWithHexString:@"#faa942"]//progress

#define colora8c3ff [UIColor colorWithHexString:@"#a8c3ff"]

#define color606060 [UIColor colorWithHexString:@"#606060"]

#define colorf1f7fd [UIColor colorWithHexString:@"#f1f7fd"]

#define color94b2cb [UIColor colorWithHexString:@"#94b2cb"]

//loading color
#define color387dfb [UIColor colorWithHexString:@"#387dfb"] //蓝色：387dfb
#define colorfda63b [UIColor colorWithHexString:@"#fda63b"] //黄色：fda63b
#define color97d94d [UIColor colorWithHexString:@"#97d94d"] //绿色：97d94d

#define color555555 [UIColor colorWithHexString:@"#555555"]

#define colora7c3ff [UIColor colorWithHexString:@"#a7c3ff"]

#define colorfaa028 [UIColor colorWithHexString:@"#faa028"]//监控正常颜色

#define colorff899a [UIColor colorWithHexString:@"#ff899a"]//监控异常颜色

#define colorff801a [UIColor colorWithHexString:@"#ff801a"]

#define color858585 [UIColor colorWithHexString:@"#858585"]

#define color898989 [UIColor colorWithHexString:@"#898989"]

#define colorE0EEFF [UIColor colorWithHexString:@"#E0EEFF"]

#define colorEAEAEA [UIColor colorWithHexString:@"#EAEAEA"]

#define color196FFA [UIColor colorWithHexString:@"#196FFA"]

#define color3C84F5 [UIColor colorWithHexString:@"#3C84F5"]

#define colorCDCDCD [UIColor colorWithHexString:@"#CDCDCD"]

#define color458AF9 [UIColor colorWithHexString:@"#458AF9"]

#define color3379FF [UIColor colorWithHexString:@"#3379FF"]

#define color5B5B5B [UIColor colorWithHexString:@"#5B5B5B"]

#define color606060 [UIColor colorWithHexString:@"#606060"]//word color

#define color9d9d9d [UIColor colorWithHexString:@"#9d9d9d"]

#define colorB0CBFF [UIColor colorWithHexString:@"#B0CBFF"]

#define color382D16 [UIColor colorWithHexString:@"#382D16"]

#define color5E9AFC [UIColor colorWithHexString:@"#5E9AFC"]


//银行卡颜色
//#define color387dbf [UIColor colorWithHexString:@"#387DFB"]//blue

#define color19ac69 [UIColor colorWithHexString:@"#19ac69"]//green

#define coloref482c [UIColor colorWithHexString:@"#ef482c"]//red

#define color9a9a9a [UIColor colorWithHexString:@"#9a9a9a"]

#define colorB8B8B8 [UIColor colorWithHexString:@"#B8B8B8"]

#define colorD1D1D1 [UIColor colorWithHexString:@"#D1D1D1"]

#define color196AFF [UIColor colorWithHexString:@"#196AFF"]

#define color353535 [UIColor colorWithHexString:@"#353535"]

#define color5293ff [UIColor colorWithHexString:@"#5293ff"]

#define color2d75ff [UIColor colorWithHexString:@"#2d75ff"]

#define colorb2b2b2 [UIColor colorWithHexString:@"#b2b2b2"]

#define colorefeff4 [UIColor colorWithHexString:@"#efeff4"]

#define colore5e5e5 [UIColor colorWithHexString:@"#e5e5e5"]

#define color8f8f8f [UIColor colorWithHexString:@"#8f8f8f"]

#define color474747 [UIColor colorWithHexString:@"#474747"]

#define colorD4D4D4 [UIColor colorWithHexString:@"#D4D4D4"]

#define colorC2C2C2 [UIColor colorWithHexString:@"#C2C2C2"]

#define colorCCDCFE [UIColor colorWithHexString:@"#CCDCFE"]

#define colorF0F4FE [UIColor colorWithHexString:@"#F0F4FE"]

#define color787878 [UIColor colorWithHexString:@"#787878"]

#define colorBFBFBF [UIColor colorWithHexString:@"#BFBFBF"]

#define colorEEEEEE [UIColor colorWithHexString:@"#EEEEEE"]

#define color37ccfa [UIColor colorWithHexString:@"#37ccfa"]

#define colorFD5D53 [UIColor colorWithHexString:@"#FD5D53"]

#define color9c9c9c [UIColor colorWithHexString:@"#9c9c9c"]

#define colorF4F8FF [UIColor colorWithHexString:@"#F4F8FF"]

#define color79b731 [UIColor colorWithHexString:@"#79b731"]

#define colorf1f8ea [UIColor colorWithHexString:@"#f1f8ea"]

#define colorC8C8C8 [UIColor colorWithHexString:@"#C8C8C8"]

#define color417BF6 [UIColor colorWithHexString:@"#417BF6"]

//money color
#define color3379FF [UIColor colorWithHexString:@"#3379FF"]//blue

#define colorFC5F5F [UIColor colorWithHexString:@"#FC5F5F"]//red


#define color417BF6 [UIColor colorWithHexString:@"#417BF6"]
#define colorAFCAFF [UIColor colorWithHexString:@"#AFCAFF"]

#define colorECF3FF [UIColor colorWithHexString:@"#ECF3FF"]

#define color9DC0FA [UIColor colorWithHexString:@"#9DC0FA"]

#define colorB3CAFB [UIColor colorWithHexString:@"#B3CAFB"]

#define colorDBE9FF [UIColor colorWithHexString:@"#DBE9FF"]

#define colorE5F0FF [UIColor colorWithHexString:@"#E5F0FF"]

#define color006dff [UIColor colorWithHexString:@"#006dff"]

#define colora9a9a9 [UIColor colorWithHexString:@"#a9a9a9"]

#define colordedede [UIColor colorWithHexString:@"#dedede"]

#define colorFF7800 [UIColor colorWithHexString:@"#FF7800"]

#define color4881FF [UIColor colorWithHexString:@"#4881FF"]

#define colora4a4a4 [UIColor colorWithHexString:@"#a4a4a4"]

#define color7b7b7b [UIColor colorWithHexString:@"#7b7b7b"]

#define colorFA8319 [UIColor colorWithHexString:@"#FA8319"]

#define colordcdcdc [UIColor colorWithHexString:@"#dcdcdc"]

#define color9b9b9b [UIColor colorWithHexString:@"#9b9b9b"]

#define color999999 [UIColor colorWithHexString:@"#999999"]

#define colorDB3D05 [UIColor colorWithHexString:@"#DB3D05"]

#define color80AEFF [UIColor colorWithHexString:@"#80AEFF"]

#define color0096FF [UIColor colorWithHexString:@"#0096FF"]

#define color36CD84 [UIColor colorWithHexString:@"#36CD84"]

#define color00C673 [UIColor colorWithHexString:@"#00C673"]

#define colorFFF7EF [UIColor colorWithHexString:@"#FFF7EF"]

#define colorF4750E [UIColor colorWithHexString:@"#F4750E"]

#define color666666 [UIColor colorWithHexString:@"#666666"]

#define color4DCB7B [UIColor colorWithHexString:@"#4DCB7B"]

#define color46A468 [UIColor colorWithHexString:@"#46A468"]

#define colorF2FFF7 [UIColor colorWithHexString:@"F2FFF7"]

#define color616161 [UIColor colorWithHexString:@"616161"]

#define color5FB41B [UIColor colorWithHexString:@"5FB41B"]

#define colorA1C61A [UIColor colorWithHexString:@"A1C61A"]

#define colorAAC3FE [UIColor colorWithHexString:@"AAC3FE"]

#define color88B5FF [UIColor colorWithHexString:@"88B5FF"]

#define color20D06A [UIColor colorWithHexString:@"20D06A"]

#define colorF45D55 [UIColor colorWithHexString:@"F45D55"]

#endif /* YHColor_h */
