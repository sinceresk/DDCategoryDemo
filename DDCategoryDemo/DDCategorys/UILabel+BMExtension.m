//
//  UILabel+BMExtension.m
//  BMDeliverySpecialists
//
//  Created by Sincere on 15/7/13.
//  Copyright (c) 2015年 cofortune. All rights reserved.
//

#import "UILabel+BMExtension.h"


@implementation UILabel (BMExtension)


+ (instancetype)dd_labelWithFrame:(CGRect )frame
                            title:(NSString *)title
                       titleColor:(UIColor *)titleColor
                    textAlignment:(NSTextAlignment)textAlignment
                             font:(UIFont *)font{
    UILabel *label  = [[UILabel alloc] initWithFrame:frame];
    label.text = title;
    label.textColor = titleColor;
    label.textAlignment = textAlignment;
    label.font = font;
    return label;
}
@end
