//
//  UIView+Extension.h
//
//  Created by young on 14/3/7.
//  Copyright © 2014年 young. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@end


@interface UIView (Frame)

@property (nonatomic, assign)CGFloat x;
@property (nonatomic, assign)CGFloat y;
@property (nonatomic, assign)CGFloat width;
@property (nonatomic, assign)CGFloat height;
@property (nonatomic, assign)CGFloat centerX;
@property (nonatomic, assign)CGFloat centerY;
@property (nonatomic, assign)CGSize  size;
@property (nonatomic, assign)CGPoint origin;

@end
