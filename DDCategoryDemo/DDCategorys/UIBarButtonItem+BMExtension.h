//
//  UIBarButtonItem+BMExtension.h
//  BMDeliverySpecialists
//
//  Created by Sincere on 15/7/13.
//  Copyright (c) 2015年 cofortune. All rights reserved.

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (BMExtension)

/**
 *  创建一个文字  item
 *
 *  @param frame      frame
 *  @param title      文字
 *  @param titleColor 文字颜色
 *  @param tapAction  回调
 */
+ (instancetype)dd_barButtonItemTitleWithFrame:(CGRect )frame
                                         title:(NSString *)title
                                    titleColor:(UIColor *)titleColor
                                          font:(UIFont *)font
                                     tapAction:(dispatch_block_t)tapAction;
@end
