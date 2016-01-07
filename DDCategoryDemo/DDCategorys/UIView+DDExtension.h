//
//  UIView+DDExtension.h
//  DDCategories
//
///  Created by Sincere on 15/7/13.
//  Copyright (c) 2015年 cofortune. All rights reserved.

#import <UIKit/UIKit.h>


@interface UIView (DDExtension)


@property (nonatomic, assign ,setter=dd_setX:)        CGFloat dd_x;
@property (nonatomic, assign ,setter=dd_setY:)        CGFloat dd_y;
@property (nonatomic, assign ,setter=dd_setWidth:)    CGFloat dd_width;
@property (nonatomic, assign ,setter=dd_setHeight:)   CGFloat dd_height;

@property (nonatomic, assign ,setter=dd_setOrigin:)   CGPoint dd_origin;
@property (nonatomic, assign ,setter=dd_setSize:)     CGSize dd_size;

@property (nonatomic, assign ,setter=dd_setCenterX:)  CGFloat  dd_centerX;
@property (nonatomic, assign ,setter=dd_setCenterY:)  CGFloat  dd_centerY;

@property (nonatomic, assign ,setter=dd_setCornerRadius:) CGFloat dd_cornerRadius;


@end
