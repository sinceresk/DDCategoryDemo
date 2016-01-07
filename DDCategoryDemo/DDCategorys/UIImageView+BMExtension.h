

//  Created by Sincere on 15/7/13.
//  Copyright (c) 2015年 cofortune. All rights reserved.

#import <UIKit/UIKit.h>

@interface UIImageView (BMExtension)

/**
 *  创建 UIImageView
 *
 *  @param frame    尺寸
 *  @param imageStr 图片名字(图片在项目中)
 */
+ (instancetype)dd_imageViewWithFrame:(CGRect)frame
                           imageStr:(NSString *)imageStr;

/**
 *  创建 UIImageView
 *
 *  @param frame     尺寸
 *  @param imageStr  图片名字(图片在项目中)
 *  @param tapAction 单击回调
 */
+ (instancetype)dd_imageViewWithFrame:(CGRect)frame
                              imageStr:(NSString *)imageStr
                             tapAction: ( void(^)(UIImageView *image))tapAction;
                              
                              
@end
