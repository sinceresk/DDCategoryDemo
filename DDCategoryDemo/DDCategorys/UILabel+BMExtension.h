//
//  UILabel+BMExtension.h
//  BMDeliverySpecialists
//
//  Created by Sincere on 15/7/13.
//  Copyright (c) 2015年 cofortune. All rights reserved.

#import <UIKit/UIKit.h>

@interface UILabel (BMExtension)
/**
 *  快速创建Label
 *
 *  @param frame         frame
 *  @param title         文字
 *  @param titleColor    文字颜色
 *  @param textAlignment 对齐方式
 *  @param font          字体
 */
+ (instancetype)dd_labelWithFrame:(CGRect )frame
                            title:(NSString *)title
                       titleColor:(UIColor *)titleColor
                    textAlignment:(NSTextAlignment)textAlignment
                             font:(UIFont *)font;
@end
