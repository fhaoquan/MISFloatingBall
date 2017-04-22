//
//  MISFloatingBall.h
//  MISFloatingBall
//
//  Created by Mistletoe on 2017/4/22.
//  Copyright © 2017年 Mistletoe. All rights reserved.
//  悬浮球

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MISFloatingBallOriginPosition) {
    MISFloatingBallOriginPositionTop = 0,
    MISFloatingBallOriginPositionBottom,
    MISFloatingBallOriginPositionLeft,
    MISFloatingBallOriginPositionRight,
};

@interface MISFloatingBall : UIWindow

- (instancetype)initFloatingBallWithSize:(CGSize)ballSize
                          originPosition:(MISFloatingBallOriginPosition)originPosition;

/**< 悬浮球的大小（默认为44 * 44） */
@property (nonatomic, assign, readonly) CGSize ballSize;
/**< 悬浮球的默认位置 (默认为 MISFloatingBallOriginPositionTop) */
@property (nonatomic, assign, readonly) MISFloatingBallOriginPosition originPosition;

/**< 悬浮球内部视图 （可以外部添加） */
@property (nullable, nonatomic, strong, readonly) UIView *contentView;

- (void)show;
@end
NS_ASSUME_NONNULL_END